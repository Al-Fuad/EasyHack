#include "../design/design.h"
#include "tools.h"

void dirb(){
    banner("Dirb");
    tool dirb;
    strcpy(dirb.cmd,"dirb ");
    printf("\nEnter the target : ");
    scanf("%s",dirb.target);
    strcat(dirb.cmd, dirb.target);
    run(dirb.cmd);
}