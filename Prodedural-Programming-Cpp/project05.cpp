/***********************************************************************
* Program:
*    Project 05, Calendar
*    Brother Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This program will display on screen a calendar calling the data of
*    month and year and calculating the year leap and week day to display
*    it correctly.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  2.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

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
         cout << "    " <<"    " <<"    ";
      else if (off == 3)
         cout << "    " <<"    " <<"    " <<"    ";
      else if (off == 4)
         cout << "    " <<"    " <<"    " <<"    " <<"    ";
      else if (off == 5)
         cout <<"    " <<"    " <<"    " <<"    " <<"    " <<"    ";
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
      if (num != 28 && off != 6)
         cout << "\n";
      else if (num != 29 && off != 5)
         cout << "\n";
      else if (num != 30 && off != 4)
         cout << "\n";
      else if (num != 31 && off != 3)
         cout << "\n";
   }


}





int main()
{
   displayMonth();

   return 0;

}











