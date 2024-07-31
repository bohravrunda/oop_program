#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
fstream fobj;
fobj.open("example.txt",ios::out);
string name;
int roll;
fobj<<"Student Information ";
cout<<"\nEnter Name : ";
getline(cin,name);
fobj<<"\nName : "<<name;
cout<<"\nEnter Roll No : ";
cin>>roll;
fobj<<"\nRoll No : "<<roll;
fobj.close();
fobj.open("example.txt",ios::in);
cout<<"\nReading the file contents : \n";
string ch;
while(getline(fobj, ch))
{
cout << ch << "\n";
}
fobj.close();
return 0;
}

