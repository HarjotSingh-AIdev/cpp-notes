#include <iostream>
using namespace std;

int sum(int a,int b);//function declaration


int main (){
    cout<<sum(1,2)<<"\n";

    return 0;
}


int sum(int a,int b){
    return a+b;
}