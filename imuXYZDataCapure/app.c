
#include "dataCapture.h"
#include "constants.h"
#include "stdio.h"
#include "app.h"
#include "sl_simple_button.h"
#include "sl_simple_button_instances.h"
#include "sl_led.h"
#include "sl_simple_led_instances.h"

/***************************************************************************//**
 * Initialize application.
 ******************************************************************************/

void app_init(void)
{
  printAbout();
  sl_led_turn_on(&sl_led_led1);
  sl_simple_button_init(&sl_button_btn0);
  dataCapture_init();
  sl_led_turn_off(&sl_led_led1);
}

/***************************************************************************//**
 * App ticking function.
 ******************************************************************************/
void app_process_action(void)
{}
