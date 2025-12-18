#include<iostream>
using namespace std;
class myclass
{
    public:
    myclass()
    {
        cout<<" My default constructor";
    }
    public:
    myclass(int val)
    {
        int x=val;
         cout<<" parametrified constructor:"<<x;
    }
};
int main()
{
    myclass obj;
    myclass obj(6);
    return 0;

}