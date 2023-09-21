/* 
 * ||===================================================||
 * ||=============== File Name: EasyHack ===============||
 * ||===================================================||
 * ||= Project-Description: This is a tool handler for =||
 * ||= ethical hacking tools. The tool, Nmap, John The =||
 * ||======= Ripper, HashCat, NetCat, SQLMap etc =======||
 * ||===================================================||
 * ||= Programmer Name: S. M Al Fuad Nur, Samin Sadaf ==||
 * ||===================================================||
 * ||=========== StudentID :0242220005341056 ===========||
 * ||=========== StudentID :0242220005341012 ===========||
 * ||===================================================||
 * ||== University: Daffodil International University ==||
 * ||===================================================||
 */

#include"features.h"
#include"src/tools/nmap.h"

int main()
{
    int tool;
    banner("Easy Hack");
    printf("Tools :\n1|| Nmap\n2|| LBD\n3|| WafW00f\n4|| DIRSearch\n5|| NetCat\n6|| JohnTheRipper\n7|| SQLMap\nEnter tool number : ");
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