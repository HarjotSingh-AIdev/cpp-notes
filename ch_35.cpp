#include <iostream>
using namespace std;
void swap(int *x,int *y);
                   //SWAP USING POINTERS IN FUNCTION(PASS BY REFFERENCE)
int main()
   {
    int x=10;
    int y=20;
    swap(&x,&y);

    cout<<"x ="<<x<<"\n";
    cout<<"y ="<<y<<"\n";

   }

void swap(int *x,int *y)
{
      int t=*x;
      *x=*y;
      *y=t;

}