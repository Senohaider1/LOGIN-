#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>
#include <vector>
#include<algorithm>
#include <conio.h>
#include "login.h"

using namespace std;

int main()
{
    bool islinux = 0;
    int choice;
    cout << "\nMenu:\n1.Login\n2.Change Password\n3.Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:

            login();
            break;
        case 2:

            change_password();
            break;
        case 3:

            break;
        }
}

