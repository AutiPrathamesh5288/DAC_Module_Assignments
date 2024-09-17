#include <iostream>
#include <exception>
using namespace std;

// User-defined exception for stack overflow
class StackOverflowException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Stack Overflow!";
    }
};

// User-defined exception for stack underflow
class StackUnderflowException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Stack Underflow!";
    }
};

class Stack {
private:
    int* arr;
    int top;
    int maxSize;

public:
    Stack(int size) : maxSize(size), top(-1) {
        arr = new int[maxSize];
    }

    ~Stack() {
        delete[] arr;
    }

    // Push operation with exception handling for overflow
    void push(int value) {
        if (top >= maxSize - 1) {
            throw StackOverflowException();  // Throw exception if stack is full
        }
        arr[++top] = value;
    }

    // Pop operation with exception handling for underflow
    int pop() {
        if (top < 0) {
            throw "jhsdfiuhsdf;u";  // Throw exception if stack is empty
        }
        return arr[top--];
    }

    // Peek operation to get the top element of the stack
    int peek() {
        if (top < 0) {
            throw StackUnderflowException();  // Throw exception if stack is empty
        }
        return arr[top];
    }

    // Display the current elements in the stack
    void display() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int choice, size, value;
    cout << "Enter the size of the stack: ";
    cin >> size;
    
    Stack stack(size);

    do {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        try {
            switch (choice) {
                case 1:  // Push operation
                    cout << "Enter value to push: ";
                    cin >> value;
                    stack.push(value);
                    cout << "Value pushed successfully.\n";
                    break;

                case 2:  // Pop operation
                    value = stack.pop();
                    cout << "Popped value: " << value << endl;
                    break;

                case 3:  // Peek operation
                    value = stack.peek();
                    cout << "Top value: " << value << endl;
                    break;

                case 4:  // Display the stack
                    stack.display();
                    break;

                case 5:  // Exit the program
                    cout << "Exiting..." << endl;
                    break;

                default:
                    cout << "Invalid choice! Please try again." << endl;
            }
        } catch (const exception& e) {
            // Catch any exception thrown by the stack operations
            cout << e.what() << endl;
        }
    } while (choice != 5);

    return 0;
}
