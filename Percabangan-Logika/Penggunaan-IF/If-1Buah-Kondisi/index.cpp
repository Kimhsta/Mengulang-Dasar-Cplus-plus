#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int bil;
    cout << "Input Bilangan :";
    cin >> bil;
    if (bil > 0)
    {
        cout << "Bilangan Positif";
    }
    else
    {
        cout << "Bukan Bilangan Positif";
    }
    return 0;
}