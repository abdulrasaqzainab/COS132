
#include <iostream>

using namespace std;

int
main ()
{
  int x;

  int y;

  bool endit = true;

  cin >> x;

  while (x >= 0)

    {
      if (endit)
	{
	  cout << " Blue| ";

	  if ((x % 2) == 0)
	    {
	      y = x / 2;
	    }
	  else
	    {
	      y = (3 * x) + 1;
	    }
	}



      if (y > x)

	{
	  endit = false;

	  cout << " Yellow| ";

	  y = y - 1;

	}

      else
	{
	  endit = true;
	}
      

     
    
     
      if (endit)
	{cout << " Green| ";
	  if ((x % 2) == 0)
	    {
	      x = x - 1;
	    }
	  else
	    {
	      x = x - 3;
	    }
	}

    }

  cout << " Red| ";

  return 0;

}



