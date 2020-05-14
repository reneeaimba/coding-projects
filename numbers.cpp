/************************
 * * Program: numbers.cpp
 * * Author: Renee Aimba
 * * Date: 01/13/19
 * * Description: A program that computes max and min signed and unsigned numbers along with their sizes and values when raised to an exponent
 * * Input: No input.
 * * Output: Signed and Unsigned ints, longs and shorts and the values when raised to an exponenet, along with their sizes.
************************/

#include <iostream> 
#include <climits>
#include <cmath>

using namespace std;

int main () {

  cout<< "climits" <<endl;                                           //for max and min sizes of signed and unsigned ints,longs and shorts
  cout<< "SHRT_MAX- " << SHRT_MAX <<endl;
  cout<< "SHRT_MIN- " << SHRT_MIN <<endl;
  cout<< "LONG_MAX- " << LONG_MAX <<endl;
  cout<< "LONG_MIN- " << LONG_MIN <<endl;
  cout<< "INT_MAX- " << INT_MAX <<endl;
  cout<< "INT_MIN- " << INT_MIN <<endl;
  cout<< "USHRT_MAX- " << USHRT_MAX <<endl;
  cout<< "ULONG_MAX- " << ULONG_MAX <<endl;
  cout<< "UINT_MAX- " << UINT_MAX <<endl;
  
  
  cout<< "cmath" <<endl;                                            //to compute common mathematical operations and transformations 
  int max_short = (pow(2, sizeof(short)*8)-1)/2;
  cout<< "sizeof_SHRT_MAX- " << max_short <<endl;

  int min_short = (pow(-2, sizeof(short)*8)+1)/2;
  cout<< "sizeof_SHRT_MIN- " << min_short <<endl;
  
  std::cout << std::fixed;
  /*int max_long = (pow(2, sizeof(long)*8)-1)/2 <<endl;
  cout<< "sizeof_LONG_MAX- " << max_long <<endl;

  int min_long = (pow(-2, sizeof(long)*8)+1)/2 <<endl;
  cout<< "sizeof_LONG_MIN- " << min_long <<endl;*/
  
  cout<< "sizeof_LONG_MAX- " << (pow(2, sizeof(long)*8)-1)/2 <<endl;
  cout<< "sizeof_LONG_MIN- " << (pow(-2, sizeof(long)*8)+1)/2 <<endl;
  cout<< "sizeof_INT_MAX- " << (pow(2, sizeof(int)*8)-1)/2 <<endl;
  cout<< "sizeof_INT_MIN- " << (pow(-2, sizeof(int)*8)+1)/2 <<endl; 
  
  short int u_max_short = (pow(2, sizeof(short)*8)-1)/2;
  cout<< "sizeof_USHRT_MAX- " << u_max_short <<endl;

  long int u_max_long = (pow(2, sizeof(long)*8)-1)/2;
  cout<< "sizeof_ULONG_MAX- " << u_max_long <<endl; 
 
  int u_max_int = (pow(-2, sizeof(int)*8)-1)/2;
  cout<< "sizeof_UINT_MAX- " << u_max_int <<endl;

return 0;
}
