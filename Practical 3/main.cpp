#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int
main ()
{
    const float large_base_pizza = 60.00;
    const float small_base_pizza = 40.00;
    const float additional_olives = 15.50;
    const float additional_onions = 11.00;
    const float additional_cheese = 12.30;
    const float additional_salami = 22.00;
    const float additional_shrimps = 25.40;
    float invoice = 0;

    float ingredients[7] = { 0, 0, 0, 0, 0, 0, 0 };

    string pizza;
    char i;
    int k;

    cout <<
         "-----------------------------------------------------------------------------------"
         << endl;
    cout <<
         "|                             Menu                                                |"
         << endl;
    cout <<
         "|                                                                                 |"
         << endl;
    cout <<
         "|3-Person Base Pizza=R60.00                                                       |"
         << endl;
    cout <<
         "|1-Person Base Pizza=R40.00                                                       |"
         << endl;
    cout <<
         "|Additional olives=R15.50     (click a)                                           |"
         << endl;
    cout <<
         "|Additional onions=R11.00     (click b)                                           |"
         << endl;
    cout <<
         "|additional cheese=R12.30     (click c)                                           |"
         << endl;
    cout <<
         "|Additional salami=R22.00     (click d)                                           |"
         << endl;
    cout <<
         "|Additional shrimps=R25.40    (click e)                                           |"
         << endl;


    cout <<
         "-----------------------------------------------------------------------------------"
         << endl;
    cout << "Would you like the 3-person pizza?" << endl;
    cout << "(yes/no)" << endl;
    cin >> pizza;
    if (pizza == "yes")
    {
        ingredients[0]++;
    }
    else
    {
        ingredients[1]++;
    }
    cout <<
         "---------------------------------------------------------------------------"
         << endl;


    for (k = 1; k <= 10; k++)
    {
        cout << "Which toppings would you like to add?" << endl;
        i = cin.get ();
        cin >> i;

        switch (i)
        {
            case 'a':
                ingredients[2]++;
                break;

            case 'b':
                ingredients[3]++;
                break;

            case 'c':
                ingredients[4]++;
                break;

            case 'd':
                ingredients[5]++;
                break;

            case 'e':
                ingredients[6]++;
                break;

            default:
                cout << "Invalid choice entered,enter a value between a-e" << endl;
            
        }

    }
    cout <<
         "---------------------------------------------------------------------------"
         << endl;
    cout << "Here is your detailed invoice:" << endl << endl;

    float large_pizza=ingredients[0]*large_base_pizza;
    float small_pizza=ingredients[1]*small_base_pizza;
    float cheese=ingredients[4]*additional_cheese;
    float onions=ingredients[3]*additional_onions;
    float olives=ingredients[2]*additional_olives;
    float salami=ingredients[5]*additional_salami;
    float shrimps=ingredients[6]*additional_shrimps;


    for (int p = 1; p <= 7; p++)
    {
        switch (p)

        {
            case 1:
                if (ingredients[0] > 0)
                {
                    cout << "3-Person Base Pizza:x" << fixed << setprecision (0) <<
                         ingredients[0] << endl;
                    cout << "Your sub-total for the Large Pizza Base:R" << fixed <<
                         setprecision (2) << large_pizza << endl << endl;
                    invoice+=large_pizza;
                }
                break;
            case 2:
                if (ingredients[1] > 0)
                {
                    cout << "1-Person Base Pizza:x" << fixed << setprecision (0) <<
                         ingredients[1] << endl;
                    cout << "Your sub-total for the Small Pizza Base:R" << fixed <<
                         setprecision (2) <<small_pizza << endl << endl;
                    invoice+=small_pizza;
                }
                break;
            case 3:
                if (ingredients[3] > 0)
                {
                    cout << "Onions:x" << fixed << setprecision (0) <<
                         ingredients[3] << endl;
                    cout << "Your sub-total for onions is:R" << fixed <<
                         setprecision (2) <<onions << endl << endl;
                    invoice+=onions;

                }
                break;
            case 4:
                if (ingredients[2] > 0)
                {
                    cout << "Olives:x" << fixed << setprecision (0) <<
                         ingredients[2] << endl;
                    cout << "Your sub-total for olives is:R" << fixed <<
                         setprecision (2) << olives << endl << endl;
                    invoice+=olives;

                }
                break;
            case 5:
                if (ingredients[4] > 0)
                {
                    cout << "Cheese:x" << fixed << setprecision (0) <<
                         ingredients[4] << endl;
                    cout << "Your sub-total for cheese is:R" << fixed <<
                         setprecision (2) << cheese << endl << endl;
                    invoice+=cheese;

                }
                break;
            case 6:
                if (ingredients[6] > 0)
                {
                    cout << "Shrimps:x" << fixed << setprecision (0) <<
                         ingredients[6] << endl;
                    cout << "Your sub-total for shrimps is:R" << fixed <<
                         setprecision (2) <<shrimps << endl << endl;
                    invoice+=shrimps;
                }
                break;
            case 7:
                if (ingredients[5] > 0)
                {
                    cout << "Salami:x" << fixed << setprecision (0) <<
                         ingredients[5] << endl;
                    cout << "Your sub-total for salami is:R" << fixed <<
                         setprecision (2) <<salami << endl;
                    invoice+=salami;

                }
                break;
        }

    }

    cout <<
         "---------------------------------------------------------------------------"
         << endl;
    cout << "Your total invoice is:R" << invoice << endl;
    cout <<
         "---------------------------------------------------------------------------"
         << endl;

    return 0;
}

