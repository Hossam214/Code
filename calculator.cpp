#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1;
    int num2;
    char op;
    int x;
    cout << "Enter the first number\n";
    cin >> num1;
    cout << "Enter the second number\n";
    cin >> num2;
    cout << "Enter + for addition, - for subtraction, * for multiplication, / for division, ^ for exponentiation\n";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << num1 << op << num2 << '=' << num1 + num2 << "\n";
        cout << "Have you read it now ";
        cin >> x;
        break;
    
    case '-':
        cout << num1 << op << num2 << '=' << num1 - num2 << "\n";
        cout << "Have you read it now ";
        cin >> x;
        break;
    
    case '*':
        cout << num1 << op << num2 << '=' << num1 * num2 << "\n";
        cout << "Have you read it now ";
        cin >> x;
        break;
    
    case '/':
        cout << num1 << op << num2 << '=' << num1 / num2 << "\n";
        cout << "Have you read it now ";
        cin >> x;
        break;
    
    case '^':
        cout << num1 << op << num2 << '=' << pow(num1, num2) << "\n";
        cout << "Have you read it now ";
        cin >> x;
        break;
    
    
    default:
        cout << "Why are you always a wrecker?? Next time enter a valid operation";
        cout << "Have you read it now";
        cin >> x;
        break;
    }
    return 0;
    
}

