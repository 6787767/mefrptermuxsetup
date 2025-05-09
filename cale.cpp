#include <iostream>#include <limits>

using namespace std;

int main() {
    double num1, num2;
    char op;
    char choice;    cout << "=== Simple Calculator ===" << endl;    do {
        cout << "\nEnter expression (format: number operator number): ";
        cin >> num1 >> op >> num2;        if(cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please try again" << endl;
            continue;
        }        switch(op) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if(num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            default:
                cout << "Invalid operator! Supported operators: + - * /" << endl;
                break;
        }        cin.ignore(numeric_limits<streamsize>::max(), '\n');        cout << "\nContinue? (y/n): ";
        cin >> choice;    } while(choice == 'y' || choice == 'Y');    cout << "Calculator exited" << endl;
    return 0;
}
