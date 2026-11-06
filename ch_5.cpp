#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int age;
    cout<<"enter your age : ";
    cin>>age;
    cout<<"enter your name : ";
    //cin>>name;   Reads only one word, so it would stop at a space.
    
    getline(cin,name); // Reads the whole name; 
   
    cout<<"Hello "<<name<<". you are "<<age<<" years old";
    return 0;

}