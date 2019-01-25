// Delete without head pointer
// Exercise: https://practice.geeksforgeeks.org/problems/delete-without-head-pointer/1

void deleteNode(Node *node)
{
   *node = *( node -> next );
}
