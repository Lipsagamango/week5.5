/*
  *****
  *   *
  *   *
  *   *
  *****
*/
#include<iostream>
using namespace std;
int main(){
  //declaring variables
  int n=5;
  //print star space star
  for (int i=0;i<n;i++){
  //printing stars in first and 5th row
    if(i==0 or i==(n-1)){
     for (int j=0;j<n;j++){
     cout <<"*";
  }
   }
  // for 2nd,3rd,4th row
  else{
      //print stars
      cout <<"*";
      // print spaces
       for ( int j=0;j<(n-2);j++){
           cout <<" ";
       }
       //print stars
   cout <<"*";
    }
cout <<endl;
}
return 0;
} 

