#include "../design/design.h"
#include "tools.h"

void nmap(){

    char nmapScan[100][100] = {
        "-sT", "-sU", "-sN", "-sS"
    };
    char nmapScanName[][100] = {
        "TCP Connect Scan", "UDP Scan", "Null Scan", "TCP SYN Scan"
    };
    char output[4][100] = {
        "-oN ", "-oX ", "-oS "
    };
    char extension[][100] = {
        ".txt", ".xml", ".txt"
    };
    char time[][10] = {
        "-T3", "-T0", "-T1", "-T2", "-T4", "-T5"
    };

    tool nmap = {'\0'};

    strcpy(nmap.name,"nmap");
    nmap.isRoot = false;

    int type;
    int op, op2, op3;

    while(true){
        banner("Nmap");
        printf("1|| Set Target\t\t\t\t\t\t\t");
        if(!(strlen(nmap.target) == 0))
            printf("✓");
        else
            printf("□");
        printf("\n\n");
        printf("2|| Set Ports\t\t\t\t\t\t\t");
        if(!(strlen(nmap.ports) == 0))
            printf("✓");
        else
            printf("□");
        printf("\n\n");
        printf("3|| Set Scan Type\t\t\t\t\t\t");
        if(!(strlen(nmap.type) == 0))
            printf("✓");
        else
            printf("□");
        printf("\n\n");
        printf("4|| Set Speed\t\t\t\t\t\t\t");
        if(!(strlen(nmap.time) == 0))
            printf("✓");
        else
            printf("□");
        printf("\n\n");
        printf("0|| Next(Enter target first. Otherwise it dosn't work.)\n\n");
        printf("Enter your choice: ");
        scanf("%d", &op);
        if(op == 0){
            if(strlen(nmap.target) != 0){
                printf("\nDo you want to save?\n\n1|| Yes\n\n2|| No\n\nEnter your choice: ");
                scanf("%d", &op2);
                if(op2 == 1){
                    printf("\nFile Saving Format:\n\n1|| Text\n\n2|| XML\n\n3|| Script Kiddle\n\nEnter your choice: ");
                    scanf("%d",&op3);
                    char fileName[100];
                    printf("\nEnter file name: ");
                    scanf("%s",fileName);
                    strcpy(nmap.outputFile, output[op3-1]);
                    strcat(nmap.outputFile, "src/saves/nmap/");
                    strcat(nmap.outputFile, fileName);
                    strcat(nmap.outputFile, extension[op3-1]);
                }
                printf("\nDo you want to script?\n\n1|| Yes\n\n2|| No\n\nEnter your choice: ");
                scanf("%d", &op2);
                if(op2 == 1){
                    printf("\nScript : ");
                    strcpy(nmap.more, "--script ");
                    char more[100];
                    scanf("%s", more);
                    strcat(nmap.more, more);
                }
                break;
            }
        }
        else if(op == 1){
            printf("\nEnter the target : ");
            scanf("%s",nmap.target);
        }
        else if(op == 2){
            char ports[100];
            printf("\nEnter ports: ");
            scanf("%s", ports);
            strcpy(nmap.ports,"-p ");
            strcat(nmap.ports,ports);
        }
        else if(op == 3){
            printf("\nScan Type: \n");
            for(int i = 0; i < 4; i++){
                printf("\n%d|| %s\n",i+1,nmapScanName[i]);
            }
            printf("\nEnter your choice: ");
            scanf("%d",&type);
            // If root access is needed.
            if(type == 2 || type == 3 || type == 4){
                nmap.isRoot = true;
            }
            // For Scan Type Only
            strcpy(nmap.type,nmapScan[type-1]);
        }
        else if(op == 4){
            printf("\nTime Format:\n\n0|| Normal\n\n1|| Paranoid\n\n2|| Sneaky\n\n3|| Polite\n\n4|| Aggressive\n\n5|| Insane\n\nEnter your choice: ");
            scanf("%d",&op2);
            if(op2 != 0)
                strcpy(nmap.time, time[op]);
        }
    }

    cc(nmap);
}