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

string kondisiBMI (float BMI){
    if (BMI < 18.5)
       return "berat badan kurang";
    else if (BMI < 25)
       return "berat badan normal";
    else if (BMI < 30)
       return "berat badan kelebihan";
    else
       return "obesitas";
}

void output(){
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---"<<endl;
    cout << "Masukkan berat badan (kg): 70";
    cout << "Masukkan Tinggi badan (meter): 1.7";

    cout << "--- Hasil ---"; 
    cout << "BMI Anda : 24.2215";
    cout << "status : Berat Badan Normal";
}
int main (){
    float hasilBMI;

    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    input();

    hasilBMI = menghitungBMI(tinggi,Berat);

    return 0;
}