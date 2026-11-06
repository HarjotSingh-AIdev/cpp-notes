#include <iostream>
using namespace std;
                //TOGGLE CHARACTER IN STR(lower->upper,upper->lower)
int main (){
    string str="NotYourCollege";
    for(int i=0;i<str.length();i++)
    {
     if(str[i]>='a' && str[i]<='z'){    //ASCII value of "A"=65 
         str[i]=str[i]-32;              //that of "a"=97
     }
     else{
        str[i]+=32;
     }
    }
    cout<<str;

}