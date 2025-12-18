#include<iostream>
using namespace std;
int main(){
    
    int c,k,f;
    cout<<"enter a temperature in celcius";
    cin>>c;
    f=c*(9/5)+32;
    k=c=273;
    cout<<"temp in kelvin:"<<k<<endl;
    cout<<"temp in farhenheit:"<<f;
    return 0;
}