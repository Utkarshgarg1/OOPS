#include<iostream>
using namespace std;
class sphere
{
private:
    int a;
    float v;

public:
    void setdata(int x)
    {
       a =x;

    }
    float getvolume()
    {
        v=1.33*3.14*a*a*a;
        return v;
    }
   
};
int main()
{
     int r;
     float volume;
    cout<<"enter your radius";
    cin>>r;
    sphere s1;
    s1.setdata(r);
    volume=s1.getvolume();
    cout<<volume;
}
