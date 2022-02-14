/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);
int a = 1 , b = 1 , c = 1;

int main() {
  int n, r ,counter;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long Factorial(int no)
{
  if(no < 0)
  {
    std::cout << "Error" ;
  }
  else 
  {
    long result ;
    for(counter = 1 ; counter <= no ; counter++ )
    {
      result *= counter ;
    }
  }
  std::cout << result
}
long nCr(int n, int r)
{
  long result ;
  a = factorial(n);
  b = factorial(r);
  c = factorial(n - r);

  result = a / b * c ;
  return result ;
  
}