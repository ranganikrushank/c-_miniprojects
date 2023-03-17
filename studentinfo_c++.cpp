#include<iostream>
#include<string>
using namespace std;
class krushank{
    public:
    int id;
    string name;
    int marks;
    string gender;
    int age;
    int passingyear;
    int password;
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
    int marks6;
    int marks7;
    int marks8;
    int marks9;
    int marks10;
    string studentname;
    string fathername;
    string mothername;
    string address;
    string fatherprofession;
    string  motherprofession;
    int fatheryearlyincome;
    krushank(int i,string n, int m,string g,int a,int py,int ps,int pym1,int pym2,int pym3,int pym4,int pym5,int pym6,int pym7,int pym8,int pym9,int pym10,string sm,string fm,string mn,string ad,string fp,string mp,int yi)
    {
        this->id=i;
        this->name=n;
        this->marks=m;
        this->gender=g;
        this->age=a;
        this->passingyear=py;
        this->password=ps;
        this->marks1=pym1;
        this->marks2=pym2;
        this->marks3=pym3;
        this->marks4=pym4;
        this->marks5=pym5;
        this->marks6=pym6;
        this->marks7=pym7;
        this->marks8=pym8;
        this->marks9=pym9;
        this->marks10=pym10;
        this->studentname=sm;
        this->fathername=fm;
        this->mothername=mn;
        this->address=ad;
        this->fatherprofession=fp;
        this->motherprofession=mp;
        this->fatheryearlyincome=yi;
    }
    void printmydetails()
        {
        cout<<"-------------------------------------------"<<endl;
        cout<<"          STUDENT'S NEW MARKS  "<<endl;
        cout<<"-------------------------------------------"<<endl;
        cout<<"=>  ID           = "<<this->id<<endl;
        cout<<"=>  NAME         = "<<this->name<<endl;
        cout<<"=>  MARKS        = "<<this->marks<<endl;
        cout<<"=>  GENDER       = "<<this->gender<<endl;
        cout<<"=>  AGE          = "<<this->age<<endl;
        cout<<"=>  PASSING YEAR = "<<this->passingyear<<endl;
        }
        void pastyearmarks()
        {
            cout<<"------------------------------------------------"<<endl;
            cout<<"           MARKS OF PAST 10 YEAR'S    "<<endl;
            cout<<"------------------------------------------------"<<endl;
            cout<<"MARKS OF YEAR 2014 = "<<this->marks1<<endl;
            cout<<"MARKS OF YEAR 2015 = "<<this->marks2<<endl;
            cout<<"MARKS OF YEAR 2016 = "<<this->marks3<<endl;
            cout<<"MARKS OF YEAR 2017 = "<<this->marks4<<endl;
            cout<<"MARKS OF YEAR 2018 = "<<this->marks5<<endl;
            cout<<"MARKS OF YEAR 2019 = "<<this->marks6<<endl;
            cout<<"MARKS OF YEAR 2020 = "<<this->marks7<<endl;
            cout<<"MARKS OF YEAR 2021 = "<<this->marks8<<endl;
            cout<<"MARKS OF YEAR 2022 = "<<this->marks9<<endl;
            cout<<"MARKS OF YEAR 2023 = "<<this->marks10<<endl;
        }
        void personalinformation()
        {
            cout<<"-------------------------------------------"<<endl;
            cout<<"      PERSONAL INFOMATION OF STUDENT "<<endl;
            cout<<"-------------------------------------------"<<endl;
            cout<<"STUDENT'S NAME         = "<<this->studentname<<endl;
            cout<<"FATHER'S NAME          = "<<this->fathername<<endl;
            cout<<"MOTHER'S NAME          = "<<this->mothername<<endl;
            cout<<"ADDRESS                = "<<this->address<<endl;
            cout<<"FATHER'S PROFESSION    = "<<this->fatherprofession<<endl;
            cout<<"MOTHER'S PROFESSION    = "<<this->motherprofession<<endl;
            cout<<"FATHER'S YEARLY INCOME = "<<this->fatheryearlyincome<<endl;
        }
    void getmypassword()
    {
        cout<<"*******************************************"<<endl;;
        cout<<"    STUDENT'S PASSWORD = "<<this->password<<endl;
        cout<<"*******************************************"<<endl;
        cout<<"-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
        cout<<"-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
        cout<<"-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
        cout<<"-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
        cout<<"-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
    }
    private:
    int secretpassword;
    int personalinfo;
    public:
    int pastyearmark;
};
int main()
{
    krushank krush(166,"RANGANI KRUSHANK",6,"male",19,2023,1234,7,8,5,6,7,9,9,6,8,9,"RANGANI KRUSHANK","RANGANI JAYESH","RANGANI MOHINI","BHATAR , SURAT","BUSINESSMAN","HOUSEWIFE",100000);
    krushank riya(167,"RANGANI RIYA",8,"FEMALE",16,2023,4321,9,7,8,9,6,7,8,9,8,7,"RANGANI RIYA","RANGANI JAYESH","RANGANI MOHINI","BHATAR , SURAT","BUSINESSMAN","HOUSEWIFE",100000);
    krushank granth(168,"RANGANI GRANTH",8,"MALE",2,2023,9876,8,7,7,7,8,9,6,7,8,9,"RANGANI GRANTH","RANGANI VIJAY","RANGANI JAYESHREE","VESU , SURAT","BUSINESSMAN","HOUSEWIFE",200000);
    krushank rahi(169,"RANGANI RAHI",7,"FEMALE",11,2023,6789,9,9,9,9,7,9,6,7,8,6,"RANGANI RAHI","RANGANI VIJAY","RANGANI JAYSHREE","VESU , SURAT","BUISNESSMAN","HOUSEWIFE",200000);
    krushank vishwa(170,"RANGANI VISHWA",7,"FEMALE",16,2023,5678,7,7,8,9,6,7,8,9,8,7,"RANGANI VISHWA","RANGANI VIJAY","RANGANI JAYSHREE","VESU , SURAT","BUISNESSMAN","HOUSEWIFE",200000);
    krush.printmydetails();
    krush.pastyearmarks();
    krush.personalinformation();
    krush.getmypassword();
    riya.printmydetails();
    riya.pastyearmarks();
    riya.personalinformation();
    riya.getmypassword();
    granth.printmydetails();
    granth.pastyearmarks();
    granth.personalinformation();
    granth.getmypassword();
    rahi.printmydetails();
    rahi.pastyearmarks();
    rahi.personalinformation();
    rahi.getmypassword();
    vishwa.printmydetails();
    vishwa.pastyearmarks();
    vishwa.personalinformation();
    vishwa.getmypassword();
    return 0;
}