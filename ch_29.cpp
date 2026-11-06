#include <iostream>
#include <string>
using namespace std;

int main(){
    // string name;
    // cout<<"Enter name : ";
    // getline(cin,name);

    // for (int i=0;i<name.length();i++)
    // {
    //     cout<<name[i]<<"\n";
    // }

    string str="harjot ";   //DYNAMIC STRING
    string str2="singh";
    cout<<(str==str2)<<"\n";
     str2="harjot";
   string str3;
    cout<<(str==str2)<<"\n";
    str3.append(str);
    str3.append(str2);
    cout<<str3;



      

}