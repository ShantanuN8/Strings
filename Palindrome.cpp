#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int length = input.length();
    bool isPalindrome = true;

    for (int i = 0; i < length / 2; i++) {
        char a = tolower(input[i]);
        char b = tolower(input[length - i - 1]);

        if (a != b) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }

    return 0;
}

/* OUTPUT
Enter a string: Hello
Hello is not a palindrome.
*/
