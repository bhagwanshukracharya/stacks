#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool valid(string &str) {
    stack<char> s;

    for (char ch : str) {
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            s.push(ch);
        }
        else if (ch == ')') {
            if (s.empty()) return false;

            bool hasOperator = false;

            while (!s.empty() && s.top() != '(') {
                char top = s.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                    hasOperator = true;
                s.pop();
            }

            if (s.empty()) return false; // no '(' found
            s.pop(); // pop '('

            if (!hasOperator) return false; // invalid like "(a)"
        }
    }
    return s.empty();
}

int main() {
    string str = "(a+b)";
    valid(str) ? cout << "valid hai!!" << endl
               : cout << "not valid!!" << endl;
}
