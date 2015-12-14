// Mohamed Saleh
// Fibonacci Sequence

///////////////////////////////////////////////////////////////////////
// Filename: main.c
//
// Synopsis: Main program file for demonstration code
//
// Purpose:
// Write a program generating the first n Fibonacci numbers F(n), printing ...
// ... "Buzz" when F(n) is divisible by 3.
// ... "Fizz" when F(n) is divisible by 5.
// ... "BuzzFizz" when F(n) is prime.
// ... the value F(n) otherwise.
//
///////////////////////////////////////////////////////////////////////


/* Header Files */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/////////////////////

/* Function Prototypes */
void fibonacciSequence(int n);
int checkDiv(int b);
int checkPrime(int b);


/////////////////////


/* main function to call Fibonacci Sequence Generator */
// This is where the testing takes place
void main()
{
    printf("Fibonacci Sequence \n");
    fibonacciSequence(25);
}

/////////////////////

/* Function Declarations*/

void fibonacciSequence(int n){
///////////////////////////////////////////////////////////////////////
// Purpose:    Generates Fibonacci Sequence
// Input:   n
// Returns:   Nothing / void
// Calls:  checkDivisible(), checkPrime();
// Notes:  printing the value F(n) when not prime or divisible be 3 or 5.
///////////////////////////////////////////////////////////////////////
    int a = 0;
    int b = 1;

    printf("%i \n",1);  // 1 is the chosen Starting point of the Sequence

    while (n-- > 1) {
        int t = a;
        a = b;
        b += t;     // b = F(n): is the latest number of the Fib Sequence being generated

        if( checkDiv(b) ) {}  // Checks if b is divisible by 3 or 5
        else if( checkPrime(b) ) {}  // Checks if b is prime
        else {
            printf("%i \n",b);
        }

    }
//    return b;
}

int checkDiv(int b){
///////////////////////////////////////////////////////////////////////
// Purpose:   Checks if the number is divisible by 3 or 5
// Input:     b
// Returns:   True(1) if input is divisible by 3 or 5. False(0) otherwise.
// Notes:     prints ...
// ... "Buzz" when b is divisible by 3.
// ... "Fizz" when b is divisible by 5.
///////////////////////////////////////////////////////////////////////
    if (b%3 == 0){
        printf("Buzz \n");
        return 1;
    }
    if(b%5 == 0){
        printf("Fizz \n");
        return 1;
    }
    return 0;
}

int checkPrime(int b){
///////////////////////////////////////////////////////////////////////
// Purpose:   Checks if the number is prime
// Input:     b
// Returns:   True(1) if input is prime. False(0) otherwise.
// Notes:     prints ...
// ... "BuzzFizz" when b is prime.
///////////////////////////////////////////////////////////////////////
    int c;

   for ( c = 2 ; c <= (int)sqrt(b) ; c++ ){
        if ( b%c == 0 )
        return 0;
   }
   printf("BuzzFizz \n");
   return 1;
}


