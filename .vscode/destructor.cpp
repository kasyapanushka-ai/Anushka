#include<iostream>
using namespace std;
int count=0;
class alpha
{
public:
alpha()
{
count++;
cout<<"constructor called,object created";
cout<<count;
}
~alpha()
{
cout<<"destructor called, object created";
cout<<count;
}
};
int main( )
{
cout<<"Enter main";
alpha A1, A2,A3, A4;
{
cout<<"Enter block1";
alpha A5;
}
{
cout << "Enter block 2";
alpha A6;
}
return 0;
}