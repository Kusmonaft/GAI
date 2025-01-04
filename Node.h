#pragma once
#include <iostream>
#include <vector>
#include<string>

using namespace std;

class Node {
public:
    string carNumber;
    vector<string> violations;
    Node* leftChild;
    Node* rightChild;

    Node(string carNumber) : carNumber(carNumber), leftChild(nullptr), rightChild(nullptr) {}

    

};


