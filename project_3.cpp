/*We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and the average marks of the class. 
The number of students in the class are entered by the user. 
Create a class named Marks with data members for roll number, name and marks.
Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used to define marks in individual subject of each student. 
Roll number of each student will be generated automatically.*/


#include<iostream>
using namespace std;
class physics{

    public:
    int p;
    void dataphysics(int p)
    {
        this->p=p;
    }
    void displayphysics()
    {
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"PHYSICS = "<<this->p<<endl;
    }
};
class chemistry{

    public:
    int c;
    void datachemistry(int c)
    {
        this->c=c;
    }
    void displaychemistry()
    {
        cout<<"CHEMISTRY = "<<this->c<<endl;
    }
};
class maths{

    public:
    int m;
    void datamaths(int m)
    {
        this->m=m;
    }
    void displaymaths()
    {
        cout<<"MATHS = "<<this->m<<endl;
    }
};
class totalmarks :public physics,chemistry,maths{

    public:
    void markstotal(int physics,int chemistry,int maths)
    {
        cout<<"========================================================================="<<endl;
        cout<<"TOTAL MARKS = "<<physics+chemistry+maths<<endl;
        cout<<"========================================================================="<<endl;
    }
};

int main()
{
    int ph,ch,ma;
    cout<<"ENTER THE MARKS OF PHYSICS = ";
    cin>>ph;
    cout<<"ENTER THE MARKS OF CHEMISTRY = ";
    cin>>ch;
    cout<<"ENTER THE MARKS OF MATHS = ";
    cin>>ma;
    physics p1;
    chemistry c1;
    maths m1;
    totalmarks tm1;
    p1.dataphysics(ph);
    p1.displayphysics();
    c1.datachemistry(ch);
    c1.displaychemistry();
    m1.datamaths(ma);
    m1.displaymaths();
    tm1.markstotal(ph,ch,ma);
    return 0;
}