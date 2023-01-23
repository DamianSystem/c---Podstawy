#include <iostream>

using namespace std;

int uczniowie, cukierki, x, y; //deklaracja zmiennej ca³kowitej
//x - ilkoœæ cukierków które ma dostaæ ka¿dy uczeñ
//y - iloœæ cukierków które zostan¹ jasiowi na wieczór

int main()
{
    cout << "Ilu uczniow jest w twojej klasie: ";
    cin >> uczniowie;
    cout << "Ilcukierków kupi³a mama: ";
    cin >> cukierki;

    x = cukierki/(uczniowie-1); //program automatycznie obetnie nam wynik do liczb ca³kowitych, nie poka¿e reszty

    cout<<" Cukierkow dla kazdego ucznia:"<<x;

    y = cukierki-x*(uczniowie-1);

    cout<<endl<<"Dla Jasia na wieczor: "<<y;


    return 0;
}
