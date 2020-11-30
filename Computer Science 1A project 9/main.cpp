#include <iostream>

using namespace std;

void allocateArray(bool**& aryGrid, int intRows, int intCols);
void deallocateArray(bool**& aryGrid, int intRows);
void displayArray(bool** aryGrid, int intRows, int intCols);

int main()
{
    int intRows = 0;
    int intCols = 0;
    bool** grid;

   allocateArray(grid, intRows, intCols);
   deallocateArray(grid, intRows);
   displayArray(grid, intRows, intCols);

}

void allocateArray(bool**& aryGrid, int intRows, int intCols)
{
    bool** aryGrid = new bool*[intRows];
    for(int r = 0; r < intRows; r++)
    {
        aryGrid[r] = new bool[intCols];
    for(int c = 0; c < intCols; c++)
        aryGrid[r][c] = false;
    }
}

void deallocateArray(bool**& aryGrid, int intRows)
    {
        for(int r = 0; r < intRows; r++)
        {
            delete [] aryGrid[r];
        }
        delete [] aryGrid;
        aryGrid = NULL;
    }

void displayArray(bool** aryGrid, int intRows, int intCols)
    {
        for(int r = 0; r < intRows; r++)
            {
                for(int c = 0; c < intCols; c++)
                    {
                        if(aryGrid[r][c])
                            cout << "*";
                        else
                            cout << " ";
                    }
                cout << endl;
            }
    }
