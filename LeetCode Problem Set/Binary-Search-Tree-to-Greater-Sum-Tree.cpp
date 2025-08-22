    class Solution
    {
    public:
        int sum = 0;

        TreeNode *bstToGst(TreeNode *root)
        {
            // if root is null return null
            // as there is no tree to convert
            // if root is null return null
            // as there is no tree to convert
            if (root == nullptr) 
            {
                return nullptr; 
            }

            // if root is not null
            // then we will first convert the right subtree
            // then we will add the value of root to sum
            // then we will update the value of root to sum
            bstToGst(root->right);

            sum += root->val;
            root->val = sum;

            // then we will convert the left subtree
            bstToGst(root->left);

            return root;
        }
    };