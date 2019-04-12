/***********************************************************************
* Program:
*    Project 07, Calendar
*    Brother Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This program will display a calendar from 1753 putting the day of week
*    correctly.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  1.0 hrs   
*    Actual:     8.0 hrs
*    It was a very hard test for me find out leap year and calculate offset
*    was the worst part, but I figured out that simple things can bring
*    much trouble I forgot to declare days = 0 and It was difficult find
*    out.
************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

/**********************************************************************
 * This function receive from user the month number between 1 to 12 and 
 * return it
 ***********************************************************************/
int getMonth()
{
   // Variable equals 13 to make void the while condition.
   int month = 13;
   // Loop if user digit a month higher than 12.
   while (month > 12 || month < 1)
   {
      cout << "Enter a month number: ";
      cin >> month;
      // This clause will advise the user to use month number correctly.
      if (month > 12 || month < 1)
         cout << "Month must be between 1 and 12.\n";
   
   }
   return month;
}

/**********************************************************************
 * This function ask the user a year higher from 1753.
 ***********************************************************************/
int getYear()
{
   int year = 0;
   // This condition loop if the user put a year lower that 1753.
   while (year < 1753)
   {
      cout << "Enter year: ";
      cin >> year;
   // This clause advise the user to digit a year higher than 1752.
      if (year < 1753)
         cout << "Year must be 1753 or later.\n";
   
   }
   cout << endl;
   return year;
}


    

/**********************************************************************
 * This function calculate the year leap.
 ***********************************************************************/
bool leapYear(int year)
{
   // leap year each 4 months not in 100 and each in 400 year.
   if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
      return true;
   else
      return false;
   
} 

/**********************************************************************
 * This function number of days for each month.
 ***********************************************************************/
int numDaysMonth(int year, int month)
{
   int daysMonth;
   // Calculate days of month of 28, 29, 30 or 31 days.
   if ( month == 4 || month == 6 || month == 9 || month == 11)
      daysMonth = 30;
   else if (month == 2)
   {
      if (leapYear(year) == true)
         daysMonth = 29;
      else
         daysMonth = 28;
   }
   else
      daysMonth = 31;
   return daysMonth;
}

/**********************************************************************
 * This function compute the year and month comparing with 1973 and
 * return the offset for week and days of month.
 ***********************************************************************/
int computeOffset(int year, int month)
{
   int days = 0;
   // This formula returns the offset for indicate the week day.
   for (int yearCount = 1753; yearCount < year; yearCount++)
   {
      if (leapYear(yearCount) == true)
         days += 366;
      else
         days += 365;
   }

   for (int monthCount = 1; monthCount < month; monthCount++)
   {
      days += numDaysMonth(year, monthCount);
   }

   return (days % 7);
}

/**********************************************************************
 * This function will do the conversion of the month number in names
 * the conversion of offset to spaces to set week day and display the
 * calendar table.
 ***********************************************************************/
void display(int off, int num, int month, int year)
{
   // This condition compare month to display the corresponding month.
   if (month == 1)
      cout << "January, " << year;
   else if (month == 2)
      cout << "February, " << year;
   else if (month == 3)
      cout << "March, " << year;
   else if (month == 4)
      cout << "April, " << year;
   else if (month == 5)
      cout << "May, " << year;
   else if (month == 6)
      cout << "June, " << year;
   else if (month == 7)
      cout << "July, " << year;
   else if (month == 8)
      cout << "August, " << year;
   else if (month == 9)
      cout << "September, " << year;
   else if (month == 10)
      cout << "October, " << year;
   else if (month == 11)
      cout << "November, " << year;
   else
      cout << "December, " << year;
   cout << endl;

// Print the header of week days on screen.  
   cout << "  Su  Mo  Tu  We  Th  Fr  Sa\n";
   // Print the position in week calendar according the offset value. 
   {
      if (off == 0)
         cout << "    ";
      else if (off == 1)
         cout << "    " << "    ";
      else if (off == 2)
         cout << "    " << "    " << "    ";
      else if (off == 3)
         cout << "    " << "    " << "    " << "    ";
      else if (off == 4)
         cout << "    " << "    " << "    " << "    " << "    ";
      else if (off == 5)
         cout << "    " << "    " << "    " << "    " << "    " << "    ";
      else
         cout << "";

   }

   // This condition will pull a line after the week day is Saturday.
   for (int i = 1; i <= num; i++)

   {

      cout << setw(4) << i;
      {

         if (((i + 1) + off) % 7 == 0)
            cout << endl;
      }

   }
   // This condition pull a line when the last month day is not Saturday.
   
   if (num == 31 && off == 3);
   else if (num == 30 && off == 4);
   else if (num == 29 && off == 5);
   else if (num == 28 && off == 6);
   else
      cout << endl;

}


/**********************************************************************
 * The function "main" call month, year values, computeOffset return, 
 * take the corresponding days in month to display function and call it
 * to print all information required on calendar on screen.
 * ***********************************************************************/
int main()
{

   int month = getMonth();
   int year = getYear();
   int off = computeOffset(year, month);
   int num = numDaysMonth (year, month);
   display (off, num, month, year);
   
   return 0;
}
