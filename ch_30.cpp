#include <iostream>
#include <algorithm>
using namespace std;

int main(){
//str.pop_back()--> removes last character from str
//str.push_back()-->adds a character to str
//str.insert(index,string to insert)-->insert a string to str at index

   string str;
   cout<<"enter a string to reverse : ";
   cin>>str;

//    int s=0,e=str.length();
//    while(s<e)
//    {
//     swap(str[s],str[e-1]);  // end point should be (length -1)
//     s++;
//     e--;
//    }

//INBUILT METHOD FOR SWAP
    reverse(str.begin(),str.end());



   cout<<str<<"\n";

  return 0;
}