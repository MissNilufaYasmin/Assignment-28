/*11. Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function.*/

#include<iostream>
using namespace std ;

class Marks
{
    int marks ; 

    public:
        Marks(int x)
        {
            marks = x ;
        }
        void showData()
        {
            cout<<"Marks = "<< marks <<endl ;
        }
        Marks* operator->()
        {
            return this ;
        }     
};

int main()
{
    Marks m1(100) ;
    m1.showData() ;
    m1->showData() ;
    return 0 ;
}
