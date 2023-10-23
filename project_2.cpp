/*We want to store the information of different vehicles. 
Create a class named Vehicle with two data member named mileage and price. 
Create its two subclasses
*Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).
*Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches)
Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. 
Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type.
Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, seating capacity, fuel type, mileage and price.) 
Do the same for a Bajaj and a TVS bike.*/

#include<iostream>
#include<string>
using namespace std;

class vehicle {
    public:
    int milage,speed;
    void setdata(int milage,int speed)
    {
       this->milage=milage;
       this->speed=speed; 
    }
};

class car{

    public:
    int cost,warranty,seats;
    string fueltype;
    void setdata(int cost,int warranty,int seats,string fueltype)
    {
        this->cost=cost;
        this->fueltype=fueltype;
        this->seats=seats;
        this->warranty=warranty;
        cout<<"COST     = "<<this->cost<<endl;
        cout<<"WARRANTY = "<<this->warranty<<endl;
        cout<<"SEATS    = "<<this->seats<<endl;
        cout<<"FUELTYPE = "<<this->fueltype<<endl;
    }
};

class bike {

    public:
    int cyclinders,gears,tanksize;
    string coolingtype,wheeltype;
    void setdata(int cyclinders,int gears,int tanksize,string coolingtype,string wheeltype)
    {
        this->coolingtype=coolingtype;
        this->cyclinders=cyclinders;
        this->gears=gears;
        this->tanksize;
        this->wheeltype;
        cout<<"CYCLINDER    = "<<this->coolingtype<<endl;
        cout<<"GEARS        = "<<this->gears<<endl;
        cout<<"TANKSIZE     = "<<this->tanksize<<endl;
        cout<<"COOLING TYPE = "<<this->coolingtype<<endl;
        cout<<"WHEELTYPE    = "<<this->wheeltype<<endl;
    }
};

class audi :public car{

    public:
    int modelnumber;

    void setdata(int modelnumber)
    {
        this->modelnumber=modelnumber;
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"                         AUDI'S INFORMATION"<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"MODEL NUMBER = "<<this->modelnumber<<endl;
    }
};

class ford :public car{

    public:
    int modelnumber;

    void setdata(int modelnumber)
    {
        this->modelnumber=modelnumber;
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"                         FORD'S INFORMATION"<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"MODEL NUMBER = "<<this->modelnumber<<endl;
    }
};

class bajaj :public bike{

    public:
    int modelnumber;
    void setdata(int modelnumber)
    {
        this->modelnumber=modelnumber;
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"                          BAJAJ"<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"MODELNUMBER = "<<this->modelnumber<<endl;
    }
};

class tvs :public bike{

    public:
    int modelnumber;

    void setdata(int modelnumber)
    {
        this->modelnumber=modelnumber;
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"                             TVS"<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"MODELNUMBER = "<<this->modelnumber<<endl;
    }
};

int main()
{
    audi a1;
    ford f1;
    car c1;
    bajaj b1;
    tvs t1;
    bike bi1;
    a1.setdata(320);
    c1.setdata(10000000,4,2,"petrol");
    f1.setdata(360);
    c1.setdata(2500000,6,5,"diesel");
    b1.setdata(500);
    bi1.setdata(2,6,6,"fast","small");
    t1.setdata(300);
    bi1.setdata(3,2,2,"fast","petrol");
    return 0;
}