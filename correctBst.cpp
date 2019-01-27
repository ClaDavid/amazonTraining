// swap two nodes of BST (fix them actually)

struct node *first, *last, *previous;

void swap( node* x, node* y )
{
    int temp = x -> data;
    x -> data = y -> data;
    y -> data = temp;
}

void wrongNode( node* root )
{
    if( root == NULL ) return;
    
    wrongNode( root -> left );
    
    if( previous != NULL && previous -> data > root -> data )
    {
        if( first == NULL ) first = previous;
        last = root;
    }
    
    previous = root;
    wrongNode( root -> right );
}

struct node *correctBST( struct node* root )
{
    previous = first = last = NULL;
    wrongNode( root );
    swap( first, last );
    return root;
}
