#include <stdio.h>
#include <iostream>

#include <string.h>
#include <string>
#include <cstring>

#include <algorithm>

#include <stdlib.h>
#include <cstdlib>

#include <time.h>
#include <ctime>


using namespace std;

int main() {

    //Strimg
    string usrNam, nwPswd;
    cout << "Enter User Name : ";
    getline(cin, usrNam);
    cout << usrNam << endl;
    if(usrNam.length() > 2) {
        usrNam.append("@email.com");
        cout << "Create New Password : ";
        getline(cin, nwPswd);
    } else cout << "Error User Name" << endl;
    cout << "Press Enter to create account, X to Exit" << endl;
    char cnfm;
    cin.get(cnfm);
    if (cnfm == 'X' || cnfm == 'x') usrNam.clear();
    else {
        cout << "Welcome " << usrNam.substr(0, usrNam.find('@')) << endl;
        char piCharacter = usrNam.at(0);
        bool proUsr, prmUsr;
        if (proUsr) usrNam.insert(0, "~");
        else if (prmUsr) usrNam.insert(0, "`");
        float proUsrPeriod;
        if(proUsrPeriod >= 0) usrNam.erase(0,1);
        printf("\n Here, Your OTP : %s", usrNam);
        printf("\n Your Account is %s Activated", usrNam.c_str());
    }

    //For
    cout << "\n" << endl;
    int mntnSiz = 8;
    for (int i =0; i < mntnSiz; i++) {
        for(int j = 0; j < (mntnSiz - i - 1); j++) printf(" ");
        for(int j = 0; j < (2*i+1); j++) printf("*");
        puts("\0");
    }

    return 0;
}