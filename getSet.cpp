#include <iostream>
using namespace std;

class kisi
{
    private:
    string ad;
    int yas;
    double boy;

    public:
    void setAd(string ad)
    {
        this->ad = ad;
    }

    void setYas(int yas)
    {
        if (yas>=0 && yas<100)
        {
            this->yas=yas;
        }
        else
        {
            cout<<"yas girisinde hataniz var!"<<endl;
            this->yas = -1;
        }
        
    }

    void setBoy(double boy)
    {
        if (boy>0 && boy<=2.5)      
        {
           this->boy = boy;
        }
        else
        {
            cout<<"boy girisinde hataniz var!"<<endl;
            this->boy= -1;
        }
    }

    string getAd()
    {
        return ad;
    }  

    int getYas()
    {
        return yas;
    }

    double getBoy()
    {
        return boy;
    }


};

int main()
{
    kisi n1;
    n1.setAd("Ahmet");
    n1.setYas(90);
    n1.setBoy(5);


    cout<<"ad : "<<n1.getAd()<<endl;
    cout<<"yas :"<<n1.getYas()<<endl;
    cout<<"boy :"<<n1.getBoy()<<endl;

    return 0;

}