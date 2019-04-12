/***********************************************************************
* Program:
*    Project 13, Sudoku Game - Final
*    Brother Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary:
*    This program will read a file and display information on a Sudoku
*    board prompt user for coordinates and check the cells used or not
*    write a new game board.
*    Estimated:  2.0 hrs
*    Actual:     9.0 hrs
*      I could not find out how make functions to check sudoku in time.
************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int SIZE = 9;
void interact(char board[][SIZE]);

/*****************************************************************************
 * get filename  for input file.
 **************************************************************************/
void getFilename(char filename[])
{
   cout << "Where is your board located? " ;
   cin >> filename;

}

/*****************************************************************************
 * READ FILE to get multidimensional array.
 **************************************************************************/
void readFile(char filename[], char board[][SIZE])
{
   ifstream fin(filename);           // open file
   // return error in opening file
   if (fin.fail())
   {
      cout << "Can't open file "
           << filename;
      exit (1);
   }


   // read the file in to multi dimensional array

   for (int row = 0; row < SIZE; row++)
   {
      for (int col = 0; col < SIZE; col++)
      {
         fin >> board [row][col];
      }

   }
   // Close the stream
   fin.close();


}

/************************************************************************
 * DISPLAY will display the board on screen.
 **********************************************************************/
void displayBoard (char board[][SIZE])
{
   // Display the contents of the board
   cout << "   A B C D E F G H I\n";
   int n = 1;
   for (int row = 0; row < SIZE; row++)
   {
      cout << n++ << "  ";


      for (int col = 0; col < SIZE; col++)
      {

         if (col == 8)
         {
            if (board[row][col] == '.' || board[row][col] == '0')
               cout << " "; // just one space on last col
            else
               cout << board[row][col];
         }

         else if (col == 2 || col == 5)
         {
            if (board[row][col] == '.' || board[row][col] == '0')
               cout << " |"; // space bar

            else
               cout << board[row][col] << "|"; // just bar
         }

         else if (board[row][col] == '.' || board[row][col] == '0')
            cout << " " << " "; // double space


         else
            cout << board[row][col] << " "; // value and space

      }

      cout << endl;

      if (row == 2 || row == 5)
         cout << "   " << "-----+-----+-----\n";
   }

   cout << endl;

}

/**************************************************************************
 * Options will prompt user for enter a valid option.
 **************************************************************************/
void displayOpt()
{
   cout << "Options:\n"
        << "   ?  Show these instructions\n"
        << "   D  Display the board\n"
        << "   E  Edit one square\n"
        << "   S  Show the possible values for a square\n"
        << "   Q  Save and Quit\n"
        << "\n";

   return;
}

/**************************************************************************
 * EDITSQUARE will edit void square.
 **************************************************************************/
void editSquare(char board[][9])
{

   char letter;
   int number;
   char value = 0;


   cout << "What are the coordinates of the square: ";
   cin  >> letter >> number;

   // converts letter to UPPERCASE
   letter = toupper(letter);

   // letter A minus 65 in ASCII code return number 0 for first col
   if (board[number - 1][letter - 65] != '0') // if different '0' is filled 
   {
      cout << "ERROR: Square \'" << letter << number << "\' is filled\n";
      cout << "\n";
   }
   else
   {
      cout << "What is the value at \'" << letter << number << "\': ";
      cin  >> value;

      if (value < '1' || value > '9')
      {
         cout << "ERROR: Value \'" << value << "\' in square \'";
         cout << letter << number << "\' is invalid\n";
         cout << "\n";

      }

      cout << "\n";
      board[number - 1][letter - 65] = value;
      
   }



   return;
}

/**************************************************************************
 * GETDESTFILENAME will prompt user the file name for new board.
 **************************************************************************/
void getOutputFilename(char filename[])
{
   cout << "What file would you like to write your board to: " ;
   cin >> filename;

}

/**************************************************************************
 * WRITEFILE will create a new file with the board content.
 *************************************************************************/
void writeFile (char filename[], const char board[][SIZE])
{
   ofstream fout;

   fout.open(filename);

   if (fout.fail())
   {
      cout <<   "Error file could not open.";
      exit (1);
   }

   for (int row = 0; row < SIZE; row++)
   {
      for (int col = 0; col <= SIZE; col++)
      {
         if (col == SIZE)
            fout << endl;
         else
            fout << board[row][col] << " ";
      }
   }

   fout.close();

   cout << "Board written successfully" << "\n";

}

/**********************************************************************
 * INTERACT run the program options to prompt user play the game.
 ***********************************************************************/
void interact(char board[][SIZE])
{
   char option;
   char filename[256];
   bool file = true;
   do
   {
      cout << "> ";
      cin >> option;

      if (option == '?')
         displayOpt(),
            cout << "\n";
      else if (option == 'd' || option == 'D')
         displayBoard(board);
      
      else if (option == 'e' || option == 'E')
         editSquare(board);

      else if (option == 's' || option == 'S')
         int possibleValues;
      
      else if (option == 'q' || option == 'Q')
      {
         // call functions to new filename and write new board
         getOutputFilename(filename),
            writeFile(filename, board);
         file = false; // condition to end the loop
      }
      else
         cout << "ERROR: Invalid command" << endl;
   }
   while (file != false);

}




/**********************************************************************
 * MAIN run the program calling sub functions.
 ***********************************************************************/
int main()
{
   char filename[256];
   char board [SIZE][SIZE];

   // 1. get the file name
   getFilename(filename);

   // 2. read file
   readFile(filename, board);

   // 3. show options
   displayOpt();

   // 4. Display board
   displayBoard (board);

   // 5. run options
   interact (board);


   return 0;

}
