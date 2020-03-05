#include <iostream>
using namespace std;

class Node{
    int data;
    Node *left, *right;
    Node(int data){
        this->data=data;
    }
};
class BST{
    Node *root;
    BST(){
        root=null;
    }

    Node *insert (Node *node, int data){
        if(node==null){
            node= New Node(data);
            return node;
        }
        if(node->data<=data)
        node->left=insert(node->left,data);
        else
        node->right= insert(node->right,data);
        return node;
    }

    Node *find_max(Node *node){
        while(node->right!=null)
        node= node ->right;
        return node;
    }

    Node *find_min(Node *node){
        while(node->left!=null)
        node= node ->left;
        return node;
    }

}

int main(){
    BST *bst = New BST();
    bst->root=bst->insert(bst->root,12);
    bst->root=bst->find_max(node->right);
    bst->root=bst->find_min(node->left);
    return 0;
}
