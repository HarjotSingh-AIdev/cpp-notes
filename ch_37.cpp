#include <iostream>
using namespace std;

int main()
{
   int arr[]={31,12,73,49,15};
   int *ptr =arr;
   int n =sizeof(arr)/sizeof(arr[0]);

   cout<<arr<<"\n";//IN C ARR ITSELF IS A POINTER
   cout<<ptr<<"\n";
   cout<<*ptr<<"\n";
   cout<<*(ptr+1)<<"\n";



}
