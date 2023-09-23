#ifndef TOOL_H
#define TOOL_H

#include<stdlib.h>
#include<string.h>

struct tools
{
    char cmd[100];
    char target[100];
    char ports[100];
    char outputFile[100];
};
void run(char cmd[100]){
    puts(cmd);
}
typedef struct tools tool;

#endif