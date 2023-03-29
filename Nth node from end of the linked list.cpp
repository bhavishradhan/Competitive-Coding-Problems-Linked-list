 } Driver Code Ends


/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
      Node* temp = head;
      if(head==NULL){
          return -1;
      }
      int count=0;
      while(temp!=NULL){
          count++;
          temp=temp->next;
      }
      
      int c = count-n;
       Node* p = head;
       int i=0;
     if(c>=0 && c<count){
         while(p!=NULL){
           if(i==c){
               return p->data;
           }  
           else{
             p=p->next;
             i++;
           }
         }
     }
     else
        return -1;
}

