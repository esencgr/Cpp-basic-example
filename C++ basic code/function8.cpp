#include <iostream>
#include <ctime>
#include <stdlib.h> 
using namespace std;
int main()
{
    cout << "oz yineli fonksiyonlar - rastgele sayi atama" << endl;
    
    int rg; //rastgele=rg
    srand (time(NULL));
    rg = rand() %6 +1; // zar ornegi bir sayinin 6 ile b�l�m�nden kalan 0-5 arasi +1 ile de 6 y� ekliuyoruz 
    //1 ve 6 arasindaki sayilardan secim
    cout << rg << endl;

    rg = rand() %2; // yazi - tura (2 ile b�l�mden kalan 0-1)
    //0 ve 1 arasindan deger d�ner 
    cout << rg << endl;

    rg = rand() %100;
    cout << rg << endl;
}
