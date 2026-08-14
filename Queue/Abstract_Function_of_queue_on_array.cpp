#include <iostream>
#include <queue>
using namespace std;

void push(queue<int>& q, int x) {
    q.push(x);
}

void pop(queue<int>& q) {
    if (q.empty()) {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Removed: " << q.front() << endl;
    q.pop();
}

bool Isempty(queue<int>& q) {
    return q.empty();
}

int main() {
    queue<int> q;

    push(q, 10);
    push(q, 20);
    push(q, 30);

    pop(q);

    if (Isempty(q))
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    return 0;
}
