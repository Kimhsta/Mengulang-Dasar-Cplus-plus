#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int i;
    i = 1; // inisialisasi nilai awal
    do
    {
        cout << i << endl;
        i = i + 1;
    } while (i <= 5);
    return 0;
}