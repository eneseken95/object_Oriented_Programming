#include <iostream>
using namespace std;  

int main()
{
    int dizi[5] = {10,20,30,40,50};
    int *ptr = new int(5);

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;


    for (int  i = 0; i < 5; i++)
    {
        cout<<ptr[i]<< "   ";
      

    }

    cout<<endl;
    delete ptr;

    for (int i = 0; i < 5; i++)
    {
        cout<<ptr[i]<<"   ";
    }
    
    

    return 0;
}