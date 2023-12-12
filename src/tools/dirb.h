#include "../design/design.h"
#include "tools.h"

void dirb(){
    
    tool dirb = {'\0'};
    int op, op2;
    strcpy(dirb.name,"dirb");
    while(true){
        banner("Dirb");
        heading("Options");
        lineMark(1,"Set Target",strlen(dirb.target));
        lineMark(2,"Set Wordlist",strlen(dirb.wordlists));
        lineMark(3,"Set Speed",strlen(dirb.time));
        lineMark(4,"Set Extention",strlen(dirb.extention));
        lineMark(5,"Set Header",strlen(dirb.header));
        lineMark(6,"Set Ignore Response Code",strlen(dirb.ignoreCode));
        lineMark(7,"Set Saving Option",strlen(dirb.outputFile));
        line(8, "Next(Enter target first. Otherwise it dosn't work.)");
        line(0, "Back");
        op = intInput();
        if(op == 1){
            heading("Enter The Target");
            stringInput(dirb.target);
        }
        else if(op == 2){
            char word[100];
            heading("Wordlists");
            system("ls src/wordlists/dirb/");
            heading("Enter Wordlist Name");
            easyHack();
            scanf("%s", word);
            strcpy(dirb.wordlists, "-w src/wordlists/dirb/");
            strcat(dirb.wordlists, word);
        }
        else if(op == 3){
            char speed[100];
            heading("Enter Speed In Milisecond");
            easyHack();
            scanf("%s", speed);
            strcpy(dirb.time, "-z ");
            strcat(dirb.time, speed);
        }
        else if(op == 4){
            char exe[100];
            heading("Enter Extention Name");
            easyHack();
            scanf("%s", exe);
            strcpy(dirb.extention, "-X ");
            strcat(dirb.extention, exe);
        }
        else if(op == 5){
            char head[100];
            heading("Enter Header Name");
            easyHack();
            scanf("%s", head);
            strcpy(dirb.header, "-H ");
            strcat(dirb.header, head);
        }
        else if(op == 6){
            char icode[100];
            heading("Enter Ignore Response Code");
            easyHack();
            scanf("%s", icode);
            strcpy(dirb.ignoreCode, "-N ");
            strcat(dirb.ignoreCode, icode);
        }
        else if(op == 7){
            char output[100];
            heading("Enter File Name");
            easyHack();
            scanf("%s",output);
            strcpy(dirb.outputFile, "-o src/saves/dirb/");
            strcat(dirb.outputFile, output);
            strcat(dirb.outputFile, ".txt");
        }
        else if(op == 8 && strlen(dirb.target) != 0){
            run(dirb);
            break;
        }
        else if(op == 0){
            break;
        }
    }
}