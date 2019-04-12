/***********************************************************************
* Program:
*    Assignment 25, Calendar
*    Brother Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This program will display on screen a calendar of month and offset day
*    of week.                                                             .
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  2.0 hrs   
*    Actual:     4.0 hrs
*      The most difficult part was find out a formula to put the spaces
*    in the beginning of month and cutting correctly the row of each week.
************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

/*************************************************************
* This function will get the numbers of days in a month 
* between 28 and 31. 
*************************************************************/
int numDays()
{
   int num = 0;

   while (num < 28 || num > 31)
   {
      cout << "Number of days: ";
      cin >> num;
   }

   return num;

}

/*************************************************************
* This function will get the offset number
* between 0  and 6. 
*************************************************************/
int offset()
{
   int off = 7;
   while (off > 6)
   {
      cout << "Offset: ";
      cin >> off;
   }
   return off;

}


/*************************************************************
* This function will print on screen the calendar of days
* in weeks of a month, calling the function offset and numDays.
**************************************************************/
int displayMonth()
{
   int num = numDays();
   int off = offset();

   cout << "  Su  Mo  Tu  We  Th  Fr  Sa\n";

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
         cout << "    " << "    " << "    " << "    " << "    " << "     ";
      else
         cout << "";

   }

   for (int i = 1; i <= num; i++)

   {

      cout << setw(4) << i;
      {

         if (((i + 1) + off) % 7 == 0)
            cout << endl;

      }
      
   }

   {
      if (num == 28 && off == 6)
         cout << "";
      else if (num == 29 && off == 5)
         cout << "";
      else if (num == 30 && off == 4)
         cout << "";
      else if (num == 31 && off == 3)
         cout << "";
      else
         cout << "\n";
         
   }

  
}



/*************************************************************
* The function Main will call the function Display  
* to print the calendar.
*************************************************************/
int main()
{
   displayMonth();

   return 0;

}
