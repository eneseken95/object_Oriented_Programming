#include <iostream>
using namespace std;

class kisi
{
    public: 
    string ad = "mustafa";
    int yas = 21;
    
    private: 
    double boy = 1.99;

    public:
    void yazdir()
    {
        cout<<ad<<" "<<yas<<" "<<boy;
    }
};

int main()
{
    kisi nesne1;
    nesne1.yazdir();


    return 0;
}