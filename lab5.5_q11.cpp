/*
  *****
  ****
  ***
  **
  *
 */
#include<iostream>
using namespace std;
int main(){
//declaring variables
   int n=5,i,j;
  //print stars and space
   for (i=0;i<5;i++){
   //print one less stars from above row
    for (j=0;j<(n-i);j++){
        cout<<"*";}
     cout<<endl;
   }
return 0;
} 

