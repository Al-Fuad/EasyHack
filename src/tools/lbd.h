#include "../design/design.h"
#include "tools.h"

void lbd(){
    banner("LBD");
    tool lbd = {'\0'};
    strcpy(lbd.name,"ldb");
    printf("\nEnter the target : ");
    scanf("%s",lbd.target);
    cc(lbd);
}
