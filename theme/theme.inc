<?php

/**
 * @file
 * Provides template preprocess functions for file_filter.module
 */


/**
 * Preprocess variables for the insert-file-filter-image.tpl.php file.
 */
function template_preprocess_insert_file_filter_image(&$vars) {
  $vars['file'] = file_load($vars['item']['fid']);
  $vars['url'] = insert_create_url($vars['file']->uri);
  $vars['class'] = !empty($vars['widget']['settings']['insert_class']) ? $vars['widget']['settings']['insert_class'] : '';
  $image_info = @image_get_info($vars['file']->uri);
  $vars['width'] = isset($image_info['width']) ? $image_info['width'] : '';
  $vars['height'] = isset($image_info['height']) ? $image_info['height'] : '';
}

/**
 * Preprocess variables for the insert-file-filter-absolute.tpl.php file.
 */
function template_preprocess_insert_file_filter_absolute(&$vars) {
  $vars['file'] = file_load($vars['item']['fid']);
  $vars['url'] = insert_create_url($vars['file']->uri);
  $vars['class'] = !empty($vars['widget']['settings']['insert_class']) ? $vars['widget']['settings']['insert_class'] : '';
  $vars['name'] = $vars['file']->filename;
}