#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to convert prefix expression to postfix expression
string prefixToPostfix(string prefix) {
    stack<string> s;
    int length = prefix.size();

    // Reading prefix expression from right to left
    for (int i = length - 1; i >= 0; i--) {
        char c = prefix[i];

        // If character is operand, push it onto stack
        if (!isOperator(c)) {
            string operand(1, c); // Convert char to string
            s.push(operand);
        } else { // If character is operator
            // Pop two operands from stack
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();

            // Combine operands with operator in postfix order
            string temp = op1 + op2 + c;

            // Push result back onto stack
            s.push(temp);
        }
    }

    // Top of stack contains the postfix expression
    return s.top();
}

int main() {
    string prefix = "*+AB-CD"; // Example prefix expression

    cout << "Prefix expression: " << prefix << endl;
    string postfix = prefixToPostfix(prefix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
