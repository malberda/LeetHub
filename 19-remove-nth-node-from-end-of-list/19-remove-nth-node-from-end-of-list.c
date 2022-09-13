/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){

    struct ListNode*firstpass;
    struct ListNode*curr;
    struct ListNode*prev;
    firstpass=head;
    curr=head;
    int count;
    prev=head;
    count=1;
    
    while(firstpass->next!=NULL)
    {
        count++;
        firstpass=firstpass->next;
    }
    printf("the number of elements is %d\n",count);
    if(count==1)
    {
            return NULL;
    }
    int i;
    for(i=0;i<count-n;i++)
    {
        prev=curr;
        curr=curr->next;
    }
    if(curr==head)
    {    head=curr->next;
    free(curr);
    return head;}
    printf("no error\n");
    
    prev->next=curr->next;
    printf("no error1\n");
    free (curr);
    printf("no error2\n");
    
    return head;
    
}