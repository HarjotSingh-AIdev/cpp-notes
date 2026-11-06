#include <iostream>
using namespace std;
                   //BUBBLE SORT

int main(){
   int arr[]={22,1,31,14,30};
   int n=sizeof(arr)/sizeof(arr[0]);

   for(int i=0;i<n-1;i++)
   {
     for(int j=0;j<n;j++)
     {
       if(arr[j]>arr[j+1])
       {
         int t=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=t;
       }
     }
   }
//    for(int i=0;i<n;i++)
//    {
//     cout<<arr[i]<<",";
//    }
       /////ENHANCE FOR LOOP
    
    for(int x:arr){
        cout<<x<<",";
    }

}