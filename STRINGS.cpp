#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello, World! 2026 #";

    int letters = 0;
    int digits = 0;
    int others = 0;

    for (int i = 0; i < s1.length(); i++) {
        if (isalpha(s1[i])) {
            letters++;
        }
        else if (isdigit(s1[i])) {
            digits++;
        }
        else {
            others++;
        }
    }

    cout << "Завдання 1" << endl;
    cout << "Завдання 1" << endl;
    cout << "Рядок: " << s1 << endl;
    cout << "Литер: " << letters << endl;
    cout << "Цифр: " << digits << endl;
    cout << "Инших символив: " << others << endl << endl;


    string s2 = "abba";
    bool isPalindrome = true;
    int n = s2.length();

    for (int i = 0; i < n / 2; i++) {
        if (s2[i] != s2[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    cout << "Завдання 2" << endl;
    cout << "Рядок: " << s2 << endl;
    if (isPalindrome) {
        cout << "це палиндром" << endl;
    }
    else {
        cout << "це не палиндром" << endl;
    }

    return 0;
}