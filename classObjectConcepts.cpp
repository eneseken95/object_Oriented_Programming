#include <iostream>
using namespace std;

class araba
{
    public:
    string marka;
    string model;
    string rengi;

    void gazla()
    {
        cout<<"gaza basildi..."<<endl;
    }

    void dur()
    {
        cout<<"arac durduruldu..."<<endl;
    }

};

int main()
{
araba nesne1;
araba nesne2;

nesne1.marka = "toyota";
nesne1.model = "1999";
nesne1.rengi = "kirmizi";

cout<<"marka : "<<nesne1.marka<<endl;
cout<<"model : "<<nesne1.model<<endl;
cout<<"renk : "<<nesne1.rengi<<endl;
nesne1.gazla();
nesne1.dur();

cout<<endl;

nesne2.marka = "bmw";
nesne2.model = "2000";
nesne2.rengi = "mavi";

cout<<"marka : "<<nesne2.marka<<endl;
cout<<"model : "<<nesne2.model<<endl;
cout<<"renk : "<<nesne2.rengi<<endl;
nesne1.gazla();
nesne1.dur();

    return 0;
}