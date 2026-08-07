/*
 * Problem : Min Stack
 * Platform : LeetCode #155
 * Difficulty : Medium
 * Topic : Stack, Design
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(n)
 * Submitted on : 12/06/2026
 * Submitted by : Yathartha Rastogi
 */

class MinStack {
public:
    // Stack stores pairs: {element_value, current_minimum}
    stack<pair<int, int>> s;

    MinStack() {
        
    }
    
    // Push element onto stack and record updated minimum
    void push(int value) {
        if (s.empty()) {
            s.push({value, value});
        } else {
            int minVal = min(value, s.top().second);
            s.push({value, minVal});
        }
    }
    
    // Remove top element from stack
    void pop() {
        s.pop();
    }
    
    // Retrieve top element value
    int top() {
        return s.top().first;        
    }
    
    // Retrieve minimum element in stack in O(1)
    int getMin() {
        return s.top().second;
    }
};
