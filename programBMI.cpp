#include <iostream>
using namespace std;

float tinggi, Berat, hasilBMI;

void input(){
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
    cout << "Masukkan berat badan (kg): ";
    cin >> Berat;
}

float menghitungBMI (float tinggi,float Berat){
    return Berat/(tinggi * tinggi);
}
int main (){
    return 0;
}