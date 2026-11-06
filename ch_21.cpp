#include <iostream>
using namespace std;

int main(){
    // int arr[]={1,2,33,233,-412,44};
    //  int max=arr[0];
    // int size=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<=size;i++)
    // {
    //     if(max<arr[i])
    //     {
    //         max=arr[i];
    //     }
    // }
    // cout<<max;


//TWO POINTER ALGORITHM (reverse the arr )
int arr[]={1,21,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
int s=0,e=n-1;
while(s<e)
{
   int t=arr[s];
   arr[s]=arr[e];
   arr[e]=t;
   s++;
   e--;
   
}
for (int i=0;i<n;i++)
{
    cout<<arr[i]<<",";
}




}
