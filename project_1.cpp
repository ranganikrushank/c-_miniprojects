/* Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes. Now, create a function in each of these classes which prints "I am mammal", "I am a marine animal" and "I belong to both the categories: Mammals as well as Marine Animals" respectively. Now, create an object for each of the above class and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of BlueWhale by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale */

#include<iostream>
using namespace std;
class mammals{
    public:
    void call1()
    {
        cout<<"I BELONG TO MAMMALS"<<endl;
    }
};
class marineanimals{

    public:
    void call2()
    {
        cout<<"I BELONG TO MARINE ANIMALS"<<endl;
    }

};
class bluewhale :public mammals, marineanimals{

    public:
    void call3()
    {
        cout<<"I BELONG TO BOTH"<<endl;
    }
};
int main()
{
    mammals m1;
    marineanimals ma1;
    bluewhale b1;
    m1.call1();
    ma1.call2();
    b1.call3();
    return 0;
}