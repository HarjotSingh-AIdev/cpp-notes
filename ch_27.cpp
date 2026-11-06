//  2D ARRAYS(MATRIX)

#include <iostream>
using namespace std;

int main(){
    int rows,cols;
    cout<<"Enter the numbers of rows: ";
    cin>>rows;
    cout<<"Enter the numbers of column: ";
    cin>>cols;
    int matrix[rows][cols];
    for(int i=0;i<rows;i++)
    {
      for(int j=0;j<cols;j++)
      {
        cout<<"Enter the element of matrix["<<i<<"]["<<j<<"]=";
        cin>>matrix[i][j];
      }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++) 
        {
        cout<<matrix[i][j]<<" ";
        }cout<<"\n";
}
}