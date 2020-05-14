/********************
 * Program Filename:fractals.cpp
 * Author: Renee Aimba
 * Date: 3/3/2019
 * Description:This is a program that prints a pattern of stars
 * Input:n value for the row, i value for the column
 * Output:A pattern of stars according to what the user puts in
 ********************/

#include<iostream>

using namespace std;

/*****************
 * Function: pattern()
 * Description:This function uses recursion to print a pattern of stars
 * Parameters:n, i
 * Pre-Conditions:n, i
 * Post-Conditions:none
 ****************/
void pattern(int n, int i){
  if(n==0){
   return;
  }
  pattern(n/2, i);
   for(int k=0; k<i; k++){
    cout << " ";
    }
      for(int k=0; k<n; k++){
      cout << "* ";
      }
      cout<<endl;
  pattern(n/2, i+n);
}
int main(){
  int n; 
  cout << "Enter n: " << endl;
  cin >>  n;

  int i;
  cout << "Enter i: " << endl;
  cin >> i;

  pattern(n,i);

  return 0;
}
