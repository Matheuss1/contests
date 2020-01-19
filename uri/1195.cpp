#include <iostream>
using namespace std;


typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} Node;

typedef Node* p_node;


p_node newNode(int data)
{
    p_node node = new Node;

    node->data = data;
    node->left = node->right = NULL;

    return node;
}


p_node insert(p_node root, p_node x) 
{
    if (root == NULL)
        root = x;

    else if (x->data < root->data) {
        if (root->left == NULL)
            root->left = x;
        else 
            insert(root->left, x);
    }
    else {
        if (root->right == NULL)
            root->right = x;
        else
            insert(root->right, x);
    }

    return root;
}


void inorder(p_node root) 
{
    if (root == NULL)
        return;

    inorder(root->left);

    cout << " " << root->data;

    inorder(root->right);
}


void preOrder(p_node root)
{
    if (root == NULL)
        return;

    cout << " " << root->data;

    preOrder(root->left);
    preOrder(root->right);
}


void posOrder(p_node root)
{
    if (root == NULL)
        return;

    posOrder(root->left);
    posOrder(root->right);

    cout << " " << root->data;

}


int main()
{
    int cases, counter, i, j, k;

    cin >> cases;
    
    for (i = 0; i < cases; i++) {
        cin >> counter;

        p_node root = NULL;

        for (j = 0; j < counter; j++) {
            cin >> k;
            root = insert(root, newNode(k));
        }

        cout << "Case " << i + 1 << ":" << endl;
        cout << "Pre.:";
        preOrder(root);
        cout << endl;

        cout << "In..:";
        inorder(root);
        cout << endl;
        
        cout << "Post:";
        posOrder(root);
        cout << endl;
        cout << endl;
    }
        
}