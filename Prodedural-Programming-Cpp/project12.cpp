/***********************************************************************
* Program:
*    Project 12, Sudoku Game
*    Brother Honeycutt, CS124
* Author:
*    Fernando Negreiros Henriques
* Summary:
*    This program will read a file and display information on a Sudoku
*    board prompt user for coordinates and check the cells used or not
*    write a new game board.
*    Estimated:  1.0 hrs
*    Actual:     7.0 hrs
*      I could not find out how change values on board using 'E' command.
************************************************************************/

#include <iostream>
#include <fstream>


using namespace std;

const int SIZE = 9;

/*****************************************************************************
 * get filename prompt user for input valid board file.
 **************************************************************************/
void getFilename(char filename[])
{
   cout << "Where is your board located? " ;
   cin >> filename;
   
}

/*****************************************************************************
 * READ FILE to get and read the board file content. 
 **************************************************************************/
void readFile(char filename[], char board[][SIZE])
{
   ifstream fin(filename);           // open file
   // return error in opening file
   if (fin.fail())
   {
      cout << "Can't open file "
           << filename;

   }

   
   // read the file in to multi dimentional array
    
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
 * DISPLAY will show the board on screen.
 **********************************************************************/
void display (char board[][SIZE])
{
   // Display the contents of the board 
   cout << "   A B C D E F G H I\n"; // Put a letter for each column 

   for (int row = 0; row < SIZE; row++) // write each row
   {

      switch (row) //switch put a number for each row.
      {
         case 0:
            cout << "1  ";
            break;

         case 1:
            cout << "2  ";
            break;
            
         case 2:
            cout << "3  ";
            break;
   
         case 3:
            cout << "4  ";
            break;
   
         case 4:
            cout << "5  ";
            break;
   
         case 5:
            cout << "6  ";
            break;
   
         case 6:
            cout << "7  ";
            break;
   
         case 7:
            cout << "8  ";
            break;
   
         case 8:
            cout << "9  ";
            break;

      } 
     
      for (int col = 0; col < SIZE; col++) // Write each row
      {

         if (col == 8)  // when last column don´t put space
         {               
            if (board[row][col] == '.' || board[row][col] == '0')
               cout << " "; // change '0' and '.' for space.
            else
               cout << board[row][col];
         }

         else if (col == 2 || col == 5) // if column 2 or 5 put '|'
         {
            if (board[row][col] == '.' || board[row][col] == '0')
               cout << " |";
            
            else
               cout << board[row][col] << "|";
         }

         else if (board[row][col] == '.' || board[row][col] == '0')
            cout << "  "; // when not column 2, 5 or 8 put 2 spaces.
                  
   
         else
            cout << board[row][col] << " "; // Else put the value and space
  
      }

      cout << endl; // pull line for next row
       
      if (row == 2 || row == 5)                    //after row 2 and 5
         cout << "   " << "-----+-----+-----\n"; // put a separator 
   }

   cout << endl;  

}   

/**************************************************************************
 * Options will Display on screen valid options.
 **************************************************************************/
void interact()
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
 * GETOUTPUTFILENAME will prompt user the file name for new board.
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
   cout << "File written" << endl;
   
   fout.close();

}

/*************************************************************
 *
 ************************************************************/
int editBoard()
{
   char letter;
   char num;
   cout << "What are the coordinates of square: ";
   cin >> letter, num;

   return 0;

}

/**********************************************************************
 * OPTION function will prompt user for valid options and call
 * sup routines to run that.
 ***********************************************************************/
void option(char board[][SIZE])
{
   char option;
   char filename[256];
   int file = 1;
   do
   {
      cout << "> ";   
      cin >> option;

      if (option == '?')
         interact();
//  else if (option == 'd' || option == 'D')

      else if (option == 'e' || option == 'E')
         int edit = editBoard();
   
//  else if (option == 's' || option == 'S')

      else if (option == 'q' || option == 'Q')
      {
         getOutputFilename(filename), writeFile(filename, board);
         file = 0;
      }
      else
         cout << "ERROR: Invalid command" << endl;
   }
   while (file != 0);

}

/********************************************************************
 * MAIN run the program calling sub functions.
 ********************************************************************/
int main()
{
   char filename[256];
   char board [SIZE][SIZE];

   // 1. get the file name
   getFilename(filename);

   // 2. read file
   readFile(filename, board);
   // 3. show options
   interact();
   
   // 4. Display board
   display (board);

   // 5. run options
   option (board);

   
   return 0;

}
