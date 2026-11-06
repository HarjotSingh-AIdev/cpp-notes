#include <iostream>
using namespace std;

//void rev(int* arr,int n)
// {   int s=0;
//     int e=n-1;
//     while(s<e)
//     {
//         int t=arr[s];
//         arr[s]=arr[e];
//         arr[e]=t;
//         s++;
//         e--;
//     }
// }
         // ANOTHER METHOD 
void rev(int *arr,int n)

{   int *s=arr;
     int *e=arr+n-1;
     while(s<e)
     {
         int t=*s;
         *s=*e;
         *e=t;
         *s++;//also can write asimple s++ or e--
         *e--;
     }
}



int main()
{
    int arr[]={6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    rev(arr,n);
    for(int x=0;x<n;x++)
    {
        cout<<arr[x]<<",";
    }
}