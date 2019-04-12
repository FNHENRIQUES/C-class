/***********************************************************************
* Program:
*    Project 02, Monthly Budget
*    Professor Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This receive information and display on screen the monthly Budget
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  2.0 hrs   
*    Actual:     2.5 hrs
*    This program was not difficult, but I had little mistakes
*    forgetting ";" and right spaces.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * "main" does receive input and output on screen the Budget. Using cin, cout
 * variables, and data type.
 ***********************************************************************/
int main()
{
   // declare the variables

   float income;
   float taxes;
   float tithing;
   float living;
   float bliving;
   float other;

   cout << "This program keeps track of your monthly budget\n"
        << "Please enter the following:\n";
   
   // prompt for expected income
   cout << "\tYour monthly income: ";
   cin >> income;
   cout << "\tYour budgeted living expenses: ";
   cin >> bliving;
   cout << "\tYour actual living expenses: ";
   cin >> living;
   cout << "\tYour actual taxes withheld: ";
   cin >> taxes;
   cout << "\tYour actual tithe offerings: ";
   cin >> tithing;   
   cout << "\tYour actual other expenses: ";
   cin >> other;
   cout << "\n";
      
   // configure the display to show income: two digits of accuracy
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   // display results
   cout << "The following is a report on your monthly expenses\n";
   cout << "\tItem                  "
        << "Budget          "
        << "Actual\n";
   
   cout << "\t=============== " << "=============== " << "===============\n";
      
   cout << "\tIncome          "
        << "$" << setw(11)
        << income
        << "    $" << setw(11)
        << income << endl;
   
   cout << "\tTaxes           "
        << "$" << setw(11)
        << 0.00
        << "    $" << setw(11)
        << taxes << endl;
   
   cout << "\tTithing         "
        << "$" << setw(11)
        << 0.00
        << "    $" << setw(11)
        << tithing  << endl;

   
   cout << "\tLiving          "
        << "$" << setw(11)
        << bliving
        << "    $" << setw(11)
        << living << endl;

   cout << "\tOther           "
        << "$" << setw(11)
        << 0.00
        << "    $" << setw(11)
        << other << endl;

   cout << "\t=============== " << "=============== " << "===============\n";

   cout << "\tDifference      "
        << "$" << setw(11)
        << 0.00
        << "    $" << setw(11)
        << 0.00 << endl;
   
   
   return 0;
   
}
