#include <iostream>  // REPLACING A CHAR IN STR WITH ANOTHER CHAR
using namespace std;
int main (){
   string str="hello";
   char oldch='l',newch='p';
   for(int i=0;i<str.size();i++)
   {
     if(str[i]==oldch){
        str[i]=newch;
     }

   }
cout<<str;
}