/* 
 * ||===================================================||
 * ||===================== EasyHack ====================||
 * ||===================================================||
 * ||= Project-Description: This is a tool handler for =||
 * ||= ethical hacking tools. The tool, Nmap, John The =||
 * ||========= Ripper, WafW00f, Dirb, LBD etc. =========||
 * ||===================================================||
 * ||========= 1stProgrammer: S. M Al Fuad Nur =========||
 * ||=========== StudentID :0242220005341056 ===========||
 * ||===================================================||
 * ||=========== 2ndProgrammer: Samin Sadaf ============||
 * ||=========== StudentID :0242220005341012 ===========||
 * ||===================================================||
 * ||========== 3rdProgramme: Md. Ilias Kabir ==========||
 * ||=========== StudentID :0242220005341098 ===========||
 * ||===================================================||
 * ||========= 4thProgramme: Emran Hosen Shuvo =========||
 * ||=========== StudentID :0242220005341082 ===========||
 * ||===================================================||
 * ||== University: Daffodil International University ==||
 * ||===================================================||
 */

// Before run this you should run setup.c first.

#include"header.h"

int main()
{
    while(true){
        int tool;
        banner("Easy Hack");
        heading("Tools");
        line(1, "Nmap");
        line(2, "Dirb");
        line(3, "John The Ripper");
        line(4, "Wafw00f");
        #if defined(__linux)
            line(5, "LBD");
        #endif
        line(0, "Exit");
        tool = intInput();
        if(tool == 1){
            nmap();
        }
        else if(tool == 2){
            dirb();
        }
        else if(tool == 3){
            john();
        }
        else if(tool == 4){
            wafw00f();
        }
        #if defined(__linux)
            else if(tool == 5){
                lbd();
            }
        #endif
        else if(tool == 0){
            break;
        }
        system(pressEnter);
    }
    return 0;
}