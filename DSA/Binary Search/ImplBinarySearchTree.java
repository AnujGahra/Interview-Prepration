public class ImplBinarySearchTree {


    public static class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode(int x) {
            val = x;
        }
    }




    //  Insert into a binary search tree
    public TreeNode insertBST(TreeNode root, int val) {
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


    public TreeNode searchBST(TreeNode root, int val) {
        if(root == null) return null;
        if(root.val == val) return root;
        if(root.val>val) return searchBST(root.left, val);
        else return searchBST(root.right, val);
    }


    public static void main(String[] args) {
        String[] values = {"5", "3", "7", "2", "4", "6", "8"};
        ImplBinarySearchTree bst = new ImplBinarySearchTree();

        TreeNode searchResult = bst.searchBST(root, 4);
        if (searchResult != null) {
            System.out.println("Found node with value: " + searchResult.val);
        } else {
            System.out.println("Node not found.");
        }
    }
}
