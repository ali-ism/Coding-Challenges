/*
Node is defined as 

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

Node * insert(Node * root, int data)
{
    Node* node = new Node(data);
    if(!root) root = node;
    else
    {
        Node* current = root;
        while(current)
        {
            if(data < current->data)
            {
                if(current->left) current = current->left;
                else
                {
                    current->left = node;
                    break;
                }
            }
            else
            {
                if(current->right) current = current->right;
                else
                {
                    current->right = node;
                    break;
                }
            }
        }
    }
    return root;
}
