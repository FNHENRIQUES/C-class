/***********************************************************************
* Program:
*    Assignment 34, Pointer Arithmetic
*    Brother Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary:
*    This program prompt user for enter a text,
*    and a letter, the program will return how many times the letter
*    repeat in text.
*    Estimated:  1.0 hrs
*    Actual:     2.0 hrs
*      Difficult make the program read the text with spaces.    
************************************************************************/

#include <iostream>

using namespace std;

/**********************************************
 * This function prompt user a letter
 ***********************************************/
char getLetter()
{
   char letter;
   cout << "Enter a letter: ";
   cin >> letter;
   
   return letter;
}

/**********************************************
 * This function prompt the user a text.
 ***********************************************/
void getName(char name[])
{
 
   cout  << "Enter text: ";
   cin.ignore();
   cin.getline(name,256);
}

/**********************************************************
 * This function will count how many letters are in text
 *********************************************************/
int countLetter(char *name, char letter)
{
   // count begin 0.
   int count = 0;
   // For will loop the count of letters equal and return count.
   for (char *c = name; *c; c++) 
   {
      if (*c == letter)
         ++count;
   }
   return count; 
}

/**********************************************
 * Display will print the result on screen
 ***********************************************/
void display(int count, char letter)
{
   cout << "Number of '" << letter
        <<  "'s: " << count  << endl;
   
}

/**********************************************************************
 * Main call the sub routines and run the program
 ***********************************************************************/
int main()
{
   char letter; 
   letter = getLetter();
   char name[256];  
   getName(name);

   int count = countLetter(name, letter);
   display(count, letter);
   
   return 0;
}
