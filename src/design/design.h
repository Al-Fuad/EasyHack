#ifndef _DESIGN_H_
#define _DESIGN_H_

#include<stdio.h>
#include<string.h>
#include<sys/ioctl.h>
#include<stdlib.h>

// To get terminal witdh
int colWidth(){
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
    system("clear");
    puts("");
    char c[100] = {0};
    sprintf(c, "%d", colWidth());
    char s[100];
    strcpy(s, "figlet -w ");
    strcat(s,c);
    strcat(s," -c -f cyberlarge ");
    strcat(s,name);
    system(s);
}

// Line of heading
void heading(char name[]){
    char halfeq[] = "=======================";
    int len = 2*strlen(halfeq)+strlen(name)+10;
    if (strlen(name)%2!=0){ len++; }
    puts("");
    center(len);
    (strlen(name)%2!=0)? printf("||="): printf("||");
    printf("%s|| %s ||%s||\n",halfeq,name,halfeq);
    puts("");
}

// Option with checkbox
void lineMark(int num, char name[], int mark){
    center(70);
    printf("|| %d || %s", num,name);
    for(int i = 0; i < 56-1-strlen(name); i++){
        printf(" ");
    }
    (mark!=0)? printf("|| ☑ ||\n"): printf("|| □ ||\n");
}

// Option without checkbox
void line(int num, char name[]){
    center(70);
    printf("|| %d || %s\n", num,name);
}

// Easy Hack
void easyHack(){
    puts("");
    center(70);
    printf("EasyHack>>> ");
}

// Input integer numbers
int intInput(){
    easyHack();
    int num;
    scanf("%d",&num);
    return num;
}

// Input string for tools
void stringInput(char * str){
    easyHack();
    scanf("%s", str);
}

#endif