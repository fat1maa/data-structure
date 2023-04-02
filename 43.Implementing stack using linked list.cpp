#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top; 
public:
    // Constructor to initialize the stack
    Stack() {
        top = NULL;
    }

    // Push an element onto the top of the stack
    void Push(int value) {
        Node* temp = new Node;
        temp->data = value;
        temp->next = top;
        top = temp;
    }

    // Poping an element from the top of the stack
    void Pop() {
        if (top == NULL) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    // Check if the stack is empty
    void IsEmpty() {
        if (top == NULL) {
            cout << "Stack is empty!" << endl;
        }
        else {
            cout << "Stack is not empty!" << endl;
        }
    }

    // Function to show even numbers in the stack
    void showEven() {
        if (top == NULL) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* temp = top;
        cout << "Even numbers in stack: ";
        while (temp != NULL) {
            if (temp->data % 2 == 0) {
                cout << temp->data << " ";
            }
            temp = temp->next;
        }
        cout << endl;
    }

    // Function to show odd numbers in the stack
    void showOdd() {
        if (top == NULL) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* temp = top;
        cout << "Odd numbers in stack: ";
        while (temp != NULL) {
            if (temp->data % 2 != 0) {
                cout << temp->data << " ";
            }
            temp = temp->next;
        }
        cout << endl;
    }

    // Display the elements in the stack
    void Display() {
        if (top == NULL) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack Elements are:    ";
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << "  ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack obj;
    obj.Push(13);
    obj.Push(22);
    obj.Push(35);
    obj.Display(); // Output: 35 22 13
    obj.Pop();
    cout << "\n After poping ";
    obj.Display(); // Output: 22 13
    cout << "\n If we check whether stack is empty at this point ";
    obj.IsEmpty(); // Output: Stack is not empty!
    obj.Pop();
    obj.Pop();
    cout << "\n After poping two more elements ";
    obj.Pop(); // Output: Stack is empty!
    cout << "\n Now if we check the Display and Isempty functions"<<endl;
    obj.Display(); // Output: Stack is empty!
    obj.IsEmpty(); // Output: Stack is empty!
    obj.showEven();
    
    return 0;
}
