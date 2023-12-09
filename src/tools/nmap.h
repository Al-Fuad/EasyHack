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
        lineMark(1, "Set Target", strlen(nmap.target));
        lineMark(2, "Set Ports", strlen(nmap.ports));
        lineMark(3, "Set Scan Type", strlen(nmap.type));
        lineMark(4, "Set Speed", strlen(nmap.time));
        line(0, "Next(Enter target first. Otherwise it dosn't work.)");
        op = intInput();
        if(op == 0){
            if(strlen(nmap.target) != 0){
                heading("Do you want to save?");
                line(1, "Yes");
                line(2, "No");
                op2 = intInput();
                if(op2 == 1){
                    heading("File Saving Format");
                    line(1,"Text");
                    line(2,"XML");
                    line(3,"Script Kiddle");
                    op3 = intInput();
                    strcat(nmap.outputFile, output[op3-1]);
                    strcat(nmap.outputFile, "src/saves/nmap/");
                    char fileName[100];
                    heading("Enter File Name");
                    easyHack();
                    scanf("%s",fileName);
                    strcat(nmap.outputFile, fileName);
                    strcat(nmap.outputFile, extension[op3-1]);
                }
                heading("Do you want to script?");
                line(1,"Yes");
                line(2,"No");
                op2 = intInput();
                if(op2 == 1){
                    strcpy(nmap.more, "--script ");
                    heading("Script");
                    char more[100];
                    easyHack();
                    scanf("%s", more);
                    strcat(nmap.more, more);
                }
                break;
            }
        }
        else if(op == 1){
            heading("Enter the target");
            stringInput(nmap.target);
        }
        else if(op == 2){
            char ports[100];
            heading("Enter ports");
            easyHack();
            scanf("%s", ports);
            strcpy(nmap.ports,"-p ");
            strcat(nmap.ports,ports);
        }
        else if(op == 3){
            heading("Scan Type");
            for(int i = 0; i < 4; i++){
                line(i+1,nmapScanName[i]);
            }
            type = intInput();
            // If root access is needed.
            if(type == 2 || type == 3 || type == 4){
                nmap.isRoot = true;
            }
            // For Scan Type Only
            strcpy(nmap.type,nmapScan[type-1]);
        }
        else if(op == 4){
            heading("Time Format");
            line(1, "Paranoid");
            line(2, "Sneaky");
            line(3, "Polite");
            line(4, "Aggressive");
            line(5, "Insane");
            line(0, "Normal");
            op2 = intInput();
            if(op2 != 0)
                strcpy(nmap.time, time[op]);
        }
    }

    cc(nmap);
}