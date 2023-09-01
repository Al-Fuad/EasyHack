/* 
 * ||===================================================||
 * ||=============== File Name: EasyHack ===============||
 * ||===================================================||
 * ||= Project-Description: This is a tool handler for =||
 * ||= ethical hacking tools. The tool, Nmap, John The =||
 * ||======= Ripper, HashCat, NetCat, SQLMap etc =======||
 * ||===================================================||
 * ||======== Programmer-Name: S. M Al Fuad Nur ========||
 * ||===================================================||
 * ||=========== StudentID :0242220005341056 ===========||
 * ||===================================================||
 * ||== University: Daffodil International University ==||
 * ||===================================================||
 */

#include"features.h"
#include"nmap.h"

int main()
{
    int tool;
    banner("Easy Hack");
    printf("Enter tool number : ");
    scanf("%d",&tool);
    switch (tool)
    {
    case 1:
        nmap();
        break;
    
    default:
        break;
    }
    return 0;
}