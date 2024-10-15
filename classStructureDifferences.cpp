#include <iostream>
using namespace std;

struct kisi1  
{
    public:
    string ad;
    int yas;
    double boy;
};

class kisi2 
{
    public:
    string ad;
    int yas;
    double boy;
};

int main()
{
    kisi1 nesne1;
    nesne1.ad = "ahmet";
    nesne1.boy = 1.88;
    nesne1.yas = 22;

    cout<<"yapiya ait bilgiler :"<<endl;
    cout<<nesne1.ad<<" "<<nesne1.yas<<" "<<nesne1.boy<<endl;

    kisi2 nesne2;
    nesne2.ad = "AYSE";
    nesne2.boy = 1.87;
    nesne2.yas = 18;
    

    cout<<"sınıfa ait bilgiler :"<<endl;
    cout<<nesne2.ad<<" "<<nesne2.yas<<" "<<nesne2.boy<<endl;

    return 0;
}