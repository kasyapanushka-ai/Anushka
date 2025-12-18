#include<iostream>
using namespace std;
 //function to perform division
float division(int x,int y)
{
    if(y==0)//corrected comparision operator
      throw"Error:Divide by zero";
      // throw the denominator if it's zero
      return(float)x/y;

}
int main()
{
int a ,b;
cout<<"Enter two integers:";//Fixed quotation marks
cin>> a >>b;//read two integers
try{
    //try to perform division
    float c = division(a,b);
    cout<<"C = "<< c <<"\n";//display the result

}
catch(const char*p){// catch the exception
cout<<"Exception occured: Division by zero\n";
//inform the user
}
return 0;
}