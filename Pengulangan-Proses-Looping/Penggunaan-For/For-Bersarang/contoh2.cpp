#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}