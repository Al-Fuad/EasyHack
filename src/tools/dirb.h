#include "../design/design.h"
#include "tools.h"

void dirb(){
    
    tool dirb = {'\0'};
    int op, op2;
    strcpy(dirb.name,"dirb");
    while(true){
        banner("Dirb");
        lineMark(1,"Set Target",strlen(dirb.target));
        lineMark(2,"Set Wordlist",strlen(dirb.wordlists));
        lineMark(3,"Set Speed",strlen(dirb.time));
        lineMark(4,"Set Extention",strlen(dirb.extention));
        lineMark(5,"Set Header",strlen(dirb.header));
        lineMark(6,"Set Ignore Response Code",strlen(dirb.ignoreCode));
        line(0, "Next(Enter target first. Otherwise it dosn't work.)");
        op = intInput();
        if(op == 0){
            if(strlen(dirb.target) != 0){
                heading("Do you want to save?");
                line(1,"Yes");
                line(2,"No");
                op2 = intInput();
                if(op2 == 1){
                    char output[100];
                    heading("Enter file name");
                    easyHack();
                    scanf("%s",output);
                    strcpy(dirb.outputFile, "-o src/saves/dirb/");
                    strcpy(dirb.outputFile, output);
                    strcat(dirb.outputFile, ".txt");
                }
                break;
            }
        }
        else if(op == 1){
            heading("Enter the target");
            easyHack();
            scanf("%s",dirb.target);
        }
        else if(op == 2){
            char word[100];
            heading("Wordlists");
            system("ls src/wordlists/dirb/");
            heading("Enter wordlist name");
            easyHack();
            scanf("%s", word);
            strcpy(dirb.wordlists, "-w src/wordlists/dirb/");
            strcat(dirb.wordlists, word);
        }
        else if(op == 3){
            char speed[100];
            heading("Enter speed in milisecond");
            easyHack();
            scanf("%s", speed);
            strcpy(dirb.time, "-z ");
            strcat(dirb.time, speed);
        }
        else if(op == 4){
            char exe[100];
            heading("Enter extention name");
            easyHack();
            scanf("%s", exe);
            strcpy(dirb.extention, "-X ");
            strcat(dirb.extention, exe);
        }
        else if(op == 5){
            char head[100];
            heading("Enter header name");
            easyHack();
            scanf("%s", head);
            strcpy(dirb.header, "-H ");
            strcat(dirb.header, head);
        }
        else if(op == 6){
            char icode[100];
            heading("Enter ignore response code");
            easyHack();
            scanf("%s", icode);
            strcpy(dirb.ignoreCode, "-N ");
            strcat(dirb.ignoreCode, icode);
        }
    }

    cc(dirb);
}