class MyStack {
    queue<int> q1, q2;

public:
    void push(int x) {
        q1.push(x);
    }

    int pop() {
        if (empty()) return -1;

        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topVal = q1.front();
        q1.pop();

        swap(q1, q2);   // ensures q1 is always the main queue
        return topVal;
    }

    int top() {
        if (empty()) return -1;

        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topVal = q1.front();

        q2.push(topVal);
        q1.pop();
        swap(q1, q2);

        return topVal;
    }

    bool empty() {
        return q1.empty();
    }
};


/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */