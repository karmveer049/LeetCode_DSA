 ListNode* oddEvenList(ListNode* head) {
        if(!head||!head->next) return head;
        ListNode* o =new ListNode(0);
        ListNode* ot=o;
        ListNode* e=new ListNode(0);
        ListNode* et=e;
        ListNode* mov=head;
        int n=0;
        while(mov){
            mov=mov->next;
            n++;
        }
        mov=head;
       while(mov&&mov->next){
        o->next=mov;
        o=o->next;
        mov=mov->next;
        e->next=mov;
        e=e->next;
        mov=mov->next;
       }
       if(n%2!=0){
        mov=head;
        while(mov->next){
            mov=mov->next;
        }
        o->next=mov;
        o=o->next;
       }
       e->next=nullptr;
       o->next=et->next;
       return ot->next;
    }
