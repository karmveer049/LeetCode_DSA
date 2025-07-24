    Node* divide(Node* head) {
        // code here
        if(!head||!head->next)return head;
        Node* e=new Node(0);
        Node* et=e;
        Node* o=new Node(0);
        Node* ot=o;
        Node* t=head;
        while(t){
            if(t->data%2==0){
                e->next=t;
                e=e->next;
            }
            else{
                o->next=t;
                o=o->next;
            }
            t=t->next;
        }
      
       o->next=NULL;
        e->next=ot->next;
        return et->next;
    }
