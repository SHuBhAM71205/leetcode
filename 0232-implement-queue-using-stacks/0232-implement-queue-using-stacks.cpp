class MyQueue {
    stack<int> a, b;
public:
    MyQueue() {}

    void push(int x) {
        a.push(x);
    }

    int pop() {
        if (b.empty()) {
            while (!a.empty()) {
                b.push(a.top());
                a.pop();
            }
        }
        int x = b.top();
        b.pop();
        return x;
    }

    int peek() {
        if (b.empty()) {
            while (!a.empty()) {
                b.push(a.top());
                a.pop();
            }
        }
        return b.top();
    }

    bool empty() {
        return a.empty() && b.empty();
    }
};

