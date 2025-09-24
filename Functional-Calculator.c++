#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;
    char again;
    
    cout << "=== SIMPLE CALCULATOR ===" << endl;
    
    do {
        cout << "\nChoose operation:" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Square Root" << endl;
        cout << "Enter choice (1-5): ";
        cin >> choice;
        
        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        } else if (choice == 5) {
            cout << "Enter number: ";
            cin >> num1;
        }
        
        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Cannot divide by zero!" << endl;
                }
                break;
            case 5:
                if (num1 >= 0) {
                    result = sqrt(num1);
                    cout << "Result: √" << num1 << " = " << result << endl;
                } else {
                    cout << "Error: Cannot find square root of negative number!" << endl;
                }
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
        
        cout << "\nDo another calculation? (y/n): ";
        cin >> again;
        
    } while (again == 'y' || again == 'Y');
    
    cout << "Thanks for using calculator!" << endl;
    return 0;
}
