#include "../design/design.h"
#include "tools.h"

void wafw00f(){
    banner("wafw00f");
    tool wafw00f;
    strcpy(wafw00f.cmd,"wafw00f ");
    printf("\nEnter the target : ");
    scanf("%s",wafw00f.target);
    strcat(wafw00f.cmd, wafw00f.target);
    run(wafw00f.cmd);
}