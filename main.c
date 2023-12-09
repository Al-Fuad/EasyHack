/* 
 * ||===================================================||
 * ||===================== EasyHack ====================||
 * ||===================================================||
 * ||= Project-Description: This is a tool handler for =||
 * ||= ethical hacking tools. The tool, Nmap, John The =||
 * ||======= Ripper, HashCat, NetCat, SQLMap etc =======||
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

#include"header.h"

int main()
{
    int tool;
    banner("Easy Hack");
    heading("Tools");
    line(1, "Nmap");
    line(2, "Dirp");
    line(3, "John The Ripper");
    line(4, "Wafw00f");
    line(5, "LBD");
    line(6, "NetCat");
    line(7, "SQL Map");
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
    else if(tool == 5){
        lbd();
    }
    else if(tool == 6){
        // netcat();
    }
    else if(tool == 6){
        // sqlMap();
    }
    return 0;
}