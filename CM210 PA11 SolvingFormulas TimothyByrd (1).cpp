/*
Timothy Byrd
Fall 2019
CM 210

This program does the follwoing:
1) Calculates the value of Result using the following formula

  Result = (( x /y*y*y) - z/ (a*a) + b)
2) read  the necessary inputs form the userL
  x, y, z, a, b
3) use as many sub functions as needed
  1) one sub-function for finding the cube
  2) one sub0 fucntion for finding the square
  3) one sub-function to find the numerator
  4) one sub function to find the denominator
*/

#include<iostream>
using namespace std;
// signatures of the FOUR sub-functions
float getCube(float n);
float getSquare(float n);
float getNumerator(float n1, float n2, float n3);
float getDenominator(float n1, float n2);
int main()
{
  float x, y, z, a, b, result;//declare the spaces
  cout << "Enter the value of x: ";
  cin >> x;
  cout << "Enter the value of y: ";
  cin >> y;
  cout << "Enter the value of z: ";
  cin >> z;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  float numerator = getNumerator(x, y, z);
  float denominator = getDenominator(a, b);
  result = numerator/denominator;
  cout << "The Result is: " << result <<endl;
}
//funciton definition
float getCube(float n) 
{
  return n*n*n;
}
float getNumerator(float n1, float n2, float n3) //finds the numerator
{
  float numer = (n1 / (getCube(n2) )) - n3;
  return numer;
}

float getSquare(float n) //gets the square
  {
    return n*n;
  }
float getDenominator(float n1, float n2) //determines denominator
{
  float asquare = getSquare(n1);
  float denom = asquare + n2;
  return denom;
}