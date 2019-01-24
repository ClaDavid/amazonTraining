// convert Binary Tree (BT) to Doubly Linked List (DLL)

class Node
{
	int data;
	Node left, right;

	public Node( int data )
	{
		this.data = data;
		left = right = null;
	}
}

class BinaryTree
{
	Node root;
	Node head;

	void bt_to_dll( Node node )
	{
		if( node == null ) return;

		bt_to_dll( node.right );

		node.right = head;

		if( head != null ) (head).left = node;

		head = node;

		bt_to_dll( node.left );
	}

	void print_list( Node head )
	{
		while( head != null )
		{
			System.out.print(head.data + " ");
			head = head.right;
		}
	}

	public static void main(String[] args)
	{
		BinaryTree tree = new BinaryTree(); 
        tree.root = new Node(5); 
        tree.root.left = new Node(3); 
        tree.root.right = new Node(6); 
        tree.root.left.right = new Node(4); 
        tree.root.left.left = new Node(1); 
        tree.root.right.right = new Node(8); 
        tree.root.left.left.right = new Node(2); 
        tree.root.left.left.left = new Node(0); 
        tree.root.right.right.left = new Node(7); 
        tree.root.right.right.right = new Node(9); 
  
        tree.bt_to_dll(tree.root); 
        tree.print_list(tree.head); 
	}
}

// O(n)