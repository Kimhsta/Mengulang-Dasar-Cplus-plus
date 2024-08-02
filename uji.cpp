#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Fungsi untuk menampilkan teks per huruf dengan delay
void printCharByChar(const string &text, int delayMilliseconds)
{
    for (char c : text)
    {
        cout << c << flush; // Menampilkan satu karakter dan flush buffer untuk efek langsung
        this_thread::sleep_for(chrono::milliseconds(delayMilliseconds));
    }
    cout << endl; // Pindah ke baris baru setelah selesai menampilkan teks
}

int main()
{
    // Menentukan delay untuk setiap huruf
    const int delayPerChar = 100; // Delay 100 milidetik per huruf

    // Menampilkan lirik per huruf dengan delay
    printCharByChar("Itsudatte tonari ni ite", delayPerChar);
    printCharByChar("Watashi dake wo mitsumete kureta ne", delayPerChar);
    printCharByChar("Suki yo", delayPerChar);
    printCharByChar("Ima anata ni omoi nosete", delayPerChar);
    printCharByChar("Hora sunao ni naru no watashi", delayPerChar);
    cout << endl;

    printCharByChar("Kono saki motto soba ni itemo ii kana?", delayPerChar);
    printCharByChar("Koi to koi ga kasanatte", delayPerChar);
    printCharByChar("Suki yo", delayPerChar);

    return 0;
}