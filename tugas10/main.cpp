#include "iostream"
using namespace std;

struct PersegiPanjang {
    int p,l;
    int luas(int p, int l) {
        return p * l;
    }
};
struct Lingkaran{
    float r;
    float luas(float r) {
        return 3.14 * r * r;
    }
};
struct Kerucut {
    float r,t;
    float vol() {
        return 1.0/3.0 * 3.14 * r * r * t;
    }
};
struct Bola {
    float r;
    float vol(float r) {
        return 4.0/3.0 * 3.14 * r * r * r;
    }
};

int main() {
    
    // LATIHAN 1
    PersegiPanjang p;
    p.p = 10;
    p.l = 20;
    
    
    
    
    return 0;
}