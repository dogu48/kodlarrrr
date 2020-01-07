#include <iostream>

using namespace std;

void CalculateFact(int n);

int main() {

    // Write a function return factorial of a number
    int n{};
    cin >> n;
    CalculateFact(n);

    return 0;
}

void CalculateFact(int n) {
    int result{1};
    while (n > 1) {
        result *= n;
        --n;
    }
    cout << result;
};