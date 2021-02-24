#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    char c = 0;
    char str[100];
    memset(str, 0, sizeof(str));
    while (c != '\n')
    {
        c = getchar();
        if (c != 0xff)
        {
            str[strln(str)] = c;
            printf ("%c", c);
        }
        vTaskDelay(100 / porTICK_PERIOD_MS);
    }
    printf("you tiped: %s\n", str);
}