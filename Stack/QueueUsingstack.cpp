#include<iostream>
#include<stack>
using namespace std;

class Queue{
    stack<int> s1, s2;

    public:
        void enQueue(int x){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            s1.push(x);
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        int deQueue(){
            if(s1.empty()) return -1;

            int x = s1.top();
            s1.pop();
            return x;
        }
};

int main(){
    Queue q;
    q.enQueue(12);
    q.enQueue(17);
    q.enQueue(45);
    q.enQueue(23);

    q.deQueue();
    return 0;
}