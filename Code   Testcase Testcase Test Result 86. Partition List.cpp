  ListNode* partition(ListNode* head, int x) {
        ListNode* f=new ListNode(0);
        ListNode* ft=f;
        ListNode* s=new ListNode(0);
        ListNode* st=s;
        while(head){
            if(head->val<x){
                f->next=head;
                f=f->next;
            }
            else{
                s->next=head;
                s=s->next;
            }
            head=head->next;
        }
        s->next=nullptr;
        f->next=st->next;
        return ft->next;
        
    }
