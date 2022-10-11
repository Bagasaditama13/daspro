#include <iostream>

using namespace std;

int main()
{
    int angka,jam,konversijam,konversimenit,menit,detik,hasil;
    cout << "Program konversi waktu" << endl;
    cout << "==========================" << endl;
    cout << "Masukkan detik : ";
    cin >> angka;
    konversijam=angka/3600;
    jam=angka%3600;
    cout << "Hasil konversi jam : " << konversijam << " jam" << endl;
    konversimenit=jam/60;
    menit=jam%60;
    cout << "Hasil konversi menit : " << konversimenit << " menit" << endl;
    detik=menit%60;
    cout << "Hasik konversi detik : " << detik << " detik" << endl;
    return 0;
}
