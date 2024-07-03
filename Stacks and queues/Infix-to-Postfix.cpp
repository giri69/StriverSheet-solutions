#include <bits/stdc++.h>
using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to get the precedence of an operator
int precedence(char c) {
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    return 0;
}

// Function to convert infix expression to postfix expression
string infixToPostfix(string infix) {
    stack<char> s;
    string postfix;
    unordered_map<char, int> precedence_map;

    precedence_map['+'] = 1;
    precedence_map['-'] = 1;
    precedence_map['*'] = 2;
    precedence_map['/'] = 2;

    for (char c : infix) {
        if (isalnum(c)) { // If character is an operand (letter or digit), add it to output
            postfix += c;
        } else if (c == '(') { // If character is '(' push it to stack
            s.push(c);
        } else if (c == ')') { // If character is ')', pop and output from the stack until '(' is encountered
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // Pop '(' from the stack (but don't add to output)
        } else { // If an operator is encountered
            while (!s.empty() && precedence_map[s.top()] >= precedence_map[c]) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    // Pop all the operators from the stack
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix_expression;
    cout << "Enter infix expression: ";
    getline(cin, infix_expression);

    string postfix_expression = infixToPostfix(infix_expression);
    cout << "Postfix expression: " << postfix_expression << endl;

    return 0;
}