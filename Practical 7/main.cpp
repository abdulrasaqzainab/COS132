#include <iostream>

using namespace std;

void arr0(char &opp,int &argg,int &i)
{
    int a0,a1,a2;
 
    
    if (!(i<3))
    {return ;}
    

    if(opp=='+')
     {
         switch(i)
         {
             case 0:
             a0= i+argg;
             break;
             
             case 1:
             a1=i+argg;
             break;
             
             case 2:
             a2=i+argg;
             break;
             
             default:{;}
         }
     }
     else
     {
     if (opp=='*') 
        switch(i)
         {
             case 0:
             a0= i*argg;
             break;
             
             case 1:
             a1= i*argg;
             break;
             
             case 2:
             a2= i*argg;
             break;
             
             default:{;}
         }
     }
     
 
  switch(i)
     {
         case 0:
        cout<< a0;
         break;
         
         case 1:
        cout<< a1;
         break;
         
         case 2:
        cout<< a2;
         break;
         
         default:{;}
     }
    cout << "|" ;
  


 
 if(i<2)
 {
    
    
     i++;
     arr0(opp,argg,i);
 }
 
}


int main()
{
 char op ;
 int arg ;
int i;

cout<<"enter op/char"<<endl;
 cin >> op ;
 cout<<"enter arg/int"<<endl;
 cin >> arg;

 arr0(op,arg,i);
 
return 0;
}


