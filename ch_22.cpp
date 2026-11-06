#include <iostream>
using namespace std;
//{1,2,3,4,5}-->{2,3,4,5,1} or roatating k times
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k=6;///rotate left k times
  for(int j=0;j<k;j++)
  {
     int temp = arr[0];
     for (int i = 0; i < n - 1; i++)
     {
       arr[i] = arr[i + 1];
     }
     arr[n - 1] = temp;
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ",";
  }
  
}