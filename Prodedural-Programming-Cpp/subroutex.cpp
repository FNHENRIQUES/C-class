/***********************************************************************
 * This demo program is designed to:
 *      Demonstrate how to pass data between functions.  This will do it
 *      by demonstrating how much money to take out of a child's
 *      allowance and put in savings.
 ************************************************************************/

#include <iostream>
using namespace std;

/*********************************************************
 * COMPUTE SAVINGS
 * For a given amount of earned income, compute the amount
 * to be saved.
 *********************************************************/
int computeSavings(int centsIncome)
{
   // first take care of tithing
   int centsTithing = centsIncome / 10;    // D&C 119:4
   centsIncome -= centsTithing;            // remove tithing amount

   // next compute the savings
   int centsSaving = centsIncome / 2;      // save half the remaining
   return centsSaving;
}

/**********************************************************************
 * main(): Prompt the user for income and display the deposit amount
 ***********************************************************************/
int main()
{
   // prompt the user for his allowance
   float dollarsAllowance;                            // float for decimal
   cout << "What is your allowance? ";
   cin  >> dollarsAllowance;                          // input is in $s
   int centsAllowance = (int)(dollarsAllowance * 100);// int for pennies

   // display how much is to be deposited
   int centsDeposit = computeSavings(centsAllowance); // call the function
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout << "You need to deposit $"
        << (float)centsDeposit / 100.0                // convert to $s
        << endl;
   return 0;
}
