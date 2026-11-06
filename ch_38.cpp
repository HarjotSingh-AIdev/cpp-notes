#include <iostream>
using namespace std;

void SUM(int* arr,int *n,int *sum)
{
     for(int i=0;i<*n;i++)
     {
        *sum+=arr[i];
     }

}
int main(){
    int arr[]={10,20,30,40,50};
    int n =sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    SUM(arr,&n,&sum);   
    for(int i:arr)
    {
      cout<<i<<endl;
    }
    cout<<sum<<"\n";
}