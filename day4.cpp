#include <iostream>
using namespace std;

class Person
{
public:
  int age;

  // Constructor
  Person(int initialAge)
  {
    if (initialAge < 0)
    {
      cout << "Age is not valid, setting age to 0." << endl;
      age = 0;
    }
    else
    {
      age = initialAge;
    }
  }

  // Method to check age category
  void amIOld()
  {
    if (age < 13)
      cout << "You are young." << endl;
    else if (age >= 13 && age < 18)
      cout << "You are a teenager." << endl;
    else
      cout << "You are old." << endl;
  }

  // Method to increase age
  void yearPasses()
  {
    age++;
  }
};

int main()
{
  int t; // number of test cases
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    int age;
    cin >> age;

    Person p(age); // create object
    p.amIOld();    // print current status

    // Age person by 3 years
    for (int j = 0; j < 3; j++)
    {
      p.yearPasses();
    }

    p.amIOld(); // print status after 3 years
    cout << endl;
  }

  return 0;
}
