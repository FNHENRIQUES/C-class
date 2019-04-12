/***********************************************************************
* Program:
*    Project 04, Monthly Budget
*    Professor Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary:
*    This receive information by sub routines perform simple calculation.
*    and display on screen the monthly Budget.
*    Before you submit the assignment include the actual time it took.
*    Estimated:  2.0 hrs
*    Actual:     4.0 hrs
*    I had little confusion by using subroutines and calling them and
*    using finding the correct formula to compute tax.
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
   double bLiving;
   cout << "\tYour budgeted living expenses: ";
   cin >> bLiving;
   return bLiving;
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
   cout << "\n";
   return other;
}

/*************************************************************************
* This function calculates the Tithe over the income.
*************************************************************************/
double    computeTithing() // compute budget tithing
{
   double budgetTithing = monthlyIncome / 10;
   return (budgetTithing);
}

/*************************************************************************
 * This function compute budget other expenses.
 *************************************************************************/
double computeOther()
{
   budgetOther = monthlyIncome - budgetTithing - budgetLiving - monthlyTax;
   return (budgetOther);
}

/**************************************************************************
* This function compute the difference between actual income and expenses
**************************************************************************/
double computeDifference()
{
   actualDifference = monthlyIncome - actualTax - actualTithing - \
      actualLiving - actualOther;
   return (actualDifference);
}

/**************************************************************************
* Declare subroutine to compute Tax value.
**************************************************************************/
double computeTax ()
{
   double yearlyIncome = monthlyIncome * 12;
   double yearlyTax;
   double monthlyTax;
   
   if (yearlyIncome >= 336550)
      yearlyTax = 91043 + 0.35 * (yearlyIncome - 336550);

   else if (yearlyIncome >= 188450)
      yearlyTax = 42170 + 0.33 * (yearlyIncome - 188450);

   else if (yearlyIncome >= 123700)
      yearlyTax = 24040 + 0.28 * (yearlyIncome - 123700);

   else if (yearlyIncome >= 61300)
      yearlyTax = 8440 + 0.25 * (yearlyIncome - 61300);

   else if (yearlyIncome >= 15100)
      yearlyTax = 1510 + 0.15 * (yearlyIncome - 15100);

   else
      yearlyTax = yearlyIncome * 0.10;

   monthlyTax = yearlyTax / 12;
   return (monthlyTax);
}

/******************************************************************************
* This function will display the table of result on screen.
******************************************************************************/
void display()
{
   // configure the display to show values: two digits of accuracy
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
        << monthlyIncome
        << "    $" << setw(11)
        << monthlyIncome << endl;

   cout << "\tTaxes           "
        << "$" << setw(11)
        << monthlyTax
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
}


/**********************************************************************
* "main" does receive input and output on screen the Budget. Using
* variables, subroutines  and data type.
***********************************************************************/
int main()
{
   cout << "This program keeps track of your monthly budget\n"
        << "Please enter the following:\n";

   //Using and showing variables to compute values.
   double monthlyIncome = getIncome();
   double budgetLiving = getBudgetLiving();
   double actualLiving = getActualLiving();
   double actualTax = getActualTax();
   double actualTithing = getActualTithing();
   double actualOther = getActualOther();


   //computing (call functions to compute values)
   computeTax();
   computeTithing();
   computeOther();
   computeDifference();

   // call function to display the table on screen.
   display();

   return 0;
}
