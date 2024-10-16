#include <iostream>
using namespace std;
int main ()
{
cout<<"Nama : Arassym"<<endl;
cout<<"NIM : 231011402564"<<endl;
cout<<"Kelas: TI 06"<<endl;
cout<<"==========================================="<<endl;
cout<<" Menghitung Volume Dan Luas Permukaan Bola "<<endl;
cout<<"==========================================="<<endl;
const float pi=3.14;
float jari_jari,luas,volume;
cout<<endl;
cout<<"Masukkan Jari-Jari = ";cin>>jari_jari;
cout<<endl;
volume=4/3*pi*jari_jari*jari_jari*jari_jari;
cout<<"Volume nya adalah = "<<volume<<endl;
luas=4*pi*jari_jari*jari_jari;
cout<<"Luas nya adalah   = "<<luas<<endl;
return 0;
}