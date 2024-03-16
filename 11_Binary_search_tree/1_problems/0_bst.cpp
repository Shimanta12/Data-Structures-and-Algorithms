#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};

Node *insert(Node *root, int key)
{
    if (!root)
    {
        return new Node(key);
    }
    if (key <= root->data)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }
    return root;
}

void inorder(Node *root)
{
    if (!root)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

bool search(Node *root, int key)
{
    if (!root)
    {
        return false;
    }
    if (root->data == key)
    {
        return true;
    }
    if (key <= root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

Node *delete_node(Node *root, int key)
{
    if (!root)
    {
        return nullptr;
    }
    if (root->data == key)
    {
        if (!root->left and !root->right)
        {
            delete root;
            root = nullptr;
        }
        else if (!root->left)
        {
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (!root->right)
        {
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            Node *temp = root->right;
            while (temp->left)
            {
                temp = temp->left;
            }
            root->data = temp->data;
            root->right = delete_node(root->right, root->data);
        }
    }
    else if (key <= root->data)
    {
        root->left = delete_node(root->left, key);
    }
    else
    {
        root->right = delete_node(root->right, key);
    }
    return root;
}

void print_range(Node *root, int k1, int k2)
{
    if (!root)
    {
        return;
    }

    if (root->data >= k1 and root->data <= k2)
    {
        print_range(root->left, k1, k2);
        cout << root->data << " ";
        print_range(root->right, k1, k2);
    }
    else if (root->data > k2)
    {
        print_range(root->left, k1, k2);
    }
    else
    {
        print_range(root->right, k1, k2);
    }
}

void root_to_leaf(Node *root, vector<int> path)
{
    if (!root)
    {
        return;
    }
    if (!root->left and !root->right)
    {
        path.push_back(root->data);
        for (int node : path)
        {
            cout << node << " ";
        }
        cout << endl;
        return;
    }
    path.push_back(root->data);
    root_to_leaf(root->left, path);
    root_to_leaf(root->right, path);
    path.pop_back();
}

int main()
{
    Node *root = nullptr;
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    for (int key : arr)
    {
        root = insert(root, key);
    }
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;
    cout << search(root, 13) << endl;
    // delete_node(root, 3);
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;
    print_range(root, 4, 7);
    cout << endl;
    cout << "Root to leaf paths:\n";
    root_to_leaf(root, vector<int>{});
    return 0;
}