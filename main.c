#include <stdio.h>
#include <stdlib.h>


void printFibonacciNumbers(int n) //function with an input argument
{
   int i , num1, num2, nextTerm; //4 unknown variable
   num1 = 0;//initializing num1
   num2 = 1;//initializing num2

    printf("Fibonacci Series: "); //print statement

    for (i = 0; i < n; i++) //for loop
  {
    if (i <= 1) //if condition
      nextTerm = i;
    else
    {
        nextTerm = num1 + num2; // adding num1 and num2 and initializing nextTerm
        num1 = num2; // num1 is initialized by num2
        num2 = nextTerm; //num2 is initialized by nextTerm
    }
    printf("%d ", nextTerm); //printing the value
  }
}

int main()
{

    printFibonacciNumbers(6); //calling the printFibonacciNumbers by supplying argument 6
    return 0;
}
