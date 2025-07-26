#include <iostream>
#include <cmath> // for round()
using namespace std;

int main()
{
  double meal_cost;
  int tip_percent, tax_percent;

  // Input
  cin >> meal_cost >> tip_percent >> tax_percent;

  // Calculate tip and tax
  double tip = meal_cost * tip_percent / 100.0;
  double tax = meal_cost * tax_percent / 100.0;

  // Total cost
  double total = meal_cost + tip + tax;

  // Round to nearest integer and print
  cout << round(total) << endl;

  return 0;
}
