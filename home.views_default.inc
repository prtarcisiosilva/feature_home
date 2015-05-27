<?php
/**
 * @file
 * home.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function home_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'home';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'home';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    4 => '4',
    6 => '6',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_b_cadastrar' => 'field_b_cadastrar',
    'field_b_relatorios' => 'field_b_relatorios',
  );
  $handler->display->display_options['row_options']['separator'] = '      ';
  /* Relationship: Conteúdo: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Campo: Conteúdo: b.cadastrar */
  $handler->display->display_options['fields']['field_b_cadastrar']['id'] = 'field_b_cadastrar';
  $handler->display->display_options['fields']['field_b_cadastrar']['table'] = 'field_data_field_b_cadastrar';
  $handler->display->display_options['fields']['field_b_cadastrar']['field'] = 'field_b_cadastrar';
  $handler->display->display_options['fields']['field_b_cadastrar']['label'] = '';
  $handler->display->display_options['fields']['field_b_cadastrar']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_b_cadastrar']['alter']['path'] = 'node/add/cadastro-notificacoes';
  $handler->display->display_options['fields']['field_b_cadastrar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_b_cadastrar']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_b_cadastrar']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Campo: Conteúdo: b.relatorios */
  $handler->display->display_options['fields']['field_b_relatorios']['id'] = 'field_b_relatorios';
  $handler->display->display_options['fields']['field_b_relatorios']['table'] = 'field_data_field_b_relatorios';
  $handler->display->display_options['fields']['field_b_relatorios']['field'] = 'field_b_relatorios';
  $handler->display->display_options['fields']['field_b_relatorios']['label'] = '';
  $handler->display->display_options['fields']['field_b_relatorios']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_b_relatorios']['alter']['path'] = 'relatorios/';
  $handler->display->display_options['fields']['field_b_relatorios']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_b_relatorios']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Conteúdo: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Usuário: Authentication name */
  $handler->display->display_options['arguments']['authname']['id'] = 'authname';
  $handler->display->display_options['arguments']['authname']['table'] = 'authmap';
  $handler->display->display_options['arguments']['authname']['field'] = 'authname';
  $handler->display->display_options['arguments']['authname']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['authname']['exception']['title'] = 'Tudo';
  $handler->display->display_options['arguments']['authname']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['authname']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['authname']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['authname']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['authname']['limit'] = '0';
  /* Filter criterion: Conteúdo: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Conteúdo: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bot_es_home' => 'bot_es_home',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'home';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $translatables['home'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('author'),
    t('Tudo'),
    t('Page'),
    t('Block'),
  );
  $export['home'] = $view;

  $view = new view();
  $view->name = 'relat_rios';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Relatórios';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Relatórios';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    4 => '4',
    6 => '6',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Conteúdo: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Campo: Conteúdo: Unidade de Saúde */
  $handler->display->display_options['fields']['field_unidade']['id'] = 'field_unidade';
  $handler->display->display_options['fields']['field_unidade']['table'] = 'field_data_field_unidade';
  $handler->display->display_options['fields']['field_unidade']['field'] = 'field_unidade';
  /* Campo: Conteúdo: Cnes */
  $handler->display->display_options['fields']['field_cnes']['id'] = 'field_cnes';
  $handler->display->display_options['fields']['field_cnes']['table'] = 'field_data_field_cnes';
  $handler->display->display_options['fields']['field_cnes']['field'] = 'field_cnes';
  $handler->display->display_options['fields']['field_cnes']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Campo: Conteúdo: Data do  Evento */
  $handler->display->display_options['fields']['field_data_do_evento']['id'] = 'field_data_do_evento';
  $handler->display->display_options['fields']['field_data_do_evento']['table'] = 'field_data_field_data_do_evento';
  $handler->display->display_options['fields']['field_data_do_evento']['field'] = 'field_data_do_evento';
  $handler->display->display_options['fields']['field_data_do_evento']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_data_do_evento']['delta_offset'] = '0';
  /* Campo: Conteúdo: Responsável */
  $handler->display->display_options['fields']['field_responsavel']['id'] = 'field_responsavel';
  $handler->display->display_options['fields']['field_responsavel']['table'] = 'field_data_field_responsavel';
  $handler->display->display_options['fields']['field_responsavel']['field'] = 'field_responsavel';
  $handler->display->display_options['fields']['field_responsavel']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Conteúdo: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  /* Campo: Usuário: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Notificante';
  /* Sort criterion: Conteúdo: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Conteúdo: Cnes (field_cnes) */
  $handler->display->display_options['arguments']['field_cnes_value']['id'] = 'field_cnes_value';
  $handler->display->display_options['arguments']['field_cnes_value']['table'] = 'field_data_field_cnes';
  $handler->display->display_options['arguments']['field_cnes_value']['field'] = 'field_cnes_value';
  $handler->display->display_options['arguments']['field_cnes_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_cnes_value']['exception']['title'] = 'Tudo';
  $handler->display->display_options['arguments']['field_cnes_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_cnes_value']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_cnes_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_cnes_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_cnes_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Conteúdo: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Conteúdo: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cadastro_notificacoes' => 'cadastro_notificacoes',
  );

  /* Display: relatorios */
  $handler = $view->new_display('page', 'relatorios', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_unidade' => 'field_unidade',
    'field_cnes' => 'field_cnes',
    'field_data_do_evento' => 'field_data_do_evento',
    'field_responsavel' => 'field_responsavel',
    'name' => 'name',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_unidade' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cnes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_data_do_evento' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_responsavel' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Conteúdo: Unidade de Saúde */
  $handler->display->display_options['fields']['field_unidade']['id'] = 'field_unidade';
  $handler->display->display_options['fields']['field_unidade']['table'] = 'field_data_field_unidade';
  $handler->display->display_options['fields']['field_unidade']['field'] = 'field_unidade';
  /* Campo: Conteúdo: Cnes */
  $handler->display->display_options['fields']['field_cnes']['id'] = 'field_cnes';
  $handler->display->display_options['fields']['field_cnes']['table'] = 'field_data_field_cnes';
  $handler->display->display_options['fields']['field_cnes']['field'] = 'field_cnes';
  $handler->display->display_options['fields']['field_cnes']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cnes']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Campo: Conteúdo: Data do  Evento */
  $handler->display->display_options['fields']['field_data_do_evento']['id'] = 'field_data_do_evento';
  $handler->display->display_options['fields']['field_data_do_evento']['table'] = 'field_data_field_data_do_evento';
  $handler->display->display_options['fields']['field_data_do_evento']['field'] = 'field_data_do_evento';
  $handler->display->display_options['fields']['field_data_do_evento']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_data_do_evento']['delta_offset'] = '0';
  /* Campo: Conteúdo: Responsável */
  $handler->display->display_options['fields']['field_responsavel']['id'] = 'field_responsavel';
  $handler->display->display_options['fields']['field_responsavel']['table'] = 'field_data_field_responsavel';
  $handler->display->display_options['fields']['field_responsavel']['field'] = 'field_responsavel';
  $handler->display->display_options['fields']['field_responsavel']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Usuário: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Campo: Conteúdo: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Conteúdo: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Tudo';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Conteúdo: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Conteúdo: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cadastro_notificacoes' => 'cadastro_notificacoes',
  );
  $handler->display->display_options['path'] = 'relatorios';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_unidade' => 'field_unidade',
    'field_cnes' => 'field_cnes',
    'field_data_do_evento' => 'field_data_do_evento',
    'field_responsavel' => 'field_responsavel',
  );
  $handler->display->display_options['style_options']['default'] = 'field_cnes';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_unidade' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cnes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_data_do_evento' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_responsavel' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Relatorios_block */
  $handler = $view->new_display('block', 'Relatorios_block', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Conteúdo: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Usuário: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;

  /* Display: Notificações Detalhadas */
  $handler = $view->new_display('page', 'Notificações Detalhadas', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Conteúdo: Unidade de Saúde */
  $handler->display->display_options['fields']['field_unidade']['id'] = 'field_unidade';
  $handler->display->display_options['fields']['field_unidade']['table'] = 'field_data_field_unidade';
  $handler->display->display_options['fields']['field_unidade']['field'] = 'field_unidade';
  /* Campo: Conteúdo: Cnes */
  $handler->display->display_options['fields']['field_cnes']['id'] = 'field_cnes';
  $handler->display->display_options['fields']['field_cnes']['table'] = 'field_data_field_cnes';
  $handler->display->display_options['fields']['field_cnes']['field'] = 'field_cnes';
  $handler->display->display_options['fields']['field_cnes']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Campo: Conteúdo: Data do  Evento */
  $handler->display->display_options['fields']['field_data_do_evento']['id'] = 'field_data_do_evento';
  $handler->display->display_options['fields']['field_data_do_evento']['table'] = 'field_data_field_data_do_evento';
  $handler->display->display_options['fields']['field_data_do_evento']['field'] = 'field_data_do_evento';
  $handler->display->display_options['fields']['field_data_do_evento']['settings'] = array(
    'format_type' => 'short',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_data_do_evento']['delta_offset'] = '0';
  /* Campo: Conteúdo: Responsável */
  $handler->display->display_options['fields']['field_responsavel']['id'] = 'field_responsavel';
  $handler->display->display_options['fields']['field_responsavel']['table'] = 'field_data_field_responsavel';
  $handler->display->display_options['fields']['field_responsavel']['field'] = 'field_responsavel';
  $handler->display->display_options['fields']['field_responsavel']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Conteúdo: Data da Notificação (field_data_da_notificacao:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_data_da_notificacao';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  /* Campo: Conteúdo: Hora Início */
  $handler->display->display_options['fields']['field_hora_inicio']['id'] = 'field_hora_inicio';
  $handler->display->display_options['fields']['field_hora_inicio']['table'] = 'field_data_field_hora_inicio';
  $handler->display->display_options['fields']['field_hora_inicio']['field'] = 'field_hora_inicio';
  /* Campo: Conteúdo: Hora Término */
  $handler->display->display_options['fields']['field_hora_terrmino']['id'] = 'field_hora_terrmino';
  $handler->display->display_options['fields']['field_hora_terrmino']['table'] = 'field_data_field_hora_terrmino';
  $handler->display->display_options['fields']['field_hora_terrmino']['field'] = 'field_hora_terrmino';
  /* Campo: Conteúdo: Classificação de Risco */
  $handler->display->display_options['fields']['field_classificacao_risco']['id'] = 'field_classificacao_risco';
  $handler->display->display_options['fields']['field_classificacao_risco']['table'] = 'field_data_field_classificacao_risco';
  $handler->display->display_options['fields']['field_classificacao_risco']['field'] = 'field_classificacao_risco';
  /* Campo: Conteúdo: Conduta da Equipe */
  $handler->display->display_options['fields']['field_conduta_da_equipe']['id'] = 'field_conduta_da_equipe';
  $handler->display->display_options['fields']['field_conduta_da_equipe']['table'] = 'field_data_field_conduta_da_equipe';
  $handler->display->display_options['fields']['field_conduta_da_equipe']['field'] = 'field_conduta_da_equipe';
  /* Campo: Conteúdo: Equipe */
  $handler->display->display_options['fields']['field_equipe']['id'] = 'field_equipe';
  $handler->display->display_options['fields']['field_equipe']['table'] = 'field_data_field_equipe';
  $handler->display->display_options['fields']['field_equipe']['field'] = 'field_equipe';
  /* Campo: Conteúdo: Local do  Evento */
  $handler->display->display_options['fields']['field_local_do_evento']['id'] = 'field_local_do_evento';
  $handler->display->display_options['fields']['field_local_do_evento']['table'] = 'field_data_field_local_do_evento';
  $handler->display->display_options['fields']['field_local_do_evento']['field'] = 'field_local_do_evento';
  /* Campo: Conteúdo: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'Imagem';
  $handler->display->display_options['path'] = 'detalhado/%';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Conteúdo: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Conteúdo: Cnes (field_cnes) */
  $handler->display->display_options['arguments']['field_cnes_value']['id'] = 'field_cnes_value';
  $handler->display->display_options['arguments']['field_cnes_value']['table'] = 'field_data_field_cnes';
  $handler->display->display_options['arguments']['field_cnes_value']['field'] = 'field_cnes_value';
  $handler->display->display_options['arguments']['field_cnes_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_cnes_value']['exception']['title'] = 'Tudo';
  $handler->display->display_options['arguments']['field_cnes_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_cnes_value']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_cnes_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_cnes_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_cnes_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'exportar';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
    'block' => 0,
    'block_1' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['segment_size'] = '100';
  $translatables['relat_rios'] = array(
    t('Master'),
    t('Relatórios'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('author'),
    t('Unidade de Saúde'),
    t('Cnes'),
    t('Data do  Evento'),
    t('Responsável'),
    t('ID'),
    t('Notificante'),
    t('Tudo'),
    t('relatorios'),
    t('Nome'),
    t('Block'),
    t('Relatorios_block'),
    t('Notificações Detalhadas'),
    t('Data da Notificação (field_data_da_notificacao:delta)'),
    t('.'),
    t(','),
    t('Hora Início'),
    t('Hora Término'),
    t('Classificação de Risco'),
    t('Conduta da Equipe'),
    t('Equipe'),
    t('Local do  Evento'),
    t('Imagem'),
    t('Data export'),
  );
  $export['relat_rios'] = $view;

  return $export;
}
