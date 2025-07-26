 ListNode* swapPairs(ListNode* head) {
        if(!head||!head->next) return head;
        ListNode* s1=head;
        ListNode* s2=head->next;
        ListNode* trace=new ListNode(0);
        ListNode* tra=trace;
        while (s1&&s2){
            ListNode* nextpair=s2->next;
            trace->next=s2;
            trace=trace->next;
            trace->next=s1;
            trace=trace->next;
            s1=nextpair;
           if(s1) s2=s1->next;
           else break;
        }
        trace->next=s1;
        
        return tra->next;
    }
