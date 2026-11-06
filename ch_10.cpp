#include<iostream>
using namespace std;

int main(){
    float bill;
    cout<<"Enter total amount : ";
    cin>>bill;
    if (bill<=5000)
    {
        cout<<"Bill ="<<bill;
    }  
    else if (bill>5000 && bill<=7000)
    {
        cout<<"Bill = "<<bill-(bill*5)/100;
    }
    else if (bill>7000 && bill<=9000)
    {
        cout<<"Bill = "<<bill-((bill*10)/100);
    }
    else if (bill>9000 )
    {
        cout<<"Bill = "<<bill-(bill*20)/100;
    }
   
    


}