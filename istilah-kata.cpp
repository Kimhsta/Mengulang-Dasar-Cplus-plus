#include <iostream>
#include <chrono>
#include <thread>
#include <vector>

void tampilkanLirikPerHuruf()
{

    std::vector<std::string> lirik = {
        "Jangankan cuma cinta",
        "peluru gotri ane tangkis",
        "Istilah kate",
        "istri ane lebih manis",
        "Ane Habib Jindan",
        "cicit Mbah Priuk",
        "paling tampan",
        "Jikalau ditembak",
        "gak mempan",
        "wajar kalau ente nyaman",
        "Sekali sewang",
        "kita hidup masing-masing",
        "Ente kasih godaan",
        "ane gak berpaling"};

    // Jeda antar huruf dalam milidetik
    int jedaAntarHuruf = 40;

    // Jeda antar baris dalam detik
    std::vector<double> jedaAntarBaris = {
        1.0, // Jeda 1.0 detik setelah baris 1
        0.7, // Jeda 0.8 detik setelah baris 2
        0.3, // Jeda 0.3 detik setelah baris 3
        1.3, // Jeda 1.4 detik setelah baris 4
        0.6, // Jeda 0.6 detik setelah baris 5
        0.2, // Jeda 0.2 detik setelah baris 6
        0.1, // Jeda 0.1 detik setelah baris 7
        0.2, // Jeda 0.2 detik setelah baris 8
        0.0, // Jeda 0.0 detik setelah baris 9
        0.9, // Jeda 0.9 detik setelah baris 10
        0.2, // Jeda 0.2 detik setelah baris 11
        0.8, // Jeda 0.8 detik setelah baris 12
        0.6, // Jeda 0.6 detik setelah baris 13
        0.7  // Jeda 0.7 detik setelah baris 14
    };

    for (size_t i = 0; i < lirik.size(); ++i)
    {
        const std::string &baris = lirik[i];
        for (char huruf : baris)
        {
            std::cout << huruf;
            std::this_thread::sleep_for(std::chrono::milliseconds(jedaAntarHuruf));
        }
        std::cout << std::endl;

        if (i < jedaAntarBaris.size())
        {
            std::this_thread::sleep_for(std::chrono::duration<double>(jedaAntarBaris[i]));
        }
        else
        {
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }
}

int main()
{
    tampilkanLirikPerHuruf();
    return 0;
}
