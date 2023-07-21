/*8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.*/

#include<iostream>
using namespace std ;

class Coor3D
{
    int x,y,z ; 

    public:
        Coor3D(){}
        Coor3D(int a , int b , int c)
        {
            x = a ;
            y = b ;
            z = c ;
        }
        void showData()
        {
            cout<<x<<" "<<y<<" "<<z<<endl ;
        }
        Coor3D operator,(Coor3D c)
        {
            Coor3D temp ;
            temp.x = c.z ;
            temp.y = c.y ;
            temp.z = c.x ;

            return temp ;
        }


};
int main()
{
    Coor3D c1(1,2,3) , c2(5,6,7) , c3 ;

    c3 = (c1,c2) ;
    c3.showData() ;
    return 0 ;
}
