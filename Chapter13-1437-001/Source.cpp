#include <iostream>
#include <vector>

using namespace std;

//class A
//{
//
//};
//
//
//class ThisDemoClass
//{
//public: 
//    int x; 
//
//public:
//    void setX(int x)
//    {
//        this->x = x; 
//    }
//
//
//    void printThis() 
//    { 
//        cout << this << endl; 
//    }
//    //this is a pointer to a class object�s address
//};
//
//class SomeClass
//{
//
//    friend void someClassFriend(SomeClass& scObject); //function declaration 
//private:
////protected: 
//    int someVariable;
//
//    //insert overloaded + definition 
//
//public:
//    SomeClass() { someVariable = 0; }
//
//    int getSomeVariable() { return someVariable; }
//};
//
////"feature creep"
//
//void someClassFriend(SomeClass& scObject)
//{
//    cout << "Demonstrating a friend's ability to access a PRIVATE member var:" << endl;
//    scObject.someVariable = 12345; 
//
//}

class Vehicle
{
private:
    double cost; //5000 USD

    int mileRange; //300 miles
public:
    Vehicle() {}; //leaving empty

    Vehicle(double cost, int mileRange)
    {
        this->cost = cost;
        this->mileRange = mileRange;
    }

    bool operator == (const Vehicle& otherVehicle)
    {
        if (this->cost == otherVehicle.cost
            &&
            this->mileRange == otherVehicle.mileRange)
        {
            return true;
        }

        else
        {
            return false;
        }

        //return (this->cost == otherVehicle.cost
        //    &&
        //    this->mileRange == otherVehicle.mileRange);
            

    }
};

int main()
{
    Vehicle v1{ 9999.99, 300 };
    Vehicle v2{ 9999.99, 300 };

    //Person p1; 
    //Person p2; 

    //if (p1 > p2)

    if (v1 == v2)
    {
        cout << "The two vehicles specs are the same!" << endl;
    }

    else
    {
        cout << "NOT the same" << endl; 
    }

    //std::cout
    //ThisDemoClass tdcObject; 
    //tdcObject.printThis(); 
    //cout << &tdcObject << endl; //& -> the "address of" operator 

    //tdcObject.setX(55); 
    //cout << tdcObject.x << endl; 

    //SomeClass scObject; 
    ////cout << scObject.someVariable
    ////A a1;
    ////A a2; 

    ////A a3 = a1 + a2; 

    //string s1 = "hallelujah";

    //cout << s1.find('h', 1) << endl; 


    return 0;
}