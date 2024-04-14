#include<iostream>
using namespace std;
class Complex
{
    private :
    int real;
    int img;

    public :
    void Display()
    {
        cout<<"Real = "<<real<<" Img = "<<img<<endl;
    }
    Complex(int x)
    {
        real = x;
        img = x;
    }
};
int main()
{
    Complex C = 5;
    C.Display();
    return 0;
}