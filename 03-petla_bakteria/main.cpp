#include <iostream>

using namespace std;

int populacja=1;
int godzin=0;

int main()
{
/*    while(populacja<=1000000000)
    {
        godzin= godzin +1;
        populacja=populacja*2;
        cout<<"minelo godzin:"<<godzin;
        cout<<"liczba bakterii: "<<populacja<<endl;
    }

*/
    do
    {
        godzin= godzin +1;
        populacja=populacja*2;
        cout<<"minelo godzin:"<<godzin;
        cout<<"liczba bakterii: "<<populacja<<endl;
    }while(populacja<=1000000000); // pamiêtaj o œredniku

    return 0;
}
