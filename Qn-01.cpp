/*1. Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator
*/

#include<iostream>
using namespace std ;

class Complex
{
    int a,b ;
    public:
        friend void operator>>(istream & , Complex &) ;
        friend void operator<<(ostream & , Complex &) ;
};

void operator>>(istream &input , Complex &x)
{
    cout<<"Enter real and imaginary part : "<<endl ;
    input>>x.a>>x.b ;
}
void operator<<(ostream &output, Complex &y)
{
    output<<"Real = "<<y.a<<" Img = "<<y.b<<endl ;
}

int main ()
{
    Complex c1 ,c2 ;

    cin>>c1 ;
    cout<<c1 ;

    cin>>c2 ;
    cout<<c2 ;

    return 0 ;
}
