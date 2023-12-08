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
        "-oN", "-oX", "-oS"
    };
    char extension[][100] = {
        ".txt", ".xml", ".txt"
    };
    char time[][10] = {
        "-T3", "-T0", "-T1", "-T2", "-T4", "-T5"
    };

    tool nmap = {'\0'};

    nmap.isRoot = false;

    int type;
    int op;
    banner("Nmap");
    printf("Formats :\n\n1|| nmap Target\n\n2|| nmap -ScanType Target\n\n3|| nmap -Ports Target\n\n4|| nmap -ScanType -Ports Target\n\nEnter your choice : ");
    scanf("%d",&op);
    printf("\nEnter the target : ");
    scanf("%s",nmap.target);

    strcpy(nmap.name,"nmap");

    if(op == 2 || op == 4){
        for(int i = 0; i < 4; i++){
            printf("\n%d|| %s\n",i+1,nmapScanName[i]);
        }
        printf("\nEnter the scan type : ");
        scanf("%d",&type);
        // If root access is needed.
        if(type == 2 || type == 3 || type == 4){
            nmap.isRoot = true;
        }
        // For Scan Type Only
        strcpy(nmap.type,nmapScan[type-1]);
    }
    
    if(op == 3 || op == 4){
        char ports[100];
        printf("\nEnter ports : ");
        strcpy(nmap.ports,"-p ");
        scanf("%s", ports);
        strcat(nmap.ports,ports);
    }

    printf("\nTime Format :\n\n0|| Normal\n\n1|| Paranoid\n\n2|| Sneaky\n\n3|| Polite\n\n4|| Aggressive\n\n5|| Insane\n\nEnter your choice : ");
    scanf("%d",&op);
    if(op != 0)
        strcpy(nmap.time, time[op]);



    printf("\nSaving Format :\n\n0|| Don't save\n\n1|| Text\n\n2|| XML\n\n3|| Script Kiddle\n\nEnter your choice : ");
    scanf("%d",&op);

    // If user want to save file.
    if(op==1||op==2||op==3){
        char outputFileName[100];
        printf("\nEnter file name : ");
        scanf("%s",outputFileName);
        strcpy(nmap.outputType,output[op-1]);
        strcpy(nmap.outputFile,"src/nmapResult/");
        strcat(nmap.outputFile,outputFileName);
        strcat(nmap.outputFile,extension[op-1]);
    }

    printf("\nDo you want to script :\n\n0|| No\n\n1|| Yes\n\nEnter your choice : ");
    scanf("%d", &op);
    if(op == 1){
        printf("\nScript : ");
        strcpy(nmap.more, "--script ");
        char more[100];
        scanf("%s", more);
        strcat(nmap.more, more);
    }

    cc(nmap);
}