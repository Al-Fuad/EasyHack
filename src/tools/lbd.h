#include "../design/design.h"
#include "tools.h"

void lbd(){
    tool lbd = {'\0'};
    strcpy(lbd.name,"ldb");
    int op;
    while(true){
        banner("LBD");
        heading("Option");
        lineMark(1,"Set Target",strlen(lbd.target));
        line(2,"Next(Enter target first. Otherwise it dosn't work.)");
        line(0,"Back");
        op = intInput();
        if(op == 1){
            heading("Enter The Target");
            stringInput(lbd.target);
        }
        else if(op == 2 && strlen(lbd.target) != 0){
            run(lbd);
            break;
        }
        else if(op == 0){
            break;
        }
    }
}
