#ifndef TOOL_H
#define TOOL_H

#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

struct tools
{
    bool isRoot;
    char cmd[100];
    char name[100];
    char target[100];
    char time[100];
    char type[100];
    char ports[100];
    char extention[100];
    char header[100];
    char ignoreCode[100];
    char wordlists[100];
    char outputType[100];
    char outputFile[100];
    char more[100];
};
typedef struct tools tool;

void cc(tool t){
    if(t.isRoot)
        strcat(t.cmd, "sudo ");
    strcat(t.cmd,t.name);
    if(strlen(t.type) != 0){
        strcat(t.cmd, " ");
        strcat(t.cmd,t.type);
    }
    if(strlen(t.ports) != 0){
        strcat(t.cmd," ");
        strcat(t.cmd,t.ports);
    }
    strcat(t.cmd, " ");
    strcat(t.cmd,t.target);
    if(strlen(t.time) != 0){
        strcat(t.cmd, " ");
        strcat(t.cmd, t.time);
    }
    if(strlen(t.outputType) != 0){
        strcat(t.cmd," ");
        strcat(t.cmd,t.outputType);
        strcat(t.cmd," ");
        strcat(t.cmd,t.outputFile);
    }
    if(strlen(t.more) != 0){
        strcat(t.cmd, " ");
        strcat(t.cmd, t.more);
    }
    if(strlen(t.wordlists) != 0){
        strcat(t.cmd, " ");
        strcat(t.cmd, t.wordlists);
    }
    if(strlen(t.extention) != 0){
        strcat(t.cmd, " ");
        strcat(t.cmd, t.extention);
    }
    if(strlen(t.header) != 0){
        strcat(t.cmd, " ");
        strcat(t.cmd, t.header);
    }
    if(strlen(t.ignoreCode) != 0){
        strcat(t.cmd, " ");
        strcat(t.cmd, t.ignoreCode);
    }
    puts(t.cmd);
}

void run(char cmd[100]){
    puts(cmd);
}

#endif