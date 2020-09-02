#include<iostream>
using namespace std;
class complex
{
private:
    int a ,b;
public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
       cout<<"the value of multiplication is: "<<a<<" + "<<b<<"i";
    }
    complex operator *(complex c)
    {
        complex temp;
        temp.a= a * c.a-b*c.b;
        temp.b= a * c.b+c.a*b;
        return temp;
        
    }
    
};
int main()
{
    int x1,y1,x2,y2;
   complex c1,c2,c3;
   cout<<"enter your 1 number";
   cin>>x1>>y1;
   c1.setdata(x1,y1);
   cout<<"enter your 2 number";
   cin>>x2>>y2;
   c2.setdata(x2,y2);
   c3=c1*c2;
   c3.showdata();


}

