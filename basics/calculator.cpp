#include <iostream>

using namespace std;

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
void menu();

int main() {
    do {
        menu();
        cout << "Do you want to continue? (y/n): ";
        char choice;
        cin >> choice;
        if (choice == 'n') {
            break;
        }
    } while (true);

    return 0;
}

void menu() { 
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int operation;
    cout << "Choose an operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin >> operation;
    
    float res;

    switch (operation) {
        case 1:
            res = add(a, b);
            break;
        case 2:
            res = subtract(a, b);
            break;
        case 3:
            res = multiply(a, b);
            break;
        case 4:
            if (b == 0) {
                cout << "Division by zero is not allowed\n";
                return;
            } else {
                res = divide(a, b);
            }
            break;
        default:
            cout << "Invalid operation\n";
            return;
    }

    cout << "Result: " << res << endl;
}


float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
