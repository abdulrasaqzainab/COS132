#include <iostream>
#include <string>
#include<iomanip>

using namespace std;

int
main ()
{
  const float plain_pizza = 40;
  const float additional_olives = 15.50;
  const float additional_onions = 11;
  const float additional_cheese = 12.30;
  const float additional_salami = 22;
  const float additional_shrimps = 25.40;
  float budget = 100;
  float invoice = 0;



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
    "|base pizza=R40                                                                   |"
    << endl;
  cout <<
    "|additional olives=R15.50                                                         |"
    << endl;
  cout <<
    "|additional onions=R11                                                            |"
    << endl;
  cout <<
    "|additional cheese=R12.30                                                         |"
    << endl;
  cout <<
    "|additional salami=R22                                                            |"
    << endl;
  cout <<
    "|additional shrimps=R25.40                                                        |"
    << endl;
  cout <<
    "|                                                                                 |"
    << endl;
  cout <<
    "|Promo:Spend R99 or more and get a free cooldrink                                 |"
    << endl;
  cout <<
    "-----------------------------------------------------------------------------------"
    << endl;



  cout << "Welcome to Antonio's Pizzeria Italiana.\n";
  invoice += plain_pizza;
  budget -= plain_pizza;
  cout << "Let's start you off with a base pizza that'll be: ";
  cout << "R" << plain_pizza << endl;
  cout << "Any olives?\n";
  string a;
  cin >> a;
  if ((a == "yes" || a == "Yes" || a == "YES") && budget > additional_olives)
    {
      invoice += additional_olives;
      budget -= additional_olives;
    }
  else
    {
      cout << "Not ebough budget!" << endl;
    }
  cout << "Any onions?\n";
  string e;
  cin >> e;
  if ((e == "yes" || e == "Yes" || e == "YES") && budget > additional_onions)
    {
      invoice += additional_onions;
      budget -= additional_onions;
    }
  else
    {
      cout << "Not ebough budget!" << endl;
    }
  cout << "Any cheese?\n";
  string b;
  cin >> b;
  if ((b == "yes" || b == "Yes" || b == "YES") && budget > additional_cheese)
    {
      invoice += additional_cheese;
      budget -= additional_cheese;
    }
  else
    {
      cout << "Not ebough budget!" << endl;
    }
  cout << "Any salami?\n";
  string c;
  cin >> c;
  if ((c == "yes" || c == "Yes" || c == "YES") && budget > additional_salami)
    {
      invoice += additional_salami;
      budget -= additional_salami;
    }
  else
    {
      cout << "Not ebough budget!" << endl;
    }

  cout << "Any shrimps?\n";
  string d;
  cin >> d;
  if ((d == "yes" || d == "Yes" || d == "YES") && budget > additional_shrimps)
    {
      invoice += additional_shrimps;
      budget -= additional_shrimps;
    }
  else
    {
      cout << "Not ebough budget!" << endl;
    }
  cout << "Altogether that will be:";
  cout << "R" << invoice << endl;

  if (invoice >= 99)
    {
      cout << "Here is also a free cooldrink\n";
    }
  else
    {
      cout << "Enjoy your pizza!\n";
    }


  cout << "Here is your change money:";
  cout << "R" << budget << endl;

  return 0;
}

