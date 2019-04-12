/***********************************************************************
* Program:
*    Assignment 12, Income
*    Professor Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This receive information and display on screen
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  1.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * "main" does receive input and output on screen the income. Using cin, cout
 * variables, and data type.
 ***********************************************************************/
int main()
{
   // declare the variables

   float  income;

   // prompt for expected income
   cout << "\tYour monthly income: ";
      cin >> income;

   // configure the display to show income: two digits of accuracy
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   // display results
   cout << "Your income is: "
        << "$" << setw(9)
        << income << endl; 
      
   
   return 0;
   
}
