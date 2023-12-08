#include "../design/design.h"
#include "tools.h"

void dirb(){
    banner("Dirb");
    tool dirb = {'\0'};
    strcpy(dirb.name,"dirb");
    printf("\nEnter the target : ");
    scanf("%s",dirb.target);
    cc(dirb);
}