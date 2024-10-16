#include <iostream>
using namespace std;


int main (){
  int i, a;
  float b;

  cout << "Selamat Datang di Kalkulator Kusjay \n";
  cout << "Silahkan pilih mode dibawah ini! \n";
  cout << "1. Penjumlahan \n";
  cout << "2. Pengurangan \n";
  cout << "3. Perkalian \n";
  cout << "4. Pembagian \n";
  cout << "Ketik angka depan untuk memilih mode diatas. Misal '1' untuk Penjumlahan. \n";
  cout << "Masukkan disini: ";
  cin >> i;

  if (i == 1){
    cout << "Mode Penjumlahan \n";
    cout << "Silahkan Masukkan Bilangan Pertama : ";
    cin >> a;
    cout << "Silahkan Masukkan Bilangan Kedua : ";
    cin >> b;
    int hapen = a + b;
    cout << "Hasil dari Penjumlahan " << a << " + " << b << " = " << hapen << endl;
    cout << "Terimakasih sudah menggunakan Kalkulator Kusjay \n";
  }else if (i == 2){
    cout << "Mode Pengurangan \n";
    cout << "Silahkan Masukkan Bilangan Pertama : ";
    cin >> a;
    cout << "Silahkan Masukkan Bilangan Kedua : ";
    cin >> b;
    int hapun = a - b;
    cout << "Hasil dari Pengurangan " << a << " - " << b << " = " << hapun << endl;
    cout << "Terimakasih sudah menggunakan Kalkulator Kusjay \n";
  }else if (i == 3){
    cout << "Mode Perkalian \n";
    cout << "Silahkan Masukkan Bilangan Pertama : ";
    cin >> a;
    cout << "Silahkan Masukkan Bilangan Kedua : ";
    cin >> b;
    int haper = a * b;
    cout << "Hasil dari Perkalian " << a << " x " << b << " = " << haper << endl;
    cout << "Terimakasih sudah menggunakan Kalkulator Kusjay \n";
  }else if (i == 4){
    cout << "Mode Pembagian \n";
    cout << "Silahkan Masukkan Bilangan Pertama : ";
    cin >> a;
    cout << "Silahkan Masukkan Bilangan Kedua : ";
    cin >> b;
    float hapem = a / b;
    cout << "Hasil dari Pembagian " << a << " : " << b << " = " << hapem << endl;
    cout << "Terimakasih sudah menggunakan Kalkulator Kusjay \n";
  }else {
    cout << "Maaf mode yang anda pilih tidak ada di list. Silahkan pilih mode yang ada di list! \n";
  }

  return 0;
}