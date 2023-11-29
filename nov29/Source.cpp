#include <iostream>

using namespace std;

template <typename T>
void doSomething(T someVariableName)
{
    cout << "Printing the variable now: " << someVariableName << endl; 
}

template <typename T> 
class SomeClass 
{
public: 
    //Vehicle //composition (reminder) 
    T memberVarName;//Generics 
};
int main()
{


    SomeClass<int> scObject; 
    //scObject.memberVarName = "adsfasdf";
    
    auto a = 3;  //automatic type deduction
    
    cout << typeid(a).name() << endl; //type()

    //int a = 42;
    //float b = -23.0f;
    //string c = "asdfasdf";

    //doSomething(a); 
    //doSomething(b);
    //doSomething(c); 


    return 0;
}