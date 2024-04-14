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
        cout<<"Real "<<real<<"Img "<<img<<endl;
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    operator long()
    {
        return(real + img);
    }
};
int main()
{
    Complex C(3,4);
    cout<<C;
    return 0;
}
