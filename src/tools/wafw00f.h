#include "../design/design.h"
#include "tools.h"

void wafw00f(){
    tool wafw00f = {'\0'};
    strcpy(wafw00f.name,"wafw00f");
    int op;
    while(true){
        banner("WafWOOf");
        heading("Option");
        lineMark(1,"Set Target",strlen(wafw00f.target));
        line(2,"Next(Enter target first. Otherwise it dosn't work.)");
        line(0,"Back");
        op = intInput();
        if(op == 1){
            heading("Enter The Target");
            stringInput(wafw00f.target);
        }
        else if(op == 2 && strlen(wafw00f.target) != 0){
            run(wafw00f);
            break;
        }
        else if(op == 0){
            break;
        }
    }
}