/*

      MAX AND MIN IN ARRAYS USING PINTERS IN FUNCTIONS

*/


#include <iostream>
using namespace std;


void getmaxmin(int* arr,int *n,int *max,int *min)
{
    for(int i=0;i<*n;i++)
    {
       if(arr[i]>*max)
       {
        *max=arr[i];
       }
       else if(arr[i]<*min)
       {
        *min=arr[i];
       }

    }
}

int main(){
    int arr[]={31,12,73,49,151,-100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0],min=arr[0];
    getmaxmin(arr,&n,&max,&min);
     
    cout<<"MAX ="<<max<<", MIN ="<<min<<"\n";



}