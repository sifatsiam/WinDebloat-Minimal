#include <stdio.h>
#include "driver.h"


int main (void) {
    int rLvL = runlevel();

    if (rLvL == 1){
        printf("function is working\n");
        delay_ms(2000);
        appx();
        edge();
        OneDrive();
    }
    else{
        if (rLvL == 0){
            printf("Program was NOT Started with Admin Privileges.\nExiting in 5 seconds.");
            delay_ms(5000);
        }
        
        if (rLvL == 101){
            printf("SID Init. Failed.\nExiting in 5 seconds.");
            delay_ms(5000);
        }
        
        if (rLvL == 305){
            printf("Token Membership Check Fail.\nExiting in 5 seconds.");
            delay_ms(5000);
        }
        
        if (rLvL == 341){
            printf("Admin Status Check General Failure.\nExiting in 5 seconds.");
            delay_ms(5000);
        }
    }
    
}
