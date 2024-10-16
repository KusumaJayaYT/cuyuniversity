#include <iostream>
#include <cmath>
using namespace std;

// Merubah suhu
// int main (){
//   double f, c;
//   cout << "Enter a temperature in farenheith: ";
//   cin >> f;
//   c = ((f-32)*5)/9;
//   cout << f <<" Farenheith to Celcius is " << c << " Celcius";

//   return 0;
// }

int main (){

  cout << "Masukkan Jari Jari Lingkaran: ";
  double jariJari;
  cin >> jariJari;
  const double pi = 3.14;
  double luas = pi * pow(jariJari, 2);
  cout << "Luas lingkaran: " << luas << "cm";
  return 0;
}