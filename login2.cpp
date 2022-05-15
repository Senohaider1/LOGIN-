#include <iostream>
#include "file.h"

using namespace std;
void login()
{
    fstream file;
    string command, name, password, inName, inPassword,email;
    char ch;
    int i = 0;
    while (i != 3)
    {
        password = "";
        cout<<"please enter your ID : ";
        cin>> name;
        cout<<"plzz enter ur password: ";
        ch=_getch();
        while(ch!=13)
        {
            password.push_back(ch);
            cout<<'*';
            ch=_getch();
        }
        file.open("ww.txt", ios::in);
        while (file.peek() != EOF) {
        getline(file, inName);
        getline(file, inPassword);
        getline(file,email);
    }

        if (name == inName && password == inPassword)
        {
            cout << "Login Successful\n"
                 << "Welcome " << inName;
            tofile();
        }
        else
            cout << "Incorrect Login ID or Password\n";
        getchar();
        i++;
        password();

    }
    cout << "3 wrong attempt's can't Login";
    return;

    void change_password()
{
    fstream myfile;
    string line, data ,old_pass,new_pass,user_name,pass,email,space;
    space="\n";
    cout<<"enter ur old pass";
    cin>>old_pass;
    cout<<"enter ur new pass";
    cin>>new_pass;
    myfile.open("vv.txt",ios::in);
    while(myfile.peek() != EOF)
    {
        getline(myfile,user_name);
        getline(myfile,pass);
        getline(myfile,email);

        if(pass == old_pass)
        {
            data += user_name;
            data += space;
            data += new_pass;
            data += space;
            data += email;
            data += space;
        }
        else
        {
            data += user_name ;
            data += space;
            data += old_pass;
            data += space;
            data += email;
            data += space;

        }

        data += "\n" ;
    }
    myfile.close();
    myfile.open("vv.txt", ios::out) ;
    myfile<< data<<endl;
    myfile.close() ;
    }
}
