#include <windows.h>
#include "driver.h"

int runlevel(void){
    BOOL isRoot;
    SID_IDENTIFIER_AUTHORITY WinNTRoot = SECURITY_NT_AUTHORITY;
    PSID RootGroup;

    if(!AllocateAndInitializeSid(&WinNTRoot, 2, SECURITY_BUILTIN_DOMAIN_RID, DOMAIN_ALIAS_RID_ADMINS, 0, 0, 0, 0, 0, 0, &RootGroup)){
        return 101;
    }
    if(!CheckTokenMembership(NULL, RootGroup, &isRoot)){
        FreeSid(RootGroup);
        return 305;
    }

    FreeSid(RootGroup);

    if(!isRoot){
        return 0;
    }

    if(isRoot){
        return 1;
    }
    
    return 341;
}