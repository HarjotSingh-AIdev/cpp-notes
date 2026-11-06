#include <iostream>
using namespace std;
              //PALINDROME STRING CHECKER
int main(){
    string str;
    cout<<"Enter string : ";
    cin>>str;
    int s=0,e=str.length()-1;
    bool ispal=true;
    while(s<e)
    {
      if(str[s]!=str[e])
      {
         ispal=false;
         break;
      }
      else
      {
        s++;
        e--;
        ispal=true;
      }
    }
    (ispal==true)? cout<<"it is a palindrome":cout<<"it is not a plaindrome";

}