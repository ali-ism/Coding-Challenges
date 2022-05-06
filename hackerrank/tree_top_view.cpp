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

void topView(Node * root)
{
    map<Node*,int> hd_node;
    map<int,int> hd_data;
    queue<Node*> q;
    Node* current;
    q.push(root);
    hd_node[root] = 0;
    hd_data[0] = root->data;
    while(!q.empty())
    {
        current = q.front();
        if(!hd_data.count(hd_node[current]))
        hd_data[hd_node[current]] = current->data;
        if(current->left)
        {
            hd_node[current->left] = hd_node[current] - 1;
            q.push(current->left);
        }
        if(current->right)
        {
            hd_node[current->right] = hd_node[current] + 1;
            q.push(current->right);
        }
        q.pop();
    }
    for(auto item:hd_data)
    cout << item.second << ' ';
}
