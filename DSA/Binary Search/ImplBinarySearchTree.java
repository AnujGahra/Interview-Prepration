public class ImplBinarySearchTree {


    // method to implement binary search tree
    private static class Node {
        int data;
        Node left, right;

        public Node(int item) {
            data = item;
            left = right = null;
        }


    }

    
    

    public static void main(String[] args) {
        BinarySearchTree bst = new BinarySearchTree();
        bst.insert(50);
        bst.insert(30);
        bst.insert(70);
        bst.insert(20);
        bst.insert(40);
        bst.insert(60);
        bst.insert(80);

        System.out.println("Inorder traversal of the BST:");
        bst.inorderTraversal();

        System.out.println("\nSearching for 40 in the BST:");
        boolean found = bst.search(40);
        System.out.println("Found: " + found);

        System.out.println("\nDeleting 20 from the BST:");
        bst.delete(20);
        System.out.println("Inorder traversal after deletion:");
        bst.inorderTraversal();
    }
}
