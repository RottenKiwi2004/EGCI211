#include <iostream>
using namespace std;
#include <iomanip>
#include "Time.h"

int main()
{
  int h1, m1, h2, m2, h3, m3;
  cout << "What time was it?" << endl;
  getTime(h1, m1);
  // I added only single endl, because it was annoying to see 2 lines are not consistent
  cout << "What time is it now?" << endl;
  getTime(h2, m2);

  cout << "Time diff is ";
  h3 = subtract(h1, m1, h2, m2);
  m3 = subtract(m1, m2);
  cout << setfill('0') << setw(2) << h3 << ":";
  cout << setfill('0') << setw(2) << m3 << endl;
}