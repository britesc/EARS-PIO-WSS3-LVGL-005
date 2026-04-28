/*******************************************************************************
 * Revision Number: 1001
 * Project:         EARS-PIO-WSS3-LVGL-005
 * File:            main.c
 * Description:     Dual Core FreeRTOS Serial Output Test
 ******************************************************************************/

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

static const char *TAG_MAIN  = "MAIN";
static const char *TAG_CORE0 = "CORE0";
static const char *TAG_CORE1 = "CORE1";

//-----------------------------------------------------------------------------
// Task pinned to Core 0
//-----------------------------------------------------------------------------
static void task_core0(void *pvParameters)
{
    uint32_t count = 0;
    while (1)
    {
        ESP_LOGI(TAG_CORE0, "Core 0 running - count: %lu", count++);
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

//-----------------------------------------------------------------------------
// Task pinned to Core 1
//-----------------------------------------------------------------------------
static void task_core1(void *pvParameters)
{
    uint32_t count = 0;
    while (1)
    {
        ESP_LOGI(TAG_CORE1, "Core 1 running - count: %lu", count++);
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

//-----------------------------------------------------------------------------
// Entry Point
//-----------------------------------------------------------------------------
void app_main(void)
{
    ESP_LOGI(TAG_MAIN, "============================================");
    ESP_LOGI(TAG_MAIN, " EARS-PIO-WSS3-LVGL-005");
    ESP_LOGI(TAG_MAIN, " Dual Core FreeRTOS Test");
    ESP_LOGI(TAG_MAIN, "============================================");

    xTaskCreatePinnedToCore(task_core0, "Task_Core0", 4096, NULL, 5, NULL, 0);
    xTaskCreatePinnedToCore(task_core1, "Task_Core1", 4096, NULL, 5, NULL, 1);
}