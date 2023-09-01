#include "features.h"

void nmap(){
    char nmapScan[100][100] = {
        "-sT", "-sU", "-sN", "-sS"
    };
    char nmapScanName[][100] = {
        "TCP Connect Scan", "UDP Scan", "Null Scan", "TCP SYN Scan"
    };
    char output[4][100] = {
        "-oN", "-oX", "-oS"
    };
    char cmd[100];
    char target[100];
    char ports[100];
    char yn[1];
    char outputFile[100];
    int type = 1;
    int op;
    banner("Nmap");
    printf("Formats :\n\n1|| nmap Target\n\n2|| nmap -ScanType Target\n\n3|| nmap -Ports Target\n\n4|| nmap -ScanType -Ports Target\n\nEnter your choice : ");
    scanf("%d",&op);
    printf("\nEnter the target : ");
    scanf("%s",target);
    if(op == 2 || op == 4){
        for(int i = 0; i < 4; i++){
            printf("\n%d|| %s\n",i+1,nmapScanName[i]);
        }
        printf("\nEnter the scan type : ");
        scanf("%d",&type);
    }
    if(type == 1){
        strcat(cmd,"nmap ");
    }
    else if(type == 2 || type == 3 || type == 4){
        strcat(cmd,"sudo nmap ");
    }
    (op == 2 || op == 4)?strcat(cmd,nmapScan[type-1]):strcat(cmd,"");
    if(op == 3 || op == 4){
        printf("\nEnter ports : ");
        scanf("%s", ports);
        strcat(cmd," -p");
        strcat(cmd,ports);
    }
    strcat(cmd," ");
    strcat(cmd,target);
    printf("\nDo you want to save? Y/N : ");
    scanf("%s",yn);
    if(strcmp(yn,"Y")||strcmp(yn,"y")){
        printf("\nFormat :\n\n1|| Text\n\n2|| XML\n\n3|| Script Kiddle\n\nEnter your choice : ");
        scanf("%d",&op);
        printf("\nEnter file name : ");
        scanf("%s",outputFile);
        strcat(cmd," ");
        strcat(cmd,output[op-1]);
        strcat(cmd," ");
        strcat(cmd,outputFile);
    }
    system(cmd);
}