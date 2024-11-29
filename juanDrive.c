#include <stdlib.h>
#include "driver.h"

int juanDrive(void) {
    int i;
    char cmd[500][1000] = {
        "taskkill /f /im explorer.exe",
        "taskkill /f /im OneDrive.exe",
        "\\C:\\Windows\\System32\\OneDriveSetup.exe /uninstall",
        "powershell -NoProfile -Command \"Start-Process explorer.exe\""
    };
    for (i = 0; i < 4; i++){
        system(cmd[i]);
        delay_ms(100);
    }
    return 359;
}