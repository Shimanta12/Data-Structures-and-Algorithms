#include <iostream>
#include <queue>
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

// Preorder build of the tree (root->left_subtree->right_subtree)
Node *build_tree_preorder()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return nullptr;
    }
    Node *n = new Node(d);
    n->left = build_tree_preorder();
    n->right = build_tree_preorder();
    return n;
}

// Level order build of the tree
Node *build_tree_level_order()
{
    int d;
    cin >> d;
    if (d == -1)
        return nullptr;
    queue<Node *> q;
    Node *root = new Node(d);
    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cin >> d;
        if (d != -1)
        {
            curr->left = new Node(d);
            q.push(curr->left);
        }
        cin >> d;
        if (d != -1)
        {
            curr->right = new Node(d);
            q.push(curr->right);
        }
    }
    return root;
}

// Preorder traversal of the tree
void pre_order(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    pre_order(root->left);
    pre_order(root->right);
}

// Inorder traversal of the tree
void in_order(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    in_order(root->left);
    cout << root->data << " ";
    in_order(root->right);
}

// Post order traversal of the tree. Used a lot in problems. It's a Bottom up traversal.
void post_order(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    post_order(root->left);
    post_order(root->right);
    cout << root->data << " ";
}

// Level order traversal of the tree
void level_order(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    q.push(nullptr);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        if (curr == nullptr)
        {
            if (!q.empty())
            {
                cout << endl;
                q.push(nullptr);
            }
            continue;
        }
        cout << curr->data << " ";

        if (curr->left != nullptr)
        {
            q.push(curr->left);
        }
        if (curr->right != nullptr)
        {
            q.push(curr->right);
        }
    }
}

int height(Node *root)
{
    if (!root)
    {
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    return max(h1, h2) + 1;
}

int diameter(Node *root) // time complexity O(n^2)
{
    if (!root)
    {
        return 0;
    }
    int d1 = height(root->left) + height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);
    return max(d1, max(d2, d3));
}

pair<int, int> opti_diameter(Node *root) // time complexity O(n)
{
    if (!root)
    {
        return {0, 0};
    }
    auto left = opti_diameter(root->left);
    auto right = opti_diameter(root->right);
    int h = max(left.first, right.first) + 1;
    int d1 = left.first + right.first;
    int d2 = left.second;
    int d3 = right.second;
    int d = max(d1, max(d2, d3));
    return {h, d};
}

int main()
{
    // Node *root = build_tree_preorder();
    Node *root = build_tree_level_order();
    pre_order(root);
    cout << endl;
    in_order(root);
    cout << endl;
    post_order(root);
    cout << endl;
    level_order(root);
    cout << endl;
    cout << height(root) << endl;
    cout << diameter(root) << endl;
    cout << opti_diameter(root).second << endl;
    return 0;
}
/*
Pre order build:
1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

Level order build:
1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1
 */