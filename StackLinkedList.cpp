#include <iostream>
using namespace std;

//Node class representing a single node in the linked list
class Node {
public:
    int data;
    Node* next;

    Node() {
        next = NULL;
    }
};

//stack class
class Stack {
private:
    Node* top;  //pointer to the top node of the stack

public:
    Stack() {
        top = NULL;  //initialize the stack with a null top pointer
    }

//push operation : insert an element onto the top of the stack
int push(int value) {
    Node* newNode = new Node();  //1. allocate memory for the new node
    newNode->data = value;  //2. assign value
    newNode->next = top;  //3. set the next pointer of the new node to the current top node
    top = newNode;  //4. update the top pointer to the new node
    cout << "Push value : " << value << endl;
    return value;
}

//pop operation : remove the top most element from the stack
void pop() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
    }
    cout << "Popped value : " << top->data << endl;
    top = top->next;  //update the top pointer to the next node
}

//peek/top operation : retrieve the value of the top most element without removing it
void peek() {
    if (top == NULL ) {
        cout << "List is Empty." << endl;
    }
    else {
        Node* current = top;
        while (current != NULL) {
            cout << current->data << " " << endl;
            current = current->next;
        }
        cout << endl;
    }  //return the value of the top node
}

//isEmpty operation : check if the stack is empty
bool isEmpty() {
    return top == NULL; //return true if the top pointer is NULL, indicating an empty stack
    }
};

int main() {
    Stack stack;
}