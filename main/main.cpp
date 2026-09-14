#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

extern "C" void app_main(void)
{
    printf("M5Paper bare-metal starter online.\n");

    while (true) {
        printf("Awaiting next structural directive...\n");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
