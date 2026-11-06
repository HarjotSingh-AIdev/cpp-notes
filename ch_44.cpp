#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int,int> map;
  int unique;
    int numbers[100];
    for (int i = 0; i < n; i++) 
    {
      map[i]++;
    }
     for(int i=0;i<n;i++)
     {
      cout<< map[i]<<endl;
     }
      
    
    return 0;
}
