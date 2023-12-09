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
    printf("Tools :\n\n1|| Nmap\n\n2|| Dirb\n\n3|| John The Ripper\n\n4|| WafW00f\n\n5|| NetCat\n\n6|| LBD\n\n7|| SQLMap\n\nEnter tool number : ");
    scanf("%d",&tool);
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
    else if(tool == 6){
        lbd();
    }
    return 0;
}