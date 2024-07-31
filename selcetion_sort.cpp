#include<iostream>
using namespace std;
int n;
template< class T>
void sel(T A[20])
{    int i,j,min;
     T temp;
     for(i=0;i<n-1;i++)
      {
         min=i;
         
         for(j=i+1;j<n;j++)
         {
            if(A[j]<A[min])
            {  
               min=j;
               }
         }
       temp=A[i];
       A[i]=A[min];
       A[min]=temp;
       }
        cout<<"array sorted";
         for(i=0;i<n;i++)
              cout<<A[i]<<" ";
 
 }
 int main()
 { 
    int A[20];
    float B[20];
    int ch,i;
    do
    {cout<<"\n1:sort int \n2:sort float \nexit";
      cout<<"enter choice";
      cin>>ch;
      switch(ch)
      {   case 1:
              cout<<"total no. of int elements";
              cin>>n;
              for(i=0;i<n;i++)
                 { 
                    cin>>A[i];
                    }
                    
                    sel(A);
                    break;
           case 2: 
                 cout<<"total no. of int elements";
              cin>>n;
              for(i=0;i<n;i++)
                 { 
                    cin>>B[i];
                    }
                    
                    sel(B);
                    break;
           case 3:
                  exit(0);
        }
     }while(ch!=3);
     return 0;
   }
