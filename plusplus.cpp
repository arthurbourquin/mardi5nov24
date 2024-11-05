#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer (1-26): ";
    cin >> num;

    if (num < 1 || num > 26) {
        cout << "Please enter a number between 1 and 26." << endl;
        return 1;
    }

    for (char letter = 'A'; letter < 'A' + num; ++letter) {
        cout << letter << " ";
    }
    cout << endl;

    return 0;
}