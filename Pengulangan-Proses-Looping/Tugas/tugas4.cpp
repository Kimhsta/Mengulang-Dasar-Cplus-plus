#include <iostream>
using namespace std;

int main()
{
    int x, j;
    for (x = 1; x <= 5; x++)
    {
        for (j = 1; j <= x; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}