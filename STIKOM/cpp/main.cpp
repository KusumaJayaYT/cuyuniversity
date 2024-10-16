#include <iostream>
using namespace std;


int main (){
  int rapot;
  cout << "Masukkan Nilai Rapot: " << endl;
  cin >> rapot;

  if (rapot >= 90){
    cout << "Anda pintar";
  }else if (rapot >= 70){
    cout << "Anda lumayan pintar";
  }else{
    cout << "Anda tidak pintar";
  }
  return 0;
}