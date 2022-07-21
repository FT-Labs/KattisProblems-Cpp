#include <bits/stdc++.h>

std::unordered_set<std::string> se;
std::string vals = "";

struct Node {
    int data;
    Node* left, *right;

    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void insertNode(Node* head, int data)
{
    while (head) {
        if (head->data > data) {
            if (head->left)
                head = head->left;
            else {
                head->left = new Node(data);
                return;
            }
        }
        else {
            if (head->right)
                head = head->right;
            else {
                head->right = new Node(data);
                return;
            }
        }
    }
}


void printInorder(Node* head)
{
    if (!head)
        return;
    vals += 'l';
    printInorder(head->left);
    vals += 'r';
    printInorder(head->right);
}

void clearTree(Node* head)
{
    if(!head)
        return;
    clearTree(head->left);
    clearTree(head->right);
    delete head;
    head = nullptr;
}


int main ()
{

    int n, k;
    std::cin >> n >> k;
    k--;

    while (n--) {
        int cur;
        std::cin >> cur;
        Node* head = new Node(cur);
        for (int i = 0; i < k; i++){
            std::cin >> cur;
            insertNode(head, cur);
        }
        printInorder(head);
        se.insert(vals);
        clearTree(head);
        vals.clear();
    }

    std::cout << se.size() << std::endl;
    return 0;
}
