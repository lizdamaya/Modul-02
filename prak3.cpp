#include <iostream>
using namespace std;

// A. Call by Value
// Hanya menyalin data asli, sehingga data asli tidak berubah
void tukarValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

// B. Call by Pointer
// Alamat dikirim menggunakan pointer, sehingga data asli berubah
void tukarPointer(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

// C. Call by Reference
// Data asli ikut berubah
void tukarReference(int &px, int &py)
{
    int temp = px;
    px = py;
    py = temp;
}

int main()
{
    int a = 4, b = 6;

    cout << "Kondisi Awal -> a: " << a << " b: " << b << endl;

    // Test Call by Value
    tukarValue(a, b);
    cout << "Setelah tukarValue -> a: " << a << " b: " << b << endl;

    // Test Call by Pointer
    tukarPointer(&a, &b);
    cout << "Setelah tukarPointer -> a: " << a << " b: " << b << endl;

    // Test Call by Reference
    tukarReference(a, b);
    cout << "Setelah tukarReference -> a: " << a << " b: " << b << endl;

    return 0;
}