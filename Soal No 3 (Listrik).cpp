#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main (){
    float v, i, r;

    //Perhitungan Arus Listrik
    cout << "Mencari Arus Listrik" << endl;
    cout << "Masukkan Tegangan (V) : ";
    cin >> v;

    cout << "Masukkan Hambatan (R) ; ";
    cin >> r;

    i = v/r;

    cout << "Nilai Arus Listrik = " << i << endl;
    cout << " " << endl;

    //Perhitungan mencari tegangan
    cout << "Mencari Tegangan" << endl;
    cout << "Masukkan Arus Listrik (I) ; ";
    cin >> i;

    cout << "Masukkan Hambatan (R) : ";
    cin >> r;

    v = i * r;

    cout << "Nilai tegangan = " << v << endl;
    cout << " " << endl;

    //Perhitungan Mencari Hambatan
    cout << "Mencari Nilai Hambatan" << endl;
    cout << "Masukkan Tegangan (V) : ";
    cin >> v;

    cout << "Masukkan Arus Listrik (I) : ";
    cin >> i;

    r = v/i;

    cout << "Nilai Hambatan = " << r << endl;

    return 0;
}
