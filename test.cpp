#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

Node *build_tree_preorder()
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return nullptr;
    }
    Node *n = new Node(data);
    n->left = build_tree_preorder();
    n->right = build_tree_preorder();
}

Node *build_tree_level_order()
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return nullptr;
    }
    queue<Node *> q;

    Node *root = new Node(data);

    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        cin >> data;
        if (data != -1)
        {
            curr->left = new Node(data);
            q.push(curr->left);
        }
        cin >> data;
        if (data != -1)
        {
            curr->right = new Node(data);
            q.push(curr->right);
        }
    }
    return root;
}

void preorder(Node *root)
{
    if (!root)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
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

void postorder(Node *root)
{
    if (!root)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelorder(Node *root)
{
    if (!root)
        return;
    queue<Node *> q;
    q.push(root);
    q.push(nullptr);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        if (!curr)
        {
            if (!q.empty())
            {
                q.push(nullptr);
                cout << endl;
            }
        }
        else
        {
            cout << curr->data << " ";
            if (curr->left)
            {
                q.push(curr->left);
            }
            if (curr->right)
            {
                q.push(curr->right);
            }
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

int diameter(Node *root)
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

pair<int, int> optm_diameter(Node *root)
{
    if (!root)
    {
        return {0, 0};
    }
    auto left = optm_diameter(root->left);
    auto right = optm_diameter(root->right);

    int d1 = left.second + right.second;
    int d2 = left.first;
    int d3 = right.first;

    int d = max(d1, max(d2, d3));
    int height = max(left.second, right.second) + 1;

    return {d, height};
}

int find_depth(Node *root, int target)
{
    if (!root)
    {
        return -1;
    }
    int distance = -1;
    if (root->data == target or (distance = find_depth(root->left, target) >= 0) or (distance = find_depth(root->right, target) >= 0))
    {
        distance += 1;
    }
    return distance;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Node *root = build_tree_preorder();
    Node *root = build_tree_level_order();
    cout << "Preorder: ";
    preorder(root);
    cout << endl;
    cout << "Inorder: ";
    inorder(root);
    cout << endl;
    cout << "Postorder: ";
    postorder(root);
    cout << endl;
    cout << "Levelorder: " << endl;
    levelorder(root);
    cout << endl;
    cout << "Height of the tree: " << height(root) << endl;
    cout << "Diameter of the tree: " << diameter(root) << endl;
    cout << "Diameter of the tree(Optimized): " << optm_diameter(root).first << endl;
    cout << "Depth of node 4: " << find_depth(root, 4) << endl;
    return 0;
}

/*
Preorder build:
1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

Leverorder build:
1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1
 */
