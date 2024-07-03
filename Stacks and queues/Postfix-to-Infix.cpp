#include <bits/stdc++.h>
using namespace std;

// Function to check if a character is an operand (letter or digit)
bool isOperand(char c) {
    return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
}

// Function to convert postfix expression to infix expression
string postfixToInfix(string postfix) {
    stack<string> s;

    int length = postfix.length();

    // Traverse the postfix expression from left to right
    for (int i = 0; i < length; i++) {
        if (isOperand(postfix[i])) {
            // Push operand to stack
            s.push(string(1, postfix[i]));
        } else { // Operator encountered
            string operand2 = s.top();
            s.pop();
            string operand1 = s.top();
            s.pop();

            // Construct the infix expression
            string temp = "(" + operand1 + postfix[i] + operand2 + ")";
            
            // Push the resulting infix expression back to the stack
            s.push(temp);
        }
    }

    // The top of 's' contains the infix expression
    return s.top();
}

int main() {
    string postfix_expression;
    cout << "Enter postfix expression: ";
    getline(cin, postfix_expression);

    string infix_expression = postfixToInfix(postfix_expression);
    cout << "Infix expression: " << infix_expression << endl;

    return 0;
}