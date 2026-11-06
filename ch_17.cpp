// DIFFERENT STARS PATTERNS


#include <iostream>
#include<random>
using namespace std;

int main(){


    /*for(int i=0;i<5;i++){
        for (int j=5;j>i;j--){
             cout<<"* ";
        } cout<<"\n";
      }*/
   
   
    /*int n=5;
    for (int i=1;i<=n;i++){                           //    *
        for(int j=1; j<=n-i;j++){                     //   **
            cout<< " ";}                              //  ***
        for(int k=1;k<=i;k++){                        // ****
            cout<<"*";                                //***** 
        }cout<<"\n";
        
    } */
    
    

   /* int n=5;
    for (int i=0;i<n;i++){                              // *****
        for(int j=1; j<=n-i;j++){                       // ****
            cout<< "* ";}                               // ***
        for(int k=1;k<=i;k++){                          // **
            cout<<" ";                                  // * 
        }cout<<"\n";
        }  */


       /*  int n=5;

    for (int i=1;i<=n;i++){                            //*****
        for(int j=1; j<=i;j++){                        // ****
            cout<< " ";}                               //  ***
        for(int k=1;k<=n-i;k++){                       //   **
            cout<<"*";                                 //    * 
        }cout<<"\n";
        
    }  */

//      *
//     * *
//    * * *
//   * * * *
   /* int n=5;
    for(int i=1;i<n;i++){
        for(int j=0;j<=n-i;j++)
           { cout<<" ";}
        for(int k=1;k<=i;k++){
            cout<<"* ";}
        cout<<"\n";
        }*/

// *       *      
//  *     *
//   *   *
//    * *
//     * 
    int n=5;

    for(int i=1;i<=n;i++){
        for(int j=1; j<2*n; j++){
            if((i==j )||(i+j ==2*n)){
               cout<<"*";
            }
            else{
                cout<<" ";
            }
        }cout<<"\n";
    
    }
return 0;


}











