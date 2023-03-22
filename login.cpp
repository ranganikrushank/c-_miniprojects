#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void login();
void registration();
void forgot();
int main()
{
    int n;
    cout<<"_______________________________________________________________________"<<endl;
    cout<<"                         MENU"<<endl;
    cout<<"_______________________________________________________________________"<<endl;
    cout<<"  PRESS 1. REGISTRATION     "<<endl;
    cout<<"  PRESS 2. LOGIN            "<<endl;
    cout<<"  PRESS 3. FORGOT           "<<endl;
    cout<<"  PRESS 4  EXIT             "<<endl;
    cout<<"_______________________________________________________________________"<<endl;
    cout<<"-----------------------------------------------------------------------"<<endl;
    cout<<"     ENTER YOUR CHOICE      =  ";
    cin>>n;

    switch(n)
    {
        case 1:
        registration();
        break;
         
        case 2:
        login();
        break;

        case 3:
        forgot();
        break;

        case 4:
        cout<<" THANK YOU !!"<<endl;
        break;

        default:
        system("cls");
        cout<<"_______SELECT ANYONE OF THIS GIVEN OPTIONS_________"<<endl;
        main();
    }
}
void login()
{
    int count;
    string userid,password,id,pass;
    system("cls");
    cout<<"______PLEASE ENTER YOUR USERNAME AND PASSWORD______"<<endl;
    cout<<"___________________________________________________"<<endl;
    cout<<"   USERNAME = ";
    cin>>userid;
    cout<<"   PASSWORD = ";
    cin>>password;

    ifstream input("records.txt");

    while(input>>id>>pass)
    {
        if(id==userid && pass==password)
        {
            count=1;
            system("cls");
        }
    }
    input.close();
    if(count==1)
    {
        cout<<"_________________________________________________________"<<endl;
        cout<<" YOUR LOGIN IS SUCCESSFUL !!"<<endl;
        cout<<"                            "<<endl;
        cout<<" THANK YOU FOR LOGIN IN BACK !!"<<endl;
        cout<<"_________________________________________________________"<<endl;
    }
    else
    {
        cout<<"________________________________________________________________"<<endl;
        cout<<" LOGIN ERROR !!     "<<endl;
        cout<<" PLEASE CHECK YOUR USERNAME OR PASSWORD"<<endl;
        cout<<"________________________________________________________________"<<endl;
        main();
    }
}

void registration()
{
    string ruser,rpassword,rid,rpass;
    system("cls");
    cout<<" ENTER USERNAME = ";
    cin>>ruser;
    cout<<" ENTER THE PASSWORD = ";
    cin>>rpassword;

    ofstream f1("records.txt",ios::app);
    f1<<ruser<<' '<<rpassword<<endl;
    system("cls");
    cout<<" YOUR REGISTRATION IS SUCCESSFULL "<<endl;
    main();
}

void forgot()
{
    int option;
    system("cls");
    cout<<" DON'T WORRY HERE YOU HAVE OPTIONS TO GET BACK YOUR ACCOUNT "<<endl;
    cout<<"____________________________________________________________"<<endl;
    cout<<"   PRESS 1 TO SEARCH ID BY USERNAME "<<endl;
    cout<<"   PRESS 2 TO GO BACK TO MAIN MENU"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"     ENTER YOUR CHOICE :- "<<endl;
    cin>>option;

    switch(option)
    {
        case 1:
        {
            int count=0;
            string suserid,sid,spass;
            cout<<" ENTER THE USERNAME WHICH YOUR REMEMBERED  = "<<endl;
            cin>>suserid;

            ifstream f2("records.txt");
            while(f2>>sid>>spass)
            {
                if(sid==suserid)
                {
                    count=1;
                }
            }
            f2.close();
            if(count==1)
            {
                cout<<" WE FOUND YOUR ACCOUNT "<<endl;
                cout<<" YOUR PASSWORD = "<<spass<<endl;
                main();
            }
            else
            {
                cout<<" SORRY WE DIDN'T FOIND YOUR ACCOUNT"<<endl;
                cout<<" PLEASE CHECK YOUR USERNAME "<<endl;
                main();
            }
            break;
        }
        case 2:
        {
            main();
        }
        default:
        cout<<" SORRY PLEASE ENTER CORRECT CHOICE"<<endl;
        forgot();
        break;
    }
}