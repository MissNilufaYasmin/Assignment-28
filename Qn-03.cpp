/*3. Overload subscript operator [] that will be useful when we want to check for an index
out of bound.*/

#include<iostream>
using namespace std ;

class Array
{
    int ary[10] ;  
    public:
        void setData(int index_no , int value)
        {
            ary[index_no] = value ;
        }
        int operator[](int index_number)
        {
            if(index_number > 10 )
            {
                cout<<"Index number out of bound"<<endl ;
                exit (0) ;
            }   
            else
                return ary[index_number] ;
        }        
} ;
int main ()
{
    Array a1 ;

    //a1.setData(5,500) ;
    //cout<<a1[5] ;

    int i ;
    for(i=0 ; i<10 ; i++)
        a1.setData(i,i*5) ;
    
    //for(i=0 ; i<10 ; i++)
        cout<<a1[11]<<" " ;

    return 0 ;
}
