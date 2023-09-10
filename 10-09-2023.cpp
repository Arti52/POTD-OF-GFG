//Given a BST and a key K. If K is not present in the BST, Insert a new Node with a value equal to K into the BST. If K is already present in the BST, don't modify the BST.
// Time Complexity->O(N) and Space Complexity->O(1).
Node* insert(Node* node, int data) {
        
             if(node == NULL){
                Node* newnode = new Node(data);
                return newnode;
            }
            if(node->data < data){
                //left;
                node->right = insert(node->right, data);
            }else if(node->data >data){
                //right
                node->left = insert(node->left, data);
            }
            return node;
}
