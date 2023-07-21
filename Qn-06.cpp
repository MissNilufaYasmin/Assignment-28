//6. Create a complex class and overload assignment operator for that class.

#include<iostream>
using namespace std ;

class Complex
{
    int a,b ;
    public :
        Complex(int x , int y) {a = x ; b = y ;}
        Complex(){}
        void showData()
        {
            cout<<"Real = "<<a <<" Img = "<<b<<endl ;
        }
        Complex operator=(Complex c)
        {
            a = c.a ;
            b = c.b ;
            return *this ;
        }
};
int main ()
{
    Complex c1(4,5) , c2(5,6) ;
    c1.showData() ;
    c2.showData() ;

    cout<<"Without = overloading"<<endl ;
    c2 = c1 ;   
    c2.showData() ;

    cout<<"With = overloading"<<endl ;
    c2.operator=(c1) ;  // c2 = c1 ;
    c2.showData() ;
}
