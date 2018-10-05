#include "mbed.h"
#include "lvgl/lvgl.h"

extern "C" {
    #include "hal_stm_lvgl/tft/tft.h"
    #include "hal_stm_lvgl/touchpad/touchpad.h"
}

int main()
{
    lv_init();

    tft_init();
    touchpad_init();

    while (1)
    {
        HAL_Delay(5);
        lv_task_handler();
    }
}