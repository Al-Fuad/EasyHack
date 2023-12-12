// To find os for specific cmd/shall command
#if defined(__APPLE__)
    char * setUpFiglet = "brew install figlet";
    char * setUpNmap = "brew install nmap";
    char * setUpDirb = "brew install sidaf/pentest/dirb";
    char * setUpJohn = "brew install sidaf/pentest/john-jumbo";
    char * setUpWafw00f = "brew install sidaf/pentest/wafw00f";

    // LBD is not available for mac
    // char * setUpLBD = "";

    char * pressEnter = "read -n1 -p ' ' key";

#elif defined(__linux)
    char * setUpFiglet = "sudo apt-get install figlet";
    char * setUpNmap = "sudo apt-get install nmap";
    char * setUpDirb = "sudo apt-get install dirb";
    char * setUpJohn = "sudo apt-get install john";
    char * setUpWafw00f = "sudo apt-get install wafw00f";
    char * setUpLBD = "sudo apt-get install ldb-tools";
    
    char * pressEnter = "read -p ' ' key";
#endif