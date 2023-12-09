#include "../design/design.h"
#include "tools.h"

void john(){
    tool john = {'\0'};
    int op, op2;
    strcpy(john.name,"john");
    while(true){
        banner("John");
        printf("1|| Set Target\t\t\t\t\t\t\t");
        if(!(strlen(john.target) == 0))
            printf("☑");
        else
            printf("□");
        printf("\n\n");
        printf("2|| Set Wordlist\t\t\t\t\t\t");
        if(!(strlen(john.wordlists) == 0))
            printf("☑");
        else
            printf("□");
        printf("\n\n");
        printf("3|| Set Format\t\t\t\t\t\t\t");
        if(!(strlen(john.format) == 0))
            printf("☑");
        else
            printf("□");
        printf("\n\n");
        printf("0|| Next(Enter target first. Otherwise it dosn't work.)\n\n");
        printf("Enter your choice: ");
        scanf("%d", &op);
        if(op == 0){
            if(strlen(john.target) != 0){
                break;
            }
        }
        else if(op == 1){
            printf("\nEnter the file name with path: ");
            scanf("%s",john.target);
        }
        else if(op == 2){
            char word[100];
            printf("\nWordlists:\n\n");
            system("ls src/wordlists/john/");
            printf("\n\nEnter wordlist name: ");
            scanf("%s", word);
            strcpy(john.wordlists, "--wordlist=src/wordlists/john/");
            strcat(john.wordlists, word);
        }
        else if(op == 3){
            char format[100];
            printf("\nEnter Format: ");
            scanf("%s", format);
            strcpy(john.format, "--format=");
            strcat(john.format, format);
        }
    }
    cc(john);
    strcpy(john.wordlists,"");
    strcpy(john.more, "--show");
    cc(john);
}