#include <iostream>
using namespace std;

void topla(double a, double b) {
    cout << "Sonuç: " << a + b << endl;
}

void cikar(double a, double b) {
    cout << "Sonuç: " << a - b << endl;
}

void carp(double a, double b) {
    cout << "Sonuç: " << a * b << endl;
}

void bol(double a, double b) {
    if (b == 0)
        cout << "Hata: Sıfıra bölme yapılamaz!" << endl;
    else
        cout << "Sonuç: " << a / b << endl;
}

int main() {
    double sayi1, sayi2;
    int secim;

    cout << "=== Basit Hesap Makinesi ===" << endl;
    cout << "1. Toplama" << endl;
    cout << "2. Çıkarma" << endl;
    cout << "3. Çarpma" << endl;
    cout << "4. Bölme" << endl;
    cout << "Seçiminizi yapın (1-4): ";
    cin >> secim;

    cout << "Birinci sayıyı girin: ";
    cin >> sayi1;
    cout << "İkinci sayıyı girin: ";
    cin >> sayi2;

    switch (secim) {
        case 1:
            topla(sayi1, sayi2);
            break;
        case 2:
            cikar(sayi1, sayi2);
            break;
        case 3:
            carp(sayi1, sayi2);
            break;
        case 4:
            bol(sayi1, sayi2);
            break;
        default:
            cout << "Geçersiz seçim!" << endl;
    }

    return 0;
}
