#include <iostream>
using namespace std;
class demo
{
    public:
    demo()
    {
        cout<<"this is constructor"<<endl;

    }
    ~demo()
    {
   cout<<" this is destructor"<<endl;

    }
};
    int main()
    {
       demo d1,d2,d3;
       return 0;
    }

