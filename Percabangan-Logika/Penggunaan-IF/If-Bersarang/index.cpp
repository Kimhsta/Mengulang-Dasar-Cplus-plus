#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int bil;
    cout << "Input Bilangan :";
    cin >> bil;

    if (bil > 0)
    {
        if (bil == 1)
        {
            cout << "Anda Menginputkan Bilangan 1";
        }
        else if (bil == 2)
        {
            cout << "Anda Menginputkan Bilangan 2";
        }
        else
        {
            cout << "Bilangan positif lainnya selain 1 dan 2";
        }
    }
    else if (bil < 0)
    {
        if (bil == -1)
        {
            cout << "Anda Menginputkan Bilangan -1";
        }
        else if (bil == -2)
        {
            cout << "Anda Menginputkan Bilangan -2";
        }
        else
        {
            cout << "Bilangan negatif lainnya selain -1 dan -2";
        }
    }
    else
    {
        cout << "Anda Menginputkan Bilangan 0";
    }
    return 0;
}
