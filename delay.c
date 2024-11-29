#include <time.h>
#include "driver.h"

void delay_ms(double n) {
    clock_t start = clock();
    while (clock() < (start + n * (CLOCKS_PER_SEC / 1000))) {
        __asm__ volatile ("nop");
    }
}