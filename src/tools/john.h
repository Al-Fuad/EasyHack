#include "../design/design.h"
#include "tools.h"
#include "../../os.h"

void john(){
    tool john = {'\0'};
    int op, op2;
    strcpy(john.name,"john");
    while(true){
        banner("John");
        heading("Options");
        lineMark(1,"Set Target", strlen(john.target));
        lineMark(2,"Set Wordlist", strlen(john.wordlists));
        lineMark(3,"Set Format", strlen(john.format));
        line(4,"Next(Enter target first. Otherwise it dosn't work.)");
        line(0,"Back");
        op = intInput();
        if(op == 1){
            heading("Enter the file name with path");
            easyHack();
            scanf("%s",john.target);
        }
        else if(op == 2){
            char word[100];
            heading("Wordlists");
            system("ls src/wordlists/john/");
            heading("Enter wordlist name");
            easyHack();
            scanf("%s", word);
            strcpy(john.wordlists, "--wordlist=src/wordlists/john/");
            strcat(john.wordlists, word);
        }
        else if(op == 3){
            char format[100];
            heading("Enter Format");
            easyHack();
            scanf("%s", format);
            strcpy(john.format, "--format=");
            strcat(john.format, format);
        }
        if(op == 4 && strlen(john.target) != 0){
            run(john);
            system(pressEnter);
            strcpy(john.wordlists,"");
            strcpy(john.more, "--show");
            run(john);
            break;
        }
        else if(op == 0){
            break;
        }
    }
}