/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_system.h"
#include "nvs_flash.h"

#include "bsp_lcd.h"
#include "gt911.h"
#include "es8311.h"
#include "bsp_sdcard.h"

static const char *TAG = "main";

void app_main(void)
{
    /* Initialize I2C 400KHz */
    ESP_ERROR_CHECK(bsp_i2c_init(I2C_NUM_0, 400000));

    /* LCD init */
    ESP_ERROR_CHECK(bsp_lcd_init());

    /* Touch IC init */
    ESP_ERROR_CHECK(gt911_init());

    ESP_ERROR_CHECK(es8311_codec_config(AUDIO_HAL_44K_SAMPLES));
    es8311_read_chipid();

    /* Init sdcard */
    bsp_sdcard_init_default();

    ESP_LOGI(TAG, "init done");

    uint8_t touch_points_num;
    uint16_t x, y;
    while (1) 
    {
        gt911_read_pos(&touch_points_num, &x, &y);
        if(touch_points_num > 0)
        {
            ESP_LOGI(TAG, "x=%d y=%d", x, y);
        }
        vTaskDelay(pdMS_TO_TICKS(200));
    }
}


