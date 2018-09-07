/*
         *****
        *****
       *****
      *****
     *****
 */
#include<iostream>
using namespace std;
int main(){
   //declaring variables
    int n=5,i;
  // print space star space
   for (i=0;i<5;i++){
  //print space
    for (int j=0;j<(4-i);j++){
      cout <<" ";}
   //print stars
     for (int j=0;j<5;j++){
       cout <<"*";}
     cout <<endl;
}return 0;
} 
    
