#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int arr[20];
    int front=-1,rear=-1;
    int capacity=19;

    public:
    void enqueue(int val){
        rear++;
        arr[rear]=val;
        
    }
    int dequeue(){
        front++;
        return arr[front];
    }
    bool isEmpty(){
        if(rear==front==-1)
            return true;
        else
            return false;    
    }
    bool isFull(){
        if(rear==capacity)
            return true;
        else
            return false;
    }

    int first(){
        front++;
        return arr[front];
    }
    int last(){
        
        return arr[rear];
    }
};


int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
 
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.first()<<endl;
    cout<<q.last()<<endl;
    
}