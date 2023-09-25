#ifndef TOOL_H
#define TOOL_H

#include<stdlib.h>
#include<string.h>

struct tools
{
    char cmd[100];
    char target[100];
    char ports[100];
    char wordlists[100];
    char outputFile[100];
};
typedef struct tools tool;

void run(char cmd[100]){
    puts(cmd);
}

#endif