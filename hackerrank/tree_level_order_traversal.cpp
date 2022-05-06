using namespace std;


/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

void levelOrder(Node * root)
{
    Node* current;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        current = q.front();
        cout << current->data << ' ';
        q.pop();
        if(current->left) q.push(current->left);
        if(current->right) q.push(current->right);
    }
}
