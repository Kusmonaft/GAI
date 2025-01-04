#pragma once
#include"Node.h"

class GAI
{
private:
    Node* root;

public:

    void print(Node* node)
    {
        if (node == nullptr) return;
        print(node->leftChild);
        cout << "Номер машины: " << node->carNumber << '\n' << "Нарушения: ";
        for (const auto& violation : node->violations) {
            cout << " " << violation;
        }
        cout << '\n';
        print(node->rightChild);
    }

    GAI() : root(nullptr) {}

    void add(std::string carNumber, std::string violation, Node* root) {
        if (root == nullptr) {
            root = new Node(carNumber);
            root->violations.push_back(violation);
        }
        else {
            add(root, carNumber, violation);
        }
    }

    void printAll() {
        print(root);
    }

    void print_num(string num)
    {
        Node* currentNode = root;
        
        while (currentNode != nullptr)
        {
            if (currentNode->carNumber == num)
            {
                cout << "Номер машины: " << currentNode->carNumber << '\n' << "Нарушения: ";
            
                for (const auto& violation : currentNode->violations)
                {
                    cout << " " << violation;
                }
                cout << '\n';
                return;
            }
            else if (num < currentNode->carNumber) 
            {
                currentNode = currentNode->leftChild;
            }
            else {
                currentNode = currentNode->rightChild;
            }
        }
        cout << "Номер машины " << num << "Не найден. " << '\n';
    }

    void printByRange(string startNumber, string endNumber) {
        Node* currentNode = root;
        while (currentNode != nullptr && currentNode->carNumber <= endNumber) {
            if (currentNode->carNumber >= startNumber) {
                cout << "Номер машины: " << currentNode->carNumber << '\n' << "Нарушения :";
                for (const auto& violation : currentNode->violations) {
                    cout << " " << violation;
                }
                cout << '\n';
            }
            currentNode = currentNode->rightChild;
        }
    }
};
