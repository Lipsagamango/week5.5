/*
   *****
   ** **
   * * *
   ** **
   *****
*/
#include<iostream>
using namespace std;
int main(){
 //declearing variables
 int n=5;
 //print stars
 for (int i=0;i<5;i++){
 //print stars for 1st and 5th row
  if(i==0||i==(n-1)){
  for (int i=0;i<5;i++){
       cout <<"*";}
      }
 //print stars space stars
  else if(i==(n-2)||i==(n-4)){
   //print stars
   for (int j=0;j<2;j++){
     cout <<"*";}
    //print space
    for (int j=0;j<(n-4);j++){
      cout <<" ";}
    //print stars
   for (int j=0;j<2;j++){
       cout <<"*";}
   }
 //print * * *
   else{
   //print star
    cout <<"*";
   //print space
    for (int j=0;j<(n-4);j++){
    cout <<" ";}
   //print star
    cout <<"*";
   //print space
    for (int j=0;j<(n-4);j++){
    cout <<" ";}
   //print star
    cout <<"*";}
  cout<<endl;
}
return 0;
}
 

