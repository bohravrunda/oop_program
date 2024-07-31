#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{typedef map<string,int> mapType;
 mapType populationmap;
 populationmap.insert(pair<string,int>("maharastra",8976));
 populationmap.insert(pair<string,int>("goa",976));
 populationmap.insert(pair<string,int>("manipur",5674));
 populationmap.insert(pair<string,int>("meghalaya",7098));
 populationmap.insert(pair<string,int>("gujrat",2376));
 mapType :: iterator iter;
 cout<<"**********polulation of states of india**************";
 cout<<"\nsize of population"<<populationmap.size()<<"\n";
 string state_name;
 cout<<"\nenter state";
 cin>>state_name;
 iter=populationmap.find(state_name);
 if(iter!=populationmap.end())
   {cout<<state_name<<"'s population is "<<iter->second;
    }
 else
    {cout<<"\nkey is not population key";
   }
  return 0;
}
