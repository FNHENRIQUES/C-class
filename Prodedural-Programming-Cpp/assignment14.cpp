/***********************************************************************
* Program:
*    Assignment 14, Matthew 18:21-22
*    Professor Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This program will address Peter's question to the Lord in 
*    Matthew 18:21-22
*
*    Estimated:  1.0 hrs   
*    Actual:     2.0 hrs
*      It become easier after professor's video help.
************************************************************************/

#include <iostream>
using namespace std;

/********************************************************
 * This subroutine shows Peter question on screen.
 *********************************************************/        
void questionPeter() 
{
   cout << "Lord, how oft shall my brother sin against me, "
        << "and I forgive him?\n"
        << "Till seven times?\n";
}

/*****************************************************
 * This subroutine multiply variables a and b.
 *****************************************************/
double responseLord(double a, double b) 
{
   double value = a * b;
   return value;
}

/**********************************************************************
 * Main will return Peter talk Jesus talk with
 * functions: questionPeter() and responseLord() respectively.
 ***********************************************************************/
int main()
{
   // ask Peter's question
   questionPeter();

   // the first part of the Lord's response
   cout << "Jesus saith unto him, I say not unto thee, Until seven\n";
   cout << "times: but, Until " << responseLord(70, 7) << ".\n";

   return 0;
}
