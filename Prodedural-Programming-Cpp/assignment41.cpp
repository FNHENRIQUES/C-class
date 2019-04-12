/***********************************************************************
* Program:
*    Assignment 41, Allocating memory
*    Brother Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This program will prompt the user for a size of string that will 
*    be allocated in memory, and will ask for a text if the text 
*    will have different size or the entry will be invalid the program
*    will show an error message.
*
*    Estimated:  1.0 hrs   
*    Actual:     1.0 hrs
*      A Little difficult part was to find out how pass information to
*    check allocation failures.
************************************************************************/

#include <iostream>
#include <cassert>


using namespace std;

/***********************************************************************
 * Get Size prompt user for number allocation.
 ***********************************************************************/
int getNum()
{

   int num;


   
   cout << "Number of characters: ";

   cin >> num;

   return num;
}

/***************************************************
 * AllocMem will prompt number to allocated memory
 * and display the text in allocated if the number
 * size is incorrect will display an error message.
 **************************************************/
void allocMen(int num)
{

   cin.ignore(1);
   char *text; // Pointer for text
   text = new (nothrow) char[num + 1]; // Allocate memory for char. 

   // Error message for invalid input.
   if (num <= 0)
   {
      cout << "Allocation failure!" << endl;
   }
   else
   // Receive the text in allocated characters.
   {
      cout << "Enter Text: ";
      cin.getline (text, num + 1);
      // Display allocated text.   
      cout << "Text: " << text << endl;
   }
   delete text; // Empty memory allocated data.
   
}


/**********************************************************************
 * MAIN
 * will run the program calling number and memory allocation display.
 ***********************************************************************/
int main()
{
   // Call getSize function.
   int num = getNum();
   // Call allocMen function.
   allocMen(num);
   
   return 0;
}
