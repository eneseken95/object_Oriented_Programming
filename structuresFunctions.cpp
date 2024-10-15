#include <iostream>
using namespace std;

struct kisi
{
    string ad;
    int yas;
};

void YazdirValue(kisi nesne) 
{
    cout<<"yapilarin kopyalanmmis kismi "<<endl;
    cout<<"ad : "<<nesne.ad<<endl;
    cout<<"yas : "<<nesne.yas<<endl;
}

void YazdirReferans(kisi *ptr) 
{
    cout<<"yapinin referansının geldigi (kendisi) kismi"<<endl;
    ptr->ad="Ayse"; 

    cout<<"ad : "<<ptr->ad<<endl;
    cout<<"yas : "<<ptr->yas<<endl;
}


int main()
{
    kisi nes1 = {"ahmet",30};
    YazdirReferans(&nes1);
    YazdirValue(nes1);
    return 0;
}