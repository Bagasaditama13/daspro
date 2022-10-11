#include <iostream>

using namespace std;

int main()
{
    int hasilbagi, angka1, angka2, sisahasil;
    cout << "Input angka pertama : "; cin >> angka1;
    cout << "Input angka kedua : "; cin >> angka2;
    hasilbagi=angka1/angka2;
    sisahasil=angka1%angka2;
    cout << angka1 << " mod " << angka2 << ", maka hasil bagi = " << hasilbagi << " dan sisa hasil bagi = " << sisahasil << endl;
    return 0;
}
