<?php

/**
 * @file
 * Zeus library file.
 *
 */

function form_input_validate($form, &$form_state) {

}

function form_input_submit($form, &$form_state) {

/*
  $node = node_load($form['node_info']['#value']);
  $file = file_load($node->field_file['und'][0]['fid']);
  $filename = backdrop_basename($file->uri);
  $path = backdrop_realpath($file->uri);
  $content = file($path);

  foreach($content as $line_number => &$line_content) {
    foreach ($line_set as $line_key => $line_val) {
      if ($line_number == $line_key) {
        $line_content = $line_val ? str_replace('false', 'true', $line_content) : str_replace('true', 'false', $line_content);
      }
    }
  }

  $all_content = implode("", $content);
  file_save_data($all_content, $file->uri, FILE_EXISTS_REPLACE);

  // Execute job
  $form_state['rebuild'] = TRUE;

  $job_submitted = false;

  $job_submitted = zeus_execute_job(
    $filename,
    $node->title,
    //$node->field_analysis_setup['und'][0]['value'],
    NULL,
    $node->field_csize['und'][0]['value'],
    $node->field_requested_cores['und'][0]['value'],
    $node->field_requested_tasks['und'][0]['value']);

  if ($job_submitted) {
    backdrop_set_message(t('Job Submit Successful.'));
    $node->field_job_status[LANGUAGE_NONE]['0']['value'] = 1; //Running
    //dsm($node);
  }
  else {
      backdrop_set_message(t('Job Submission Error.'), 'error');
      $node->field_job_status[LANGUAGE_NONE]['0']['value'] = 0; //Failed
  }
  field_attach_update('node', $node); //Save field updates (e.g. job status)
*/
}


