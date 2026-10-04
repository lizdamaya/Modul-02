#include <iostream>
using namespace std;

int main()
{
    int N;

    cout << "masukkan jumlah mahasiswa: ";
    cin >> N;

    int nilai[N];
    int total = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> nilai[i];
        total += nilai[i];
    }

    int rataRata = total / N;

    int jumlahDiAtas = 0;

    for (int i = 0; i < N; i++)
    {
        if (nilai[i] > rataRata)
        {
            jumlahDiAtas++;
        }
    }

    cout << "rata-rata: " << rataRata << endl;
    cout << "di atas rata-rata: " << jumlahDiAtas << endl;

    return 0;
}