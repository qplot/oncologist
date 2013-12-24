<?php

class StemcellLatestMigration extends XMLMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $fields = array(
      'title' => t('Aricle Title'),
      'link' => t('Article RSS Link'),
      'description' => t('Article Abstract'),
      'date' => t('Publication Date'),
      'identifier' => t('Article Identifier'),
    );
    // create source
    $xml_folder = DRUPAL_ROOT . '/' . drupal_get_path('module', 'amp_migrate') . '/data/';
    $items_url = $xml_folder . 'ahead.xml';
    $item_xpath = "item";
    $item_ID_xpath = 'title';

    // create destination
    $this->destination = new MigrateDestinationNode('latest');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $items_class = new MigrateItemsXML($items_url, $item_xpath, $item_ID_xpath);
    $this->source = new MigrateSourceMultiItems($items_class, $fields);
    $this->addFieldMapping('title', 'title')
         ->xpath('title');
    $this->addFieldMapping('body', 'description')
         ->xpath('description');
    $this->addFieldMapping('body:format')
         ->defaultValue('2');
    $this->addFieldMapping('field_latest_link', 'link')
         ->xpath('link');
    $this->addFieldMapping('created', 'date')
         ->xpath('publicationDate');
    $this->addFieldMapping('field_latest_identifier', 'identifier')
         ->xpath('identifier[1]');
  }

  public function preImport() {
    parent::preImport();

    // load xml file
    $file = file_get_contents('http://theoncologist.alphamedpress.org/rss/ahead.xml');

    $removes = array(
      " xmlns=\"http://purl.org/rss/1.0/\"",
      "prism:",
      "dc:"
    );

    // remove the default namespace
    $nfile = str_replace($removes, "", $file);

    // save the file locally
    $xml_folder = DRUPAL_ROOT . '/' . drupal_get_path('module', 'amp_migrate') . '/data/';
    $items_url = $xml_folder . 'ahead.xml';
    file_put_contents($items_url, $nfile);
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // $row->identifier = str_replace('info:doi/', '', $row->identifier);

    return TRUE;
  }

  public function prepare($node, stdClass $row) {
    // parse link
    // http://theoncologist.alphamedpress.org/cgi/content/short/theoncologist.2013-0297v1?rss=1
    // $matches = array();
    // $pattern = '/theoncologist.[0-9]*-[0-9]*/';
    // if (!preg_match($pattern, $row->link, $matches))
    //   return;
    // $article_id = $matches[0];


    // call api to resolve
    $identifier = str_replace('info:doi/', '', $row->identifier);
    $key = 'a1e00014-7395-42c1-b621-31ce760e0f03';
    $file = file_get_contents('http://api.highwire.org/content?doi=' . $identifier . '&key=' . $key);
    $xml = new SimpleXMLElement($file);
    $ns = $xml->getNamespaces(true);
    $xml->registerXPathNamespace('atom', $ns['atom']);
    $res = $xml->xpath('//atom:link[@type="application/pdf"]');

    $link = (string)$res[0]->attributes()->href;

    // version API link
    // $link = $link . '?key=' . $key;
    $link = str_replace(
      'http://api.highwire.org/content/theoncologist/early/',
      'http://theoncologist.alphamedpress.org/content/early/',
      $link
    );

    // into link
    // http://theoncologist.alphamedpress.org/content/early/2013/11/25/theoncologist.2013-0297.full.pdf
    $node->field_latest_pdf_link['und'][0]['value'] = $link;
  }


}

?>
