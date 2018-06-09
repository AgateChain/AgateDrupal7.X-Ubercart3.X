<?php

require_once("agate_lib.php");

// Handle the callback from the agate server.
function uc_agate_callback(){
  agate_log("Entered callback ");
    drupal_set_message(t('Your agate Invoice was expired. Please feel free to continue shopping or contact us for assistance.'));
    drupal_goto('cart');
} // end function uc_agate_callback
