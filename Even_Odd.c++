#include <iostream>
using namespace std;

int main() {
  int myNum ;
  cout << "Enter your Number: ";
  cin >> myNum;

  if (myNum % 2 == 0) {
    cout << myNum << " is even.\n";
  } else {
    cout << myNum << " is odd.\n";
  }

  return 0;
}
