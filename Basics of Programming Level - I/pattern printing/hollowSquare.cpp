#include <iostream>
using namespace std;

int main()
{
    int row, col;

    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < 4; col++)
        {
            if (row == 0 || row == 3)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == 3)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}