#include <iostream>
#include <cmath>

using namespace std;

int main(){
  const double e = 1.602177E-19;
  const double e0 = 8.854187E-12;
  const double aB = 5.291772E-11;
  const double PI = 3.141593;
  const double k = pow(e, 2) / (4 * PI * e0);
  double E[50];

  for (int n = 0; n < 50; n++) {
    E[n] = -k / (2 * aB) / pow(n + 1/2, 2);
    cout << "Energy for " << n + 1 << "th state: " << E[n] << endl;
  }

  return 0;
}