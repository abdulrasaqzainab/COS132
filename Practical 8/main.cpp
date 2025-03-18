#include<iostream>
#include<string>

using namespace std;



int main()
{
    
    
    
    const int array_size=5;
    float *p=NULL; 
    float price;
    float midWeekFactor;
    float loyaltyFactor;
    
    string item[array_size]={"base","olives","onions","salami","shrimps"};
    
    float normalDay[array_size];
  
    float midWeek[array_size];
  
    float loyaltyCard[array_size];
  

    
    for(int m=0; m<array_size; m++)
    {
        
       
        p=&normalDay[m];
        do{
       
        cout<<"Enter price of "<<item[m]<<"(price>0):"<<endl;
        cout<<"R";
        cin>>price;
        }
        while(price<=0);
       
       *p=price;
       
 /////////////////////////////////////////////////////////////////////////       
        p=&midWeek[m];
       
        
        do
        {
        cout<<"Enter the midweek Factor of "<<item[m]<<"(0 < midWeek Factor < 1):"<<endl;
        cin>>midWeekFactor;
        
        }
        while(0>midWeekFactor || midWeekFactor>1);
        *p=price*midWeekFactor;
        
 /////////////////////////////////////////////////////////////////////////       
        
        p=&loyaltyCard[m];
       do
        {
        cout<<"Enter the loyalty factor of "<<item[m]<<"(0 < loyalty Factor < midWeek Factor):"<<endl;
        cin>>loyaltyFactor;
        
        }
        while(0>loyaltyFactor || loyaltyFactor>midWeekFactor);
        *p=price*loyaltyFactor;
        
        cout<<"______________________________________________________"<<endl;
    }
    
    cout<<"------------------------------------------------------"<<endl;
   /////////////////////////////////////////////////////////
   cout<<"\n"<<"\n";
    cout<<"Here are the updated prices:\a"<<endl;
    
    cout<<"______________________________________________________"<<endl;
    
    //output normal
    for(int h=0;h<array_size;h++)
    {
        cout<<"The normal price for "<<item[h]<<" is ";
        cout<<"R"<<normalDay[h]<<endl;
    }
     cout<<"______________________________________________________"<<endl;
  
    //output loyalty
    for(int j=0;j<array_size;j++)
    {
      cout<<"The price  with the loyalty card for "<<item[j]<<" is ";    
      cout<<"R"<<loyaltyCard[j]<<endl;  
    }
     cout<<"______________________________________________________"<<endl;
    //output midweek
    for(int l=0;l<array_size;l++)
    {
     cout << "The price with the midweek discount for "<<item[l]<<" is ";   
     cout<<"R"<<midWeek[l]<<endl;   
    }
    cout<<"______________________________________________________"<<endl;
  
    
    return 0;
}







