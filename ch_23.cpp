#include <iostream>
using namespace std;
               //counts the number of sub arrays having sum=3
int main(){
    int arr[]={1,2,3,2,1};
    int target=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0,count=0;
    
    for(int i=0;i<n;i++)
    {
        sum=0;
        for (int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==target)
            {
                count++;
            }
        }
    }
    cout<<count;
}