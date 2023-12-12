#include<stdlib.h>
#include"os.h"

int main()
{
    system(setUpFiglet);
    system(setUpNmap);
    system(setUpDirb);
    system(setUpJohn);
    system(setUpWafw00f);
    system(setupLfs);

    // LBD is not available for mac
    #if defined(__linux)
        system(setUpLBD);
    #endif

    system("git lfs install");
    system("git lfs pull");
    return 0;
}