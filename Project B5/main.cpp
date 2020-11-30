#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ELEMENT = 1;

void allocateArray(int**& aryGrid, int intRows, int intCols);
void initArray(int** aryGrid, int intRows, int intCols);
void displayArray(int** aryGrid, int intRows, int intCols);
void deallocateArray(int**& aryGrid, int intRows);

int main(int argc, char* argv[])
{
    if(argc != 3)
    cerr << "Usage"<< argv [0] << "NUM_ROWS_NUM_COLS" << endl;


    return 0;
}

void allocateArray(int**& aryGrid, int intRows, int intCols)
    {
        aryGrid = new int*[intRows];
        for(int r = 0; r < intRows; r++)
        {
            aryGrid[r] = new int[intCols];
        }
    }

void initArray(int** aryGrid, int intRows, int intCols)
{
    srand(time(0));
    for(int r = 0; r < intRows; r++)
    {
        for(int c = 0; c < intCols; c++)
        {
            aryGrid[r][c] = rand() % 9 + 1;
        }
    }
}

void displayArray(int** aryGrid, int intRows, int intCols)
{
    for(int r = 0; r < intRows; r++)
    {
        for(int c = 0; c < intCols; c++)
        {
            for(int i = 0; i < 100; i++)
            {
                cout << " ";
            }
            cout << "---" << endl;
        }
    }
    cout << intRows << endl;
}

void deallocateArray(int**& aryGrid, int intRows)
{
    for(int r = 0; r < intRows; r++)
    {
        delete[] aryGrid[r];
    }
    delete[] aryGrid;
    aryGrid = NULL;
}

