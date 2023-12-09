#include "../design/design.h"
#include "tools.h"

void wafw00f(){
    banner("WafW00f");
    tool wafw00f = {'\0'};
    strcpy(wafw00f.name,"wafw00f");
    printf("\nEnter the target : ");
    scanf("%s",wafw00f.target);
    cc(wafw00f);
}