public class ImplBinarySearchTree {


    //  Insert into a binary search tree
    ppublic TreeNode insertBST(TreeNode root, int val) {
        if(root == null) return new TreeNode(val);
        if(root.val>val) {
            if(root.left == null) root.left = new TreeNode(val);
            else insertBST(root.left, val);
        } else {
            if(root.right == null) root.right = new TreeNode(val);
            else insertBST(root.right, val);
        }
        return root;
    }
}
