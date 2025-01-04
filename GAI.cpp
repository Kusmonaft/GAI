#include "GAI.h"
#include"Node.h"

void GAI::addViolation(Node* node, std::string carNumber, std::string violation)
{
    if (node->carNumber == carNumber)
    {
        node->violations.push_back(violation);
    }
    else if (carNumber < node->carNumber) {
        if (node->leftChild == nullptr) {
            node->leftChild = new Node(carNumber);
            node->leftChild->violations.push_back(violation);
        }
        else {
            add(node->leftChild, carNumber, violation);
        }
    }
    else {
        if (node->rightChild == nullptr) {
            node->rightChild = new Node(carNumber);
            node->rightChild->violations.push_back(violation);
        }
        else {
            add(node->rightChild, carNumber, violation);
        }
    }
}