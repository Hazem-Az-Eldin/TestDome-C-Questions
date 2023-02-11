#include <stdexcept>
#include <string>
#include <iostream>

class Node{

public:

    Node(int value, Node* left, Node* right){ //check moving the * to the right
        this->value = value;
        this->left = left;
        this->right = right;
    }

    int getValue() const{ //why const
        return value;
    }

    Node* getLeft() const{
        return left;
    }

    Node* getRight() const{
        return right;
    }

private:

    int value;
    Node* left;
    Node* right;
};

class BinarySearchTree
{
public:
    static bool contains(const Node& root, int value){
        //throw std::logic_error("Waiting to be implemented");
        
        if(root.getValue() == value)
          return true;
        else if(value > root.getValue()&& root.getRight() != NULL)
          return contains(*root.getRight(),value);
        else if(value < root.getValue() && root.getLeft() != NULL)
           return contains(*root.getLeft(),value);
        else
          return false;
    }
};


#ifndef RunTests
int main(){
    Node n1(1, NULL, NULL);
    Node n3(3, NULL, NULL);
    Node n2(2, &n1, &n3);

    std::cout << BinarySearchTree::contains(n2,3); //root, search value
}
#endif