/*10. Create a Distance class having 2 instance variable feet and inches. Also create
default constructor and parameterized constructor takes 2 variables . Now overload ()
function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15.*/

#include<iostream>
using namespace std ;

class Distance
{
    int feet , inch ; 

    public:
        Distance(){}
        Distance(int f , int i)
        {
            feet = f ;
            inch = i ;
        }
        void display()
        {
            cout<<"Feet="<<feet<<"  inches="<<inch<<endl ;
        }
        Distance operator()(int a , int b , int c)
        {
            Distance temp ;
            temp.feet = a+c+5 ;
            temp.inch = a+b+15 ;

            return temp ;
        }


};
int main()
{
    Distance d1(10,15) , d2 ;
    
    cout<<"d1 " ;
    d1.display() ;

    d2 = d1(3,4,5);
    cout<<"d2 " ;
    d2.display() ;
    cout<<"d1 ";
    d1.display() ;
}
