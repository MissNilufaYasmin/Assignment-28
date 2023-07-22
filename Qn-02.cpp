/*2. Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables.*/

#include<iostream>
using namespace std ;

class Complex
{
    int a,b ;
    public:
        void setData(int a , int b)       // assignment 28
        {
            this->a = a ;
            this->b = b ;
        }
        void showData()
        {
            cout<<"Real="<<a<<" Img="<<b <<endl ;
        }    
};
int main ()
{
    Complex c1 ;
    c1.setData(4,6) ;
    c1.showData() ;

    return 0 ;
}
