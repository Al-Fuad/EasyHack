#include "../design/design.h"
#include "tools.h"

void dirb(){
    
    tool dirb = {'\0'};
    int op, op2;
    strcpy(dirb.name,"dirb");
    while(true){
        banner("Dirb");
        printf("1|| Set Target\t\t\t\t\t\t\t");
        if(!(strlen(dirb.target) == 0))
            printf("✓");
        else
            printf("□");
        printf("\n\n");
        printf("2|| Set Wordlist\t\t\t\t\t\t");
        if(!(strlen(dirb.wordlists) == 0))
            printf("✓");
        else
            printf("□");
        printf("\n\n");
        printf("3|| Set Speed\t\t\t\t\t\t\t");
        if(!(strlen(dirb.time) == 0))
            printf("✓");
        else
            printf("□");
        printf("\n\n");
        printf("4|| Set Extention\t\t\t\t\t\t");
        if(!(strlen(dirb.extention) == 0))
            printf("✓");
        else
            printf("□");
        printf("\n\n");
        printf("5|| Set Header\t\t\t\t\t\t\t");
        if(!(strlen(dirb.header) == 0))
            printf("✓");
        else
            printf("□");
        printf("\n\n");
        printf("6|| Set Ignore Response Code\t\t\t\t\t");
        if(!(strlen(dirb.ignoreCode) == 0))
            printf("✓");
        else
            printf("□");
        printf("\n\n");
        printf("0|| Next(Enter target first. Otherwise it dosn't work.)\n\n");
        printf("Enter your choice: ");
        scanf("%d", &op);
        if(op == 0){
            if(strlen(dirb.target) != 0){
                printf("\nDo you want to save?\n\n1|| Yes\n\n2|| No\n\nEnter your choice: ");
                scanf("%d", &op2);
                if(op2 == 1){
                    char output[100];
                    printf("\nEnter file name: ");
                    scanf("%s",output);
                    strcpy(dirb.outputFile, "-o src/saves/dirb/");
                    strcpy(dirb.outputFile, output);
                    strcat(dirb.outputFile, ".txt");
                }
                break;
            }
        }
        else if(op == 1){
            printf("\nEnter the target: ");
            scanf("%s",dirb.target);
        }
        else if(op == 2){
            char word[100];
            printf("\nWordlists:\n\n");
            system("ls src/wordlists/dirb/");
            printf("\n\nEnter wordlist name: ");
            scanf("%s", word);
            strcpy(dirb.wordlists, "-w src/wordlists/dirb/");
            strcat(dirb.wordlists, word);
        }
        else if(op == 3){
            char speed[100];
            printf("\nEnter speed in milisecond: ");
            scanf("%s", speed);
            strcpy(dirb.time, "-z ");
            strcat(dirb.time, speed);
        }
        else if(op == 4){
            char exe[100];
            printf("\nEnter extention name: ");
            scanf("%s", exe);
            strcpy(dirb.extention, "-X ");
            strcat(dirb.extention, exe);
        }
        else if(op == 5){
            char head[100];
            printf("\nEnter header name: ");
            scanf("%s", head);
            strcpy(dirb.header, "-H ");
            strcat(dirb.header, head);
        }
        else if(op == 6){
            char icode[100];
            printf("\nEnter ignore response code: ");
            scanf("%s", icode);
            strcpy(dirb.ignoreCode, "-N ");
            strcat(dirb.ignoreCode, icode);

        }
    }

    cc(dirb);
}