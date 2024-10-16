#include <iostream>
using namespace std;


int main (){
  int p, l, t;
  cout << "Masukkan Nilai Panjang Balok: " << endl;
  cin >> p;
  cout << "Masukkan Nilai Lebar Balok: " << endl;
  cin >> l;
  cout << "Masukkan Nilai Tinggi Balok: " << endl;
  cin >> t;
  int hasil = p * l * t ;
  cout << "Volume Balok adalah " << hasil << " cm"<< endl;

  return 0;
}