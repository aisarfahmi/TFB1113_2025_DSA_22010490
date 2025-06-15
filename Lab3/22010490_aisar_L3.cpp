/*
ID = 22010490
Name = Aisar Fahmi bin Zamri
Lab = 3
*/
#include <iostream>
using namespace std;

class Node {
public:
    string data;
    Node* next;

    Node(string val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void add(string val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next)
                current = current->next;
            current->next = newNode;
        }
        cout << "Added: " << val << endl;
    }

    void remove(string val) {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }

        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted: " << val << endl;
            return;
        }

        Node* current = head;
        while (current->next && current->next->data != val)
            current = current->next;

        if (current->next) {
            Node* toDelete = current->next;
            current->next = toDelete->next;
            delete toDelete;
            cout << "Deleted: " << val << endl;
        } else {
            cout << "Element not found.\n";
        }
    }

    void display() {
        Node* current = head;
        if (!current) {
            cout << "List is empty.\n";
            return;
        }

        cout << "List: ";
        while (current) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL\n";
    }

    ~LinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Main function
int main() {
    LinkedList list;
    string command, value;

    cout << "Commands: add <value>, del <value>, show, exit\n";

    while (true) {
        cout << "> ";
        cin >> command;

        if (command == "add") {
            cin >> value;
            list.add(value);
        } else if (command == "del") {
            cin >> value;
            list.remove(value);
        } else if (command == "show") {
            list.display();
        } else if (command == "exit") {
            break;
        } else {
            cout << "Invalid command.\n";
        }
    }

    return 0;
}