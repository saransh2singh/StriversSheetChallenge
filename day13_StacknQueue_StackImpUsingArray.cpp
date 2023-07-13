#include <bits/stdc++.h> 
// Stack class.
class Stack {
    
public:
    int *arr,topp,cap;
    Stack(int capacity) {
        // Write your code here.
        arr = new int [capacity];
        topp = -1;
        cap = capacity;
    }

    void push(int num) {
        // Write your code here.
        if(isFull()){
            return;
        }
        topp++;
        arr[topp] = num;
    }

    int pop() {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        int res = arr[topp];
        topp--;
        return res;
    }
    
    int top() {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        return arr[topp];
    }
    
    int isEmpty() {
        // Write your code here.
        if(topp == -1){
            return 1;
        }
        return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(topp == cap-1){
            return 1;
        }
        return 0;
    }
    
};
