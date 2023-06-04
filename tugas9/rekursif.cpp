#include "iostream"
using namespace std;

// penjumlahan
int add(int a, int b) {
  if (a <= 0 && b <= 0)
    return 0;
  if (a <= 0)
    return 1 + add(a,b-1);
  if (b <= 0)
    return 1 + add(a-1, b);
  return 2 + add(a-1, b-1);
}

// pengurangan
int sub(int a, int b) {
  return b <= 0 ? a : sub(a-1,b-1);
}

// perkalian
int mul(int a, int b) {
  if (b <= 1)
    return a;
  return mul(a, b-1) + a;
}

// pembagian
float divide(float a, float b) {
  if (a <= 1)
    return 1/b;
  return divide(a-1, b) + (1/b);
}

int main() {
  cout << "Penjumlahan\n";
  cout << "2 + 3 = " << add(2,3) << endl;
  cout << "5 + 7 = " << add(5,7) << endl;
  cout << "11 + 4 = " << add(11,4) << endl;
  cout << "Pengurangan\n";
  cout << "5 - 3 = " << sub(5,3) << endl;
  cout << "9 - 6 = " << sub(9,6) << endl;
  cout << "15 - 9 = " << sub(15,9) << endl;
  cout << "Perkalian\n";
  cout << "5 * 3 = " << mul(5,3) << endl;
  cout << "4 * 6 = " << mul(4,6) << endl;
  cout << "11 * 5 = " << mul(11,5) << endl;
  cout << "Pembagian\n";
  cout << "8 / 2 = " << divide(8,2) << endl;
  cout << "18 / 6 = " << divide(18,6) << endl;
  cout << "14 / 4 = " << divide(14,4) << endl;
}