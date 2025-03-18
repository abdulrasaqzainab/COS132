#include <iostream>
using namespace std;

const int S=9;     //tutor input 
int globalArray[S]={3,7,8,5,2,1,9,5,4};    //tutor input


void my_own_Quicksort_Version(char direction, int lo, int hi) {

    if (direction == '<')
    {
        
        if (lo >= hi || lo < 0)
            return;
            
        int pivot = globalArray[hi];
        int i = lo - 1;
        
        for (int j = lo; j <= hi - 1; j++) {
              if (globalArray[j] <= pivot) {
                
                i = i + 1;
                
                int temp = globalArray[i];
                globalArray[i] = globalArray[j];
                globalArray[j] = temp;
            }
        }
        i = i + 1;
        int temp = globalArray[i];
        globalArray[i] = globalArray[hi];
        globalArray[hi] = temp;
        int p = i;
        my_own_Quicksort_Version(direction, lo, p - 1);
        my_own_Quicksort_Version(direction, p + 1, hi); 
    }
    else
    if (direction == '>')
    {

        
        if (lo >= hi || lo < 0)
            return;


        int pivot = globalArray[hi];


        int i = lo - 1;

        for (int j = lo; j <= hi - 1; j++) {
            if (globalArray[j] >= pivot) {
                
                i = i + 1;
               

                int temp = globalArray[i];
                globalArray[i] = globalArray[j];
                globalArray[j] = temp;
            }
        }

        i = i + 1;
        int temp = globalArray[i];
        globalArray[i] = globalArray[hi];
        globalArray[hi] = temp;
        int p = i;


        my_own_Quicksort_Version(direction, lo, p - 1);
        my_own_Quicksort_Version(direction, p + 1, hi); 

    }
    else cout << " error ";
}



int main(){

    int l=0;   //tutor input
    int h=S-1;  //tutor input
    char d='>';  //tutor input
    
   
    my_own_Quicksort_Version(d, l, h);

   
    int c = 0;
    while(c<S) { cout << globalArray[c]<<" ";
                        c++ ; }
    return 0;
}


