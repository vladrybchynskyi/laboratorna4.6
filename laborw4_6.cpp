# include <iostream>
# include <cmath>
using namespace std;

int main() {
  double P, S;
  int n, k;
  P = 1;
  n = 1;
  while (n <= 20) {
    k = n;
    S = 0;
    while (k <= 20) {
      S += k;
      k++;
    }
    P *= (pow(n, 2) + pow(S, 2) / (n + 1));
    n++;
  }
  cout << P << endl;
  P = 1;
  n = 1;
  do {
    k = n;
    S = 0;
    do {
      S += k;
      k++;
    } while (k <= 20);
    P *= (pow(n, 2) + pow(S, 2) / (n + 1));
    n++;
  } while (n <= 20);
  cout << P << endl;
  P = 1;


  for (n =1; n<= 20; n ++)
  {
    
    S = 0;
    for (k = n; k <= 20; k++){
      S += k;
    }

    P *= (pow(n, 2) + pow(S, 2) / (n + 1));
  }
  cout << endl;
  cout << P << endl;
  P = 1;

  for (n = 20; n >= 1; n--) {

    S = 0;
    for (k=20;  k >= n; k--) {
      S += k;

    }

    P *= (pow(n, 2) + pow(S, 2) / (n + 1));
  }
  cout << endl;
  cout << P << endl;

  return 0;
}