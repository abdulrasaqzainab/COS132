#include<iostream>
using namespace std;


//this checks for the free array fields
void print_free_fields(char**pointer)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(pointer[i][j] == ' ')
            {
                if(i == 0 && j == 0)
                    cout << " 1 ";

                if(i == 0 && j == 1)
                    cout << " 2 ";

                if(i == 0 && j == 2)
                    cout << " 3 ";

                if(i == 1 && j == 0)
                    cout << " 4 ";

                if(i == 1 && j == 1)
                    cout << " 5 ";

                if(i == 1 && j == 2)
                    cout << " 6 ";

                if(i == 2 && j == 0)
                    cout << " 7 ";

                if(i == 2 && j == 1)
                    cout << " 8 ";

                if(i == 2 && j == 2)
                    cout << " 9 ";


            }
        }
    }

}


//this changes the number the user enters to a character variable
void changer(char** arr, int num, char player)
{
    
    if(num == 1)
    {
        arr[0][0] = player;
    }

    if(num == 2)
    {
        arr[0][1] = player;
    }

    if(num == 3)
    {
        arr[0][2] = player;
    }

    if(num == 4)
    {
        arr[1][0] = player;
    }

    if(num == 5)
    {
        arr[1][1] = player;
    }

    if(num == 6)
    {
        arr[1][2] = player;
    }

    if(num == 7)
    {
        arr[2][0] = player;
    }

    if(num == 8)
    {
        arr[2][1] = player;
    }

    if(num == 9)
    {
        arr[2][2] = player;
    }
    
}

//third function-checks for winner
void winner(char** arr, char player, int &check)
{
    
    //horizontal check
    if (arr[0][0] == player && arr[0][1] == player && arr[0][2] == player)
    {
        check = 1;
    }
    if (arr[1][0] == player && arr[1][1] == player && arr[1][2] == player)
    {
        check = 1;
    }
    if (arr[2][0] == player && arr[2][1] == player && arr[2][2] == player)
    {
        check = 1;
    }
    
    
    //vertical check
    if (arr[0][0] == player && arr[1][0] == player && arr[2][0] == player)
    {
       check = 1;
    }
    if (arr[0][1] == player && arr[1][1] == player && arr[2][1] == player)
    {
       check = 1;
    }
    if (arr[0][2] == player && arr[1][2] == player && arr[2][2] == player)
    {
        check = 1;
    }


    //diagonal check
    if (arr[0][0] == player && arr[1][1] == player && arr[2][2] == player)
    {
        check = 1;
    }
    if (arr[0][2] == player && arr[1][1] == player && arr[2][0] == player)
    {
       check = 1;
    }
   
}


int main()
{

    char arr[3][3];

    char **ptr = new char*[3];

    for(int s = 0; s < 3 ; s++)
    { *(ptr+s)= new char[3];
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            ptr[i][j] = ' ';
        }
    }

    int number;

    int counter = 1;
    bool ongoing = true;

    char black='b';
    char white='w';
    
    int control=2;

    while ( counter < 10 && ongoing == true )
    {
        cout<<"The fields with the following field ID numbers are still free :";
        print_free_fields(ptr);
        cout<<"\n";

       if ( counter % 2 == 0)
        {

            cout<<"Black choose empty field!"<<endl;
            cin>>number;

        while(number<1 || number>9)
        {
            cout<<"Invalid input,enter a number between 1 and 9"<<endl;
            cout<<"Black choose empty field!"<<endl;
            cin>>number;
        }
        
            changer(ptr,number,black);
            winner(ptr,black,control);
            if(control==1)
            {
                ongoing=false;
                
                cout<<"Victory for Black!"<<endl;
            }
            
        }
        else if ( counter %2 != 0)
       {
            cout<<"White choose empty field!"<<endl;
            cin>>number;
            
            while(number<1 || number>9)
        {
           
            cout<<"Invalid input,enter a number between 1 and 9"<<endl; 
            cout<<"White choose empty field!"<<endl;
            cin>>number;
        }
            
            changer(ptr,number,white);
           winner(ptr,white,control);
           if(control==1)
            {
                ongoing=false;
                
                cout<<"Victory for White!"<<endl;
            }

       }
        counter++;
    }

    cout<<"The game has ended"<<endl;
    
    delete[] ptr;
    
    return 0;
}



