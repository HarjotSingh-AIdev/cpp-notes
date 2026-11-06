#include <iostream>
using namespace std;

union temp{    //in union all elements share same location with size equal to larger one
    char ch;
    int num;
};

int main()
{
    temp s;
    s.ch='a';
    s.num=98;
    cout<<"INTEGER VALUE ="<<s.num<<"\n";
    cout<<"character value ="<<s.ch<<"\n";


}