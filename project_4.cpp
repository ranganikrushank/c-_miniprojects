#include<iostream>
using namespace std;
class mangoes{

    public:
    int ma;
    void setdatamangoes(int ma)
    {
        this->ma=ma;
        // cout<<"ENTER THE NUMBER OF MANGOES = ";
        // cin>>ma;
    }
    void display()
    {
        cout<<"MANGOES = "<<this->ma<<endl;
    }
};
class apples{

    public:
    int ap;
    void setdataapples(int ap)
    {
        this->ap=ap;
        // cout<<"ENTER THE NUMBER OF APPLES = ";
        // cin>>ap;
    }
    void display()
    {
        cout<<"APPLES = "<<this->ap<<endl;
    }
};
class fruits :public apples,mangoes{

    public:
    void totalfruitspresent(int apples, int mangoes)
    {
        cout<<"TOTAL FRUITS = "<<apples+mangoes<<endl;
    }
};
int main()
{
    int a,m;
    cout<<"ENTER THE NUMBER OF APPLES  = ";
    cin>>a;
    cout<<"ENTER THE NUMBER OF MANGOES = ";
    cin>>m;
    //a.totalfruitspresent();
    apples a1;
    mangoes m1;
    fruits f1;
    a1.setdataapples(a);
    a1.display();
    m1.setdatamangoes(m);
    m1.display();
    f1.totalfruitspresent(a,m);
    return 0;
}