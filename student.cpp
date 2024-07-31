#include<iostream>
#include<string.h>

using namespace std;
class personal_info
{   char address[20],insurence[20],license[20];
    long int contact;
    public:
       personal_info()
           {
             strcpy(address,"XYZ");
             strcpy(insurence,"XY00000000");
             strcpy(license,"XY000000000");
             contact=0000000000;
             }
         ~personal_info()
           {cout<<"i am a destructor";
           }
friend class person;
 };
class person
{  char name[10],dob[10],blood[10];
   float ht,wt;
   static int count;
   personal_info*pai;
   public:
      person()
      {      strcpy(name,"XYZ");
             strcpy(dob,"dd/mm/yy");
             strcpy(blood,"A+");
             ht=0.0;
             wt=0.0;
             pai=new personal_info;
       }
       person(person*p1)
       {     strcpy(name,p1->name);
             strcpy(dob,p1->dob);
             strcpy(blood,p1->blood);
             ht=p1->ht;
             wt=p1->wt;
             pai=new personal_info;
             strcpy(pai->address,p1->pai->address);
             strcpy(pai->insurence,p1->pai->insurence);
             strcpy(pai->license,p1->pai->license); 
             pai->contact=p1->pai->contact;
         }
        
        static void showcount()
         {cout<<"no. of records"<<count;
          }
          ~person()
          {cout<<"i am destructor";
          }
        void get_data(char name[20]);
        inline void display();
 };
void person::get_data(char name[20])
{      
       strcpy(this->name,name);
       cout<<"enter dob";
       cin>>dob;
       cout<<"enter blood";
       cin>>blood;
       cout<<"enter ht";
       cin>>ht;
       cout<<"enter wt";
       cin>>wt;
       cout<<"enter address";
       cin>>pai->address;
       cout<<"enter insurence";
       cin>>pai->insurence;
       cout<<"enter lisence";
       cin>>pai->license;
       cout<<"enter contact";
       cin>>pai->contact;
   }
void person::display()
{     
        cout<<"\t"<<name;
        cout<<"\t"<<dob;
        cout<<"\t"<<blood;
        cout<<"\t"<<ht;
        cout<<"\t"<<wt;
        cout<<"\t"<<pai->address;
        cout<<"\t"<<pai->insurence;
        cout<<"\t"<<pai->license;
        cout<<"\t"<<pai->contact;
        
}
int person::count;
int main()
{    
    person *p1,*p2;
    int ch;
    p1=new person;
    p2=new person(p1);
    cout<<"\tname";
    cout<<"\tdob";
        cout<<"\tblood";
        cout<<"\tht";
        cout<<"\twt";
        cout<<"\taddress";
        cout<<"\tinsurence";
        cout<<"\tlicense";
        cout<<"\tcontact";
       cout<<endl;
    cout<<"default constructor value";
    p1->display();
    cout<<"copy constructor value";
    p2->display();
    int n;
    cout<<"how many records do you want";
    cin>>n;
    person p3[n];
    char name[20];
    int x=0;
    do
    { cout<<"\n1:enter \n2:display \n3:exit";
      cout<<"enter choice";
      cin>>ch;
      switch(ch)
      {  
         case 1:
             cout<<"enter name";
             cin>>name;
             p3[x].get_data(name);
             person::showcount;
             x++;
             break;
          case 2:
              cout<<"\tname";
         cout<<"\tdob";
        cout<<"\tblood";
        cout<<"\tht";
        cout<<"\twt";
        cout<<"\taddress";
        cout<<"\tinsurence";
        cout<<"\tlicense";
        cout<<"\tcontact";
       for(int i=0;i<n;i++)
          {p3[i].display();
          }
          break;
          
          }}while(ch!=3);
          delete p1;
          delete p1;
          return 0;
          }
