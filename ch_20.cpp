#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of elements to be entered : ";
    cin>>n;
    int arr[n];
    int element;
    for(int i=0;i<n;i++)
    {
        cout<<"enter element : ";
        cin>>arr[i];
    }
    cout<<"elements in arr : ";

 /*  for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<";";
    }*/
    
    //Other method
    for(auto k:arr)
    {
        cout<<k<<",";

    }


}