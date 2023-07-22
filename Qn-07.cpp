/*7. Create an Integer class and overload logical not operator for that class.*/

#include<iostream>
using namespace std ;

class Integer
{
    int x ;
    public:
        Integer (){}
        Integer(int y)
        {
            x = y ;
        }
        void showData()
        {
            cout<<x<<endl ;
        }
        int operator!()
        {
            x = !x ;
            return x ;
        }
        
};
int main ()
{
    Integer i(-5) ;
    Integer i2 ;

    i = !i ;
    i.showData() ;
}
