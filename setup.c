#include<stdlib.h>
#include"os.h"

int main()
{
    system(setUpFiglet);
    system(setUpNmap);
    system(setUpDirb);
    system(setUpJohn);
    system(setUpWafw00f);

    // LBD is not available for mac
    #if defined(__linux)
        system(setUpLBD);
    #endif
    return 0;
}