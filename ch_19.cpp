#include <iostream>
using namespace std;
void factor(int x);//function declaration
void prime(int x);
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    factor(n);
    prime(n);


}
void factor(int x){
    cout<<" Factors of "<<x<<" are : ";

    for(int i=1;i<=x;i++){
        if(x%i==0){
            cout<<i<<";";
        }
     }cout<<" \n ";

    }

void prime(int x)
{
     int fact=0;
     for(int i=1;i<=x;i++)
     {
        if(x%i==0)
        {
            fact+=1;
        }
     }
     if (fact==2)
     {
        cout<<x<<" is a prime number \n";
     }
    else
    {
        cout<<x<<" is not a prime number \n";

    }

}


