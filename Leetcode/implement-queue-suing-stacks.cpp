// https://leetcode.com/problems/implement-queue-using-stacks/submissions/
class MyQueue {
public:
    /** Initialize your data structure here. */
    queue<int>q;
    int number;
    MyQueue() { 
    }

    /** Push element x to the back of queue. */
    void push(int x) {
        q.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        number = q.front();
        q.pop();
        return number; 
    }
    
    /** Get the front element. */
    int peek() {
        return q.front();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return q.empty();
    }
};