#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int i;
    i = 5; // inisialisasi nilai awal
    do
    {
        cout << i << endl;
        i = i - 1;
    } while (i >= 1);
    return 0;
}