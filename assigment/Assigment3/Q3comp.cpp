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
    int operator ==(complex c)
    {
       if (a==c.a && b==c.b)
       {
           return 1;
       }
       else
       {
           return 0;
       } 
    }
    
};
int main()
{
    int x1,y1,x2,y2,a,b;
   complex c1,c2;
   cout<<"enter your 1 number";
   cin>>x1>>y1;
   c1.setdata(x1,y1);
   cout<<"enter your 2 number";
   cin>>x2>>y2;
   c2.setdata(x2,y2);
   a=c1==c2;
   a?cout<<"yes,both number are same":cout<<"no,both numbers are diferent";
}

