#include <iostream>
using namespace std;

class human{
    public:
    int height;
    int weight;
    
    
};

class male:public human{
    public:
    int age;
    string color;
};

int main()
{
    male obj1;
    obj1.age=10;
    obj1.height=80;
    obj1.weight=40;
    obj1.color="brown";
    cout<<obj1.age<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.color<<endl;
    return 0;
}
