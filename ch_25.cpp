#include <iostream>
using namespace std;
                //BINARY SEARCH
                //used for sorted arrays only
                //optimised method of linear search
int main(){
    int arr[]={11,22,32,43,57,86,99};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0,end=n-1;
    int target;
    int ans=-1;
    cout<<"Nothing will be shown if element not present!! \n";
    cout<<"enter the element to find in array : ";
    cin>>target;
    while(start<=end)
    {
        int mid =(start+end)/2;
        if (arr[mid]==target)
        {
            ans=arr[mid];
            cout<<"GOT IT \n"<<ans<<" is present at position : "<<mid<<"\n";
            break;
        }
        else if (arr[mid]<target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        
    }
        
}