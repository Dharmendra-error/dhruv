#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cout<<"Enter a and b: ";
    cin >> a >> b;
    
    string words[] = {"", "one", "two", "three", "four", "five", 
                       "six", "seven", "eight", "nine"};
    
    for (int i = a; i <= b; i++) {
        if (i <= 9) {
            cout << words[i] << "\n";
        } else if (i % 2 == 0) {
            cout << "even" << "\n";
        } else {
            cout << "odd" << "\n";
        }
    }
    
    return 0;
}