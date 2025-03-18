#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int
main ()
{
  const float large_base_pizza = 60.00;
  const float additional_olives = 15.50;
  const float additional_onions = 11.00;
  const float additional_cheese = 12.30;
  const float additional_salami = 22.00;
  const float additional_shrimps = 25.40;
  float budget = 300.00;
  float invoice = 0.00;

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
    "|Large plain pizza=R60                                                            |"
    << endl;
  cout <<
    "|Additional olives=R15.50     (click a)                                           |"
    << endl;
  cout <<
    "|Additional onions=R11        (click b)                                           |"
    << endl;
  cout <<
    "|additional cheese=R12.30     (click c)                                           |"
    << endl;
  cout <<
    "|Additional salami=R22        (click d)                                           |"
    << endl;
  cout <<
    "|Additional shrimps=R25.40    (click e)                                           |"
    << endl;
  cout <<
    "|          (click n if you do not wish to add any more toppings)                  |"
    << endl;
  cout <<
    "|                                                                                 |"
    << endl;
  cout <<
    "|Promo:Spend R298 or more and get free coffee                                     |"
    << endl;
  cout <<
    "-----------------------------------------------------------------------------------"
    << endl;


  cout << "Welcome to Antonio's Pizzaria Italiana" << endl;
  invoice += large_base_pizza;
  budget -= large_base_pizza;

  char i;
  bool stop;

  do
    {
      if (budget > 0)
	{
	  cout << "Any more toppings for you?" << endl;
	}

      cin >> i;


      switch (i)
	{
	case 'a':
	  i = cin.get ();
	  if (budget > additional_olives)
	    {
	      invoice += additional_olives;
	      budget -= additional_olives;
	    }
	  else
	    {
	      cout << "We can't afford that anymore!" << endl;
	    }

	  break;
	case 'b':
	  i = cin.get ();

	  if (budget > additional_onions)
	    {
	      invoice += additional_onions;
	      budget -= additional_onions;
	    }
	  else
	    {
	      cout << "We can't afford that anymore!" << endl;
	    }
	  break;
	case 'c':
	  i = cin.get ();
	  if (budget > additional_cheese)
	    {
	      invoice += additional_cheese;
	      budget -= additional_cheese;
	    }
	  else
	    {
	      cout << "We can't afford that anymore!" << endl;
	    }
	  break;
	case 'd':
	  i = cin.get ();
	  if (budget > additional_salami)
	    {
	      invoice += additional_salami;
	      budget -= additional_salami;
	    }
	  else
	    {
	      cout << "We can't afford that anymore!" << endl;
	    }
	  break;
	case 'e':
	  i = cin.get ();
	  if (budget > additional_salami)
	    {
	      invoice += additional_shrimps;
	      budget -= additional_shrimps;
	    }
	  else
	    {
	      cout << "We can't afford that anymore!" << endl;
	    }
	  break;

	case 'n':
	  i = cin.get ();

	  stop = true;

	  break;
	default:
	  cout << "Option not available" << endl;
	}

    }
  while ((budget > additional_onions) && (stop == false));

  cout << "Altogether that will be R" << fixed << setprecision (2) << invoice
    << endl;

  if (invoice > 298)
    {
      cout << "Girls,also fetch yourself a free coffee at our Espresso bar!"
	<< endl;
    }
  else
    {
      cout << "Enjoy your pizza!" << endl;
    }
  cout << "Here is your change money R" << fixed << setprecision (2) <<
    budget;
  return 0;
}





