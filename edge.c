#include <stdlib.h>
#include "driver.h"

int edge(void){
    int i;
    char cmd[500][1000] = {
        "powershell -NoProfile -Command \"$ErrorActionPreference = 'SilentlyContinue'; $services = Get-Service -Name *edge* | Where-Object {$_.DisplayName -like '*Microsoft Edge*'}; foreach($service in $services){Stop-Service -Name $service.Name -Force}\"",
        "powershell -NoProfile -Command \"$ErrorActionPreference = 'Continue'; $processes = Get-Process -Name *msedge* | Where-Object {$_.ProcessName -like '*msedge*'}; foreach($process in $processes){Stop-Process -ProcessName $process.ProcessName -Force}; Stop-Process -ProcessName MicrosoftEdgeUpdate -Force \"",
        "powershell -NoProfile -Command \"Remove-Item -Path 'C:\\Program Files (x86)\\Microsoft\\' -Recurse -Force\""
    };
    for (i = 0; i < 5; i++){
        system(cmd[i]);
        delay_ms(100);
    }
    return 205;
}