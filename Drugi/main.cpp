#include <iostream>

using namespace std;

int uczniowie, cukierki, x, y; //deklaracja zmiennej ca�kowitej
//x - ilko�� cukierk�w kt�re ma dosta� ka�dy ucze�
//y - ilo�� cukierk�w kt�re zostan� jasiowi na wiecz�r

int main()
{
    cout << "Ilu uczniow jest w twojej klasie: ";
    cin >> uczniowie;
    cout << "Ilcukierk�w kupi�a mama: ";
    cin >> cukierki;

    x = cukierki/(uczniowie-1); //program automatycznie obetnie nam wynik do liczb ca�kowitych, nie poka�e reszty

    cout<<" Cukierkow dla kazdego ucznia:"<<x;

    y = cukierki-x*(uczniowie-1);

    cout<<endl<<"Dla Jasia na wieczor: "<<y;


    return 0;
}
