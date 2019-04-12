/***********************************************************************
* Program:
*    Project 09, Mad Lib
*    Professor Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary: 
*    This program receive information from user, read a file,
*    replace the user information on file.
*    Before you submit the assignment include the actual time it took.
*    Estimated:  2.0 hrs   
*    Actual:     3.0 hrs
*    In this program I don´t realized that I already need to replace 
*    the words on file and I had not time to finalize it, but it´s
*    working properly where I could do.
************************************************************************/

#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;


/*********************************************************************
 * The function getFilename just will get the name of file to read.
 *********************************************************************/
void getFilename(char fileName[])
{
   cout << "Please enter the filename of the Mad Lib: ";
   cin >> fileName;

}

/*********************************************************************
 * The function askQuestion will load the information of words
 * given by user.
 *********************************************************************/
int askQuestion()
{
   // char noum receive noum information 256 char and until 32 words
   char noum[256][32];
   cout << "\tPlural noum: ";
   cin >> noum[0];
   cout << "\tPlural noum: ";
   cin >> noum[1];
   cout << "\tType if liquid: ";
   cin >> noum[2];
   cout << "\tAdjective: ";
   cin >> noum[3];
   cout << "\tFunny Noise: ";
   cin >> noum[4];
   cout << "\tAnother funny noise: ";
   cin >> noum[5];
   cout << "\tAdjective: ";
   cin >> noum[6];
   cout << "\tAnimal: ";
   cin >> noum[7];
   cout << "\tAnother animal: ";
   cin >> noum[8];

}

/*********************************************************************
 * The function read file will open the file read it and 
 *********************************************************************/
int readFile(char fileName[], char story[][32]) // story text max 32 words
{
   // Declare the output stream
   ifstream fin (fileName);
   if (fin.fail())
   {
      cout << "Error reading " << fileName << endl;
      return false;
   }

   int count = 0;
   // Read the data
   while (!fin.eof())
   {
      fin >> story[count];
      count++;
   }
 
   // Close the stream
   fin.close();

   
   return count;
}

void display()
{
   cout << "Thank you for playing." << endl; 
}


/**********************************************************************
 * "main" does receive input and output on screen.
 ***********************************************************************/
int main()
{
   char story[256][32];
   char fileName[256];
   getFilename(fileName);
   int count = readFile(fileName, story);
   askQuestion();
   display();
   return 0;
   
}
