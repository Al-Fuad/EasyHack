#include "../design/design.h"
#include "tools.h"

void lbd(){
    banner("LBD");
    tool lbd;
    strcpy(lbd.cmd,"ldb ");
    printf("\nEnter the target : ");
    scanf("%s",lbd.target);
    strcat(lbd.cmd, lbd.target);
    run(lbd.cmd);
}
