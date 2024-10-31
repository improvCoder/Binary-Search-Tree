// BinarySearchTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};



class BST {
public:
    Node* root = NULL;
    void insert(Node* r, int num)
    {
        if (r == NULL)
        {
            root = new Node();
            r = root;
            root->data = num;
            root->left = NULL;
            root->right = NULL;
        }
        else
        {
            if (num < r->data)
            {
                if (r->left == NULL)
                {
                    Node* one = new Node;
                    r->left = one;
                    one->data = num;
                    one->left = NULL;
                    one->right = NULL;
                }
                else
                    insert(r->left, num);
            }
            else if (num > r->data)
            {
                if (r->right == NULL) {
                    Node* two = new Node;
                    r->right = two;
                    two->data = num;
                    two->left = NULL;
                    two->right = NULL;
                }
                else
                    insert(r->right, num);
            }
        }

    }

    void print(Node* r)
    {

        if (r != NULL)
        {
            if (r->left != NULL)
            {
                print(r->left);

            }
            cout << r->data << endl;
            print(r->right);
        }
    }

};


int main()
{
    BST* bst = new BST();
    bst->insert(bst->root, 56);
    bst->insert(bst->root, 16);
    bst->insert(bst->root, 100);
    bst->insert(bst->root, 70);
    bst->insert(bst->root, 160);
    bst->insert(bst->root, 175);
    bst->insert(bst->root, 195);
    bst->insert(bst->root, 8);
    bst->insert(bst->root, 20);
    bst->insert(bst->root, 4);
    bst->insert(bst->root, 7);
    bst->insert(bst->root, 3);
    bst->insert(bst->root, 2);
    bst->insert(bst->root, 1);

    bst->print(bst->root);

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
