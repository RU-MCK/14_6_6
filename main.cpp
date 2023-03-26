#include <iostream>
using namespace std;

int main() {
  int digits[5][5]{};
  int number = 0;
  for (int i = 0; (i < 5); i++) {
    int k = 5;
    for (int j = 0; j < 5; j++) {
      k--;
      digits[i][(i % 2 == 0) ? j : k] = number;
      number++;
    }
  }
  for (int i = 0; (i < 5); i++) {
    for (int j = 0; j < 5; j++) {
      cout << digits[i][j] << " ";
    }
    cout << endl;
  }
}

