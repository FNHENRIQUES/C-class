/***********************************************************************
* Program:
*    Project 03, Monthly Budget
*    Professor Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This receive information by sub routines perform simple calculation.
*    and display on screen the monthly Budget.
*    Before you submit the assignment include the actual time it took.
*    Estimated:  2.0 hrs   
*    Actual:     3.5 hrs
*    This program was not difficult, but I had little confusion by using
*    subroutines and calling them.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**************************************************************************
 * Declare subroutine to get income value.
 **************************************************************************/
double getIncome()
{
   double income;
   cout << "\tYour monthly income: ";
   cin >> income;
   return income;
}

/**************************************************************************
 * Declare subroutine to get Budget Living value.
 **************************************************************************/
double getBudgetLiving()
{
   double bliving;
   cout << "\tYour budgeted living expenses: ";
   cin >> bliving;
   return bliving;
}

/**************************************************************************
 * Declare subroutine to get Actual Living value.
 **************************************************************************/
double getActualLiving()
{
   double living;
   cout << "\tYour actual living expenses: ";
   cin >> living;
   return living;
}


/**************************************************************************
 * Declare subroutine to get Actual Tax value.
 **************************************************************************/
double getActualTax()
{
   double taxes;
   cout << "\tYour actual taxes withheld: ";
   cin >> taxes;
   return taxes;
}


/**************************************************************************
 * Declare subroutine to get Actual Tithing value.
 **************************************************************************/
double getActualTithing()
{
   double tithing;
   cout << "\tYour actual tithe offerings: ";
   cin >> tithing;
   return tithing;    
}


/**************************************************************************
 * Declare subroutine to get Actual Other value.
 **************************************************************************/
double getActualOther()
{
   double other;
   cout << "\tYour actual other expenses: ";
   cin >> other;
   return other;
}

/**********************************************************************
 * "main" does receive input and output on screen the Budget. Using cin, cout
 * variables, subroutines  and data type.
 ***********************************************************************/
int main()
{
   cout << "This program keeps track of your monthly budget\n"
        << "Please enter the following:\n";
   
      
   // configure the display to show income: two digits of accuracy
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   //Using and showing variables to compute values.
   double income = getIncome();
   double budgetLiving = getBudgetLiving();
   double actualLiving = getActualLiving();
   double actualTax = getActualTax();
   double actualTithing = getActualTithing();
   double actualOther = getActualOther();
   cout << "\n";
//computing
   // Tithings
   double budgetTithing;
   budgetTithing = income / 10;

   //Other
   double budgetOther;
   budgetOther = income - budgetTithing - budgetLiving;
      
   //Difference
   double actualDifference;
   actualDifference = income - actualTax - actualTithing - \
      actualLiving - actualOther; 
   
   
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
        << actualTax << endl;
   
   cout << "\tTithing         "
        << "$" << setw(11)
        << budgetTithing
        << "    $" << setw(11)
        << actualTithing << endl;

   
   cout << "\tLiving          "
        << "$" << setw(11)
        << budgetLiving
        << "    $" << setw(11)
        << actualLiving << endl;

   cout << "\tOther           "
        << "$" << setw(11)
        << budgetOther
        << "    $" << setw(11)
        << actualOther << endl;

   cout << "\t=============== " << "=============== " << "===============\n";

   cout << "\tDifference      "
        << "$" << setw(11)
        << 0.00
        << "    $" << setw(11)
        << actualDifference << endl;
   
   
   return 0;
   
}
