/***********************************************************************
* Program:
*    Assignment 35, Grades
*    Brother Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This program will prompt user for a grade value and will display
*    the percentage and letter grade result.
*
*    Estimated:  1.0 hrs   
*    Actual:     2.0 hrs
*      I did it with the help of Professor Honeycutt video, it was
*    difficult to find out everything, but with his help I understood
*    more about switch and define expression, and boolean operators.
************************************************************************/

#include <iostream>
#include <cassert>

using namespace std;

#define INVALID '*'


/***********************************************************************
 * Get grade function prompt grade between 0 and 100 from user. 
 **********************************************************************/
int getGrade()
{
   
   int grade = 0;
   cout << "Enter number grade: ";
   cin >> grade;
   // Grade higher than 100 or less than 0 ask user to correct.
   while (grade > 100 || grade < 0)
   {
      cout << "Enter a grade between 0 and 100: ";
      cin >> grade;
   }

//   cout << "The grade is:" << grade << endl; //I did it to check the value.

   
   return grade;
}

/***********************************************************************
 * Compute Letter Grade
 * This function will return switch letter values for grade received.
 **********************************************************************/
char computeLetterGrade(int grade)
{
   switch (grade / 10)
   {
      case 10: // 100%
      case 9: // 90 - 99%
         return 'A';
      case 8: // 80 - 89%
         return 'B';
      case 7: // 70 - 79%
         return 'C';
      case 6: // 60 - 69%
         return 'D';
      default: // All else
         return 'F';
   }
   
}

/***********************************************************************
 * Compute Grade Sign
 * This function will return the sign or INVALID value according to grade
 * value.
 **********************************************************************/
char computeGradeSign(int grade)
{
   int lastDigit = grade % 10;
   char sign = INVALID;

   // - ends 0, 1, 2
   if (lastDigit <= 2)
      sign = '-'; 

   // + ends 7, 8, 9 and is not an 'A' or 'F' 
   if (lastDigit >= 7)
      sign = '+'; 

   // otherwise, return our special '*' symbol
   return (grade >= 60 && grade < 95) ? sign : INVALID;   
}

/***********************************************************************
 * Display
 * It will receive the value of letter sign and grade and show on
 * screen.
 **********************************************************************/
void display(char letter, char sign, int grade)
{
   cout << grade << "% is " << letter;
   if (sign != INVALID)
      cout << sign;
   cout << endl;
}

/**********************************************************************
 * Main will call all functions doing the relation between then and  
 * running the program first taking grade value, sharing with all
 * sub function, calling compute letter grade and compute grade sign
 * providing all information to function display show the values on
 * screen.
 ***********************************************************************/
int main()
{
   int grade =  getGrade(); 
   char letter = computeLetterGrade(grade);
   char sign = computeGradeSign(grade);
   display (letter, sign, grade);
   return 0;
}
