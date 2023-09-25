#include "../design/design.h"
#include "tools.h"

void john(){
    banner("John");
    tool john;
    strcpy(john.cmd,"john ");
    printf("\nEnter the target : ");
    scanf("%s",john.target);
    strcat(john.cmd, john.target);
    run(john.cmd);
}