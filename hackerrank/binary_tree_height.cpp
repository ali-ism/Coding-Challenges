/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
int height(Node* root)
{
    if(!root) return -1;
    int left_height = height(root->left);
    int right_height = height(root->right);
    if(left_height>right_height) return left_height+1;
    else return right_height+1;
}
