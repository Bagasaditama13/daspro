#include <iostream>

using namespace std;

int main()
{
    int alas,tinggi,luas;
    cout << "Menghitung Luas Segitiga" << endl;
    cout << "===============================" << endl;
    cout << "Masukkan alas segitiga : " ;
    cin >> alas;
    cout << "Masukkan tinggi segitiga : ";
    cin >> tinggi;
    luas=alas*tinggi/2;
    cout << "Luas segitiga : " << alas << " * " << tinggi << " /2 " << " = " << luas << endl;
    return 0;
}
