#include <iostream>
using namespace std;
                   //LINEAR SEARCH
int main(){
    int arr[]={71,61,21,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    int ans=-1;
    cout<<"enter what to search in array :";
    cin>>target;
    for(int i=0;i<n;i++)
    {
      if(arr[i]==target)
      {
        ans=i;
        break;
      }
    }
    if(ans==-1)
    {
        cout<<"not present :"<<ans<<"\n";
    }
    else
    {
        cout<<"index :"<<ans<<"\n";
    }
}