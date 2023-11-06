#include <iostream>
using namespace std;

int
main ()
{

  cout << "Enter the first number:" << endl << "Enter the second number:" <<
    endl;
  int num1, num2;
  cin >> num1 >> num2;

  char op;
  cout << "Enter the operation:" << endl;
  cin >> op;

  int result;

  if (op == '+')
    {
      int result = num1 + num2;
      cout << "Result:" << endl << result << endl;
    }

  else if (op == '-')
    {
      int result = num1 - num2;
      cout << "Result:" << endl << result << endl;
    }

  else if (op == ':')
    {
      int result = num1 / num2;
      cout << "Result:" << endl << result << endl;
      if (op == ':')
	{
	  int result = num1 % num2;
	  cout << "Remains:" << result << endl;

	}
    }

  else if (op == '*')
    {
      int result = num1 * num2;
      cout << "Result:" << endl << result << endl;
    }

  else
    {
      cout << "You entered incorrect numbers or operations!" << endl;
    }

  return 0;
}
