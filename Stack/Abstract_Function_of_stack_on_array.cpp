#include <iostream>
#include <stack>
using namespace std;

void push(stack<int>& st, int x) {
    st.push(x);
}

void pop(stack<int>& st) {
    if (st.empty()) {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Popped: " << st.top() << endl;
    st.pop();
}

bool Isempty(stack<int>& st) {
    return st.empty();
}

int main() {
    stack<int> st;

    push(st, 10);
    push(st, 20);
    push(st, 30);

    pop(st);

    if (Isempty(st))
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    return 0;
}
