#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class item
{  
    public:
       char name[10];
       int quantity;
       int code;
       int cost;
       bool operator==(const item& i1)
       {   
           if(code==i1.code)
            {  
               return 1;
               }
           else 
           {   
               return 0;
            }
        }
        bool operator<(const item& i1)
        {
           if(code<i1.code)
                return(1);
           return(0);
                
        }
};
vector<item> o1;
void print(item &i1);
void display();
void insert();
void search();
void dlt();
bool compare(const item& i1,const item& i2)
{    
    return i1.cost < i2.cost;
   }
void insert()
{    
    item i1;
    cout<<"\nname";
    cin>>i1.name;
    cout<<"\ncost";
    cin>>i1.cost;
    cout<<"\nquantity";
    cin>>i1.quantity;
    cout<<"\ncode";
    cin>>i1.code;
    o1.push_back(i1);
    
}
void display()
{  
   for_each(o1.begin(),o1.end(),print);
}
void print(item& i1)
{   
   cout<<"\nitem name"<<i1.name;
   cout<<"\nitem cost"<<i1.cost;
   cout<<"\nitem quantity"<<i1.quantity;
   cout<<"\nitem code"<<i1.code;
}
void search()
{   
   vector<item>::iterator p;
   item i1;
   cout<<"code want to seach";
   cin>>i1.code;
   p=find(o1.begin(),o1.end(),i1);
   if(p==o1.end())
   {cout<<"key not found";
   }
   else
   {cout<<"\nitem name"<<p->name;
   cout<<"\nitem cost"<<p->cost;
   cout<<"\nitem quantity"<<p->quantity;
   cout<<"\nitem code"<<p->code;
   }
}
void dlt()
{   
   vector<item>::iterator p;
   item i1;
   cout<<"code want delete";
   cin>>i1.code;
   p=find(o1.begin(),o1.end(),i1);
   if(p==o1.end())
   {cout<<"key not found";
   }
   else
   {o1.erase(p);
   cout<<"code is deleted";
   
   }
}
int main()
{ 
   int ch;
   do
   {
     cout<<"\nMENU \n1:insert \n2:display \n3:search \n4:sort \n5:delete \n6:exit";
     cout<<"enter choice";
     cin>>ch;
     switch(ch)
     {
       case 1:
          insert();
          break;
       case 2:
           display();
           break;
       case 3:
            search();
            break;
       case 4:
           sort(o1.begin(),o1.end(),compare);
           cout<<"sorted";
           display();
           break;
       case 5:
           dlt();
           break;
      case 6:
           exit(0);
       }
       }while(ch!=7);
       return 0;
   }
   
