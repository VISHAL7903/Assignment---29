#include<iostream>
using namespace std;
class product
{
    private :
    int x;
    int y;
    public :
    void display()
    {
        cout<<"X = "<<x <<"Y = "<<y<<endl;
    }
    product(int a ,int b)
    {
        x = a;
        y = b;
    }
    int getx(){return x;}
    int gety(){return y;}
};
class Item
{
    private :
    int i;
    public :
    void display()
    {
        cout<<"Item i = "<<i<<endl;
    }
    Item()
    {

    }
    Item(product p)
    {i=p.getx()+p.gety();}
};
int main()
{
    product p(3,4);
    Item i;
    i=p;
    p.display();
    i.display();
    return 0;
    
}
