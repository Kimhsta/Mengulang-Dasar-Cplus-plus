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
    else if (bil < 0)
    {
        cout << "Bilangan Negatif";
    }
    else
    {
        cout << "Bukan Bilangan Positif & Negatif";
    }
    return 0;
}