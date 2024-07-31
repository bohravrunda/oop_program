#include<iostream>
#include<fstream>
using namespace std;
class employee
{ char name[20];
  int ID;
  double salary;
  public:
    void accept()
    {cin>>name;
     cin>>ID;
      cin>>salary;
      }
    void display()
     {cout<<"name: "<<name;
      cout<<"ID: "<<ID;
       cout<<"salary: "<<salary;
       }         
};
int main()
{employee o[5];
 fstream f;
 int n;
 f.open("he.txt");
 cout<<"\nenter the no. of employee: ";
 cin>>n;
 cout<<"enter details in (NAME/ID/SALARY) format \n ";
 for(int i=0;i<n;i++)
    {cout<<"employee"<<i+1;
     o[i].accept();
     f.write((char*)&o[i],sizeof o[i]);
     }
  f.close();
  cout<<"details of employee: \n";
  for(int i=0;i<n;i++)
    {
     f.write((char*)&o[i],sizeof o[i]);
     
     o[i].display();
     }
  f.close();
  return 0;
  }
