/***********************************************************************
* Program:
*    Assignment 16, Compute Bracket
*    Professor Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This program calculate bracket tax, by comparing values inserted as
*    income, using boolean expressions and the commands if, else if and    .
*    else.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  1.0 hrs   
*    Actual:     3.0 hrs
*      I spent a long time to realize that the subroutine must be
*    called after the variable input income.
************************************************************************/

#include <iostream>
using namespace std;

// I putted these variables here because it will be used by two functions.
double tax;
double bracket;

/**********************************************************************
 * The function computeTax will run the comparison of the income
 * and bracket taxes, returning the true value. 
 ***********************************************************************/
void computeTax()
{
   if (tax >= 336550)
      bracket = 35;

   else if (tax >= 188450)
      bracket = 33;

   else if (tax >= 123700)
      bracket = 28;

   else if (tax >= 61300)
      bracket = 25;

   else if (tax >= 15100)
      bracket = 15;

   else
      bracket = 10;
}


/**********************************************************************
 * The function "main" does ask and record the income value, call
 * the sub routine that compute the tax and return a valid bracket Tax.
 ***********************************************************************/
int main()
{

   
   cout << "Income: ";
   cin  >> tax;
   computeTax();
   cout << "Your tax bracket is " << bracket << "%\n";
   
   return 0;
}
