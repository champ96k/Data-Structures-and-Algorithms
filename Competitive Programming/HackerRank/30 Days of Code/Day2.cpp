#include <bits/stdc++.h>
using namespace std;

int solve(double mealCost,double tipPercent,double taxPercent) {
  int tip,tax,totalCost;
  tip = round(mealCost * (tipPercent/100) );
  tax = round(mealCost * (taxPercent/100));

  return (mealCost+tip+tax);
}

int main()
{
  double mealCost;
  int tipPercent,taxPercent;
  
  cin>>mealCost>>tipPercent>>taxPercent;   
  cout<<solve(mealCost,tipPercent,taxPercent);
    return 0;
}

