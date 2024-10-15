#include <iostream>
using namespace std;

struct kisi
{
    string ad;
    int yas;
};

int main()
{  

int sayi = 10;   
int  *ptr = &sayi; 

cout<<sayi<<endl;
cout<<*ptr<<endl;

*ptr =  20;
cout<<sayi<<endl;


int dizi[3] = {10,20,30};
int *ptr2 = dizi;

ptr2[2] = 40;

cout<<dizi[2]<<endl;

cout<<ptr2[2]<<endl;

kisi nes1;
kisi *ptr3 = &nes1; 

ptr3 -> ad = "ahmet";
ptr3 -> yas = 30;

nes1.ad = "enes";

cout<<ptr3->ad<<endl;
cout<<ptr3->yas<<endl;

nes1.ad="mehmet";

cout<<nes1.ad<<endl;

    return 0;

}

