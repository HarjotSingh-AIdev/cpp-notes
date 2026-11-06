#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;
    cout << "enter your age : ";
    cin >> age;
    cout << "enter your name : ";
    cin.ignore(); //  solution ->remove \n from buffer
    getline(cin, name);   //Problem->/n remains in buffer hence name will not be asked
    cout << "Hello " << name << ". you are " << age << " years old.";
    return 0;
}