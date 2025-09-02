#include <iostream>
using namespace std;

int pertambahan(int x, int y) {
    return x + y;
}
int pengurangan(int x, int y) {
    return x - y;
}
int perkalian(int x, int y) {
    return x * y;
}
int pembagian(int x, int y) {
    return x / y;
}

void tambah(int result) {
  cout << "hasi penjumlahan nya adalah " << result << endl;
}

void kurang(int result) {
  cout << "hasil pengurannya nya adalah " << result << endl;
}

void kali(int result) {
  cout << "hasil pekalian nya adalah " << result << endl;
}

void bagi(int result) {
  cout << "hasil pembagian nya adalah " << result << endl;
}

int main() {
  int hasil = pembagian(20, 2);
  bagi(hasil);
  
  return 0;
}
