#include<iostream>
#include<string>
using namespace std;
class publication
{   public:
    string title;
    float prize;
    publication()
     {title=" ";
      prize=0.0;
      }
     publication(string t,float p)
     {title=t;
      prize=p;
     }
     void get_data()
     {}
     void show_data()
     {}
};
class book:public publication
{     int pagecount;
      public:
       book()
       {pagecount=0;
       }
       book(string t,float p,int pn):publication(t,p)
       {pagecount=pn;
        }
        void get_datap()
        {cout<<"\ntitle";
        cin>>title;
        cout<<"\nprize";
        cin>>prize;
        cout<<"\npagecount";
        cin>>pagecount;
        }
        void show_datap()
        {try
        {if(pagecount==0 || prize==0)
           {throw pagecount;
           }
          else
           {cout<<"\ntitle="<<title;
            cout<<"\nprize="<<prize;
            cout<<"\npagecount="<<pagecount;
            
           }
           }
           catch(int i)
           {cout<<"\ntitle=0";
            cout<<"\nprize=0";
            cout<<"\npagecount=0";
            }
        }
 
       
};
class tape:public publication
{     float time;
       public:
       tape()
       {time=0.0;
       }
       tape(string t,float p,float ti):publication(t,p)
       {time=ti;
        }
        void get_datat()
        {cout<<"\ntitle";
        cin>>title;
        cout<<"\nprize";
        cin>>prize;
        cout<<"\ntime";
        cin>>time;
        }
        void show_datat()
        {try
        {if(time==0.0 || prize==0)
           {throw time;
           }
          else
           {cout<<"\ntile="<<title;
            cout<<"\nprize="<<prize;
            cout<<"\ntime="<<time;
            
           }
           }
           catch(int i)
           {cout<<"\ntitle=0";
            cout<<"\nprize=0";
            cout<<"\ntime=0";
            }
        }
 
       
};
int main()
{publication p;
 book b;
tape t;
p.get_data();
b.get_datap();
cout<<"\nBOOK DETAILS";
p.show_data();
b.show_datap();
p.get_data();
t.get_datat();
cout<<"\nTAPE DETAILS";
p.show_data();
t.show_datat();
}
