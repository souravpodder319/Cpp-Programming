#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin >> ws, name);  // 'cin >> ws' skips leading whitespace safely
    cout << "Your name is: " << name << endl;
    return 0;
}
