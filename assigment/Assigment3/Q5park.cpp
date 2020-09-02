#include<iostream>
using namespace std;
int i=0;
class park
{
 private:
     float h;
     float charge;
     
 public:
   float setdata(float h)
   {
       park c;
       this->h=h;
     if(h==24)
     {
         charge=10.00;
     } 
     else
     {
     
      if(h>3)
      {
          charge=(((h-3)*0.50))+2.00;
      }
      else
      {
          charge=2.00;
      }
     }
      return charge;
   }
   
      void getdata()
      {
         i++;
          cout<<i<<"\t"<<h<<"\t"<<charge<<endl;

          
      }

   
};
int main()
{
    float h1,h2,h3,charge,a,b,c;
    park c1,c2,c3,c4;
    cout<<"enter no. hours"<<endl;
    cin>>h1;
   a= c1.setdata(h1);
 
     cout<<"enter no. hours"<<endl;
    cin>>h2;
   b= c2.setdata(h2);
 cout<<"enter no. hours"<<endl;
    cin>>h3;  
   c= c3.setdata(h3);
    cout<<"car"<<"\t"<<"Hours"<<"\t"<<"charge"<<endl;
    c1.getdata();
    c2.getdata();
    c3.getdata();
    cout<<"total\t"<<h1+h2+h3<<"\t"<<a+b+c;

}