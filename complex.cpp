#include<iostream>
using namespace std;
class complex
{    float x,y;
     public:
        complex()
        { x=0;
         y=0;
         }
         complex operator+(complex);
         complex operator*(complex);
         friend istream &operator>>(istream &input,complex &t)
         { 
            cout<<"\nenter real part :";
            cin>>t.x;
            cout<<"\nenter imaginary part :";
            cin>>t.y;
            }
          friend ostream &operator<<(ostream &output,complex &t)
          {output<<t.x<<"+"<<t.y<<"i";
          }
 };
 complex complex::operator+(complex c)
 { 
    complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return(temp);
    }
complex complex::operator*(complex c)
 { 
    complex temp1;
    temp1.x=(x*c.x)-(y*c.y);
    temp1.y=(y*c.x)+(x*c.y);
    return(temp1);
    }
 int main()
 {  complex c1,c2,c3,c4;
    cout<<"\n default value: ";
    cout<<c1;
    cout<<"\n1st value : ";
    cin>>c1;
    cout<<"\n2nd value : ";
    cin>>c2;
    c3=c1+c2;
    c4=c1*c4;
    cout<<"\n1st no.";
    cout<<c1;
    cout<<"\n2nd no.";
    cout<<c2;
    cout<<"\naddition";
    cout<<c3;
    cout<<"multi";
    cout<<c4;
    return 0;
    }
    
