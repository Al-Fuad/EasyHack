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
 * ||== University: Daffodil International University ==||
 * ||===================================================||
 */

#include"header.h"

int main()
{
    int tool;
    banner("Easy Hack");
    printf("Tools :\n1|| Nmap\n2|| Dirb\n3|| LBD\n4|| WafW00f\n5|| NetCat\n6|| JohnTheRipper\n7|| SQLMap\nEnter tool number : ");
    scanf("%d",&tool);
    if(tool == 1){
        nmap();
    }
    else if(tool == 2){
        dirb();
    }
    else if(tool == 3){
        lbd();
    }
    else if(tool == 4){
        wafw00f();
    }
    else if(tool == 6){
        john();
    }
    return 0;
}