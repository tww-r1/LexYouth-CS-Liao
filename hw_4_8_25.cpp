/**A bit more complex...
 * 
 * Doubly Linked List Guide:
 * 
 * A doubly linked list is a data structure consisting of Nodes where each Node struct contains:
 * - A data field to store the value.
 * - A pointer to the next node in the sequence.
 * - A pointer to the previous node in the sequence.
 * 
 * Steps to implement a doubly linked list:
 * 
 * 1. Define a Node struct:
 *    - Include a data field* of std::string song_name.
 *    - Include two pointers: one for the next Node and one for the previous Node.
 *    - hint: in order to create a pointer to a node, do: Node * ptr = &someNode;
 * 
 * 2. Define the DoublyLinkedList struct:
 *    - Include a pointer to the head (first node) of the list.
 *    - Include a int size of how many elements there are in the list.
 * 
 * 3. Implement basic operations:
 *    - **Insertion**:
 *      - you have to swap the values of pointers; the Node before my insertion index: I change its next pointer to 
 *        a pointer to the inserted Node and set the prev pointer of inserted Node to the address of the Node before. Send me 
 *        your questions; D-L-Lists vary in implmentation.
 *    - **Deletion**:
 *        - delete (the keyword version of free()) on the deleted node. Before that, connect the next and previous Nodes
 *          by setting pointers related to the deleted Node to corresponding &ptr. 
 *    - **Traversal**:
 *      - Forward traversal: Start from the head and move to the next node until the end.
 *      - Backward traversal: Start from the tail and move to the previous node until the beginning.
 * 
 * 4. Edge cases:
 *    - Empty list: Ensure operations handle cases where the list is empty.
 *    - Single-node list: Ensure operations handle cases where there is only one node.
 * 
 * 5. Optional:
 *    - Implement a size variable to track the number of nodes in the list.
 *    - Add utility functions like search, reverse, or clear.
 * 
 * Note: remember to delete! >> eg. new <object to be allocated>, delete <object to be freed>; this would be a keyword
 * 
 **/