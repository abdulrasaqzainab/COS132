#include <iostream>
using namespace std;


bool my_NAND_implementation(bool input1,bool input2)
{
    bool ans;
    if (input1==false){
        if(input2==false)
        {  ans=true; 
            
        }else{
            ans=true;
        }
    }
    
    else  if (input1==true){
        if(input2==false)
        { ans=true; 
            
        }else{ ans=false;}
    }
    
    return ans;
}


bool my_EXOR_implementation(bool input1,bool input2)
{


  bool not_input1=my_NAND_implementation(input1,input1);
  bool not_input2=my_NAND_implementation(input2,input2);
   
   bool not_input1_input2=my_NAND_implementation(not_input1,input2);
   bool input1_not_input2=my_NAND_implementation(input1,not_input2);
   
    bool combo=my_NAND_implementation(not_input1_input2,input1_not_input2);
    
    return combo;
}



int main()
{
    bool b1,b2;
    
    cout<<"Enter first truth value(0/1): \n";
    cin>>b1;
    cout<<"Enter second truth value(0/1): \n";
    cin>>b2;
 

 
   cout<<"EXOR = "<<my_EXOR_implementation(b1,b2)<<endl;
   cout<<"Therefore EXOR is "<<boolalpha<<my_EXOR_implementation(b1,b2)<<endl;
   
   return 0;
}



