#ifndef _FEATURES_H_
#define _FEATURES_H_

#include<stdio.h>
#include<string.h>
#include<sys/ioctl.h>
#include<stdlib.h>


// To find os for specific cmd/shall command
#if defined(__APPLE__) || defined(__linux)
    char cls[] = "clear";
#elif defined(_WIN32) || defined(_WIN64)
    char cls[] = "CLS"
#endif

void banner(char name[]);
void equalLn();
void heading(char name[]);

// To get terminal witdh
short colWidth(){
    struct ttysize ts;
    ioctl(0, TIOCGSIZE, &ts);
    return ts.ts_cols;
}

// Adding padding to center some text
void center(int size){
    int col = colWidth();
    for(int i = 0; i < (col-size)/2; i++){
        printf(" ");
    }
}

// Clear screen and display the banner
void banner(char name[]){
    system(cls);
    equalLn();
    heading(name);
    equalLn();
    puts("");
}

// Line of equal
void equalLn(){
    char eq[] = "||==================================================||";
    center(strlen(eq));
    puts(eq);
}

// Line of heading with equal
void heading(char name[]){
    char halfeq[] = "=======================";
    int len = 2*strlen(halfeq)+strlen(name)+10;
    if (strlen(name)%2!=0){ len++; }
    center(len);
    (strlen(name)%2!=0)? printf("||="): printf("||");
    printf("%s|| %s ||%s||\n",halfeq,name,halfeq);
}

#endif