#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    char i;
    i = 'A'; // inisialisasi nilai awal
    while (i <= 'Z')
    {
        cout << i << endl;
        i = i + 1;
    }
    return 0;
}