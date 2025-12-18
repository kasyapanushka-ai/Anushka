#include<iostream>
using namespace std ;

class parent 
{ 
    public:
          int id_p,age_p;
          string name_parent;

};

class child:public parent
{
    public:
           int id_c,age_c;
           string name_child;
void display ()
   {
    cout<<id<<endl;
    cout<<age<<endl;
    cout<<name_parent<< endl;
    cout<<id_c<<endl;
    cout<<age_c<< endl;
    cout<<name_child<<endl;

   }
}


int main()
{
    child c;
    c.display();
    c.id_p =7;
    c.age_p=45;
    c.age_c=12;
    c.id_c=8;
    c.name_p= AB;
    c.name_c=CD;

    return 0;

}
