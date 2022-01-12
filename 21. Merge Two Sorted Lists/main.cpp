class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;

        ListNode *t1 = list1;
        ListNode *t2 = list2;
        ListNode *head;
        ListNode *tail;

        if (t1->val <= t2->val)
        {
            head = tail = t1;
            t1 = t1->next;
        }
        else
        {
            head = tail = t2;
            t2 = t2->next;
        }
        while (t1 != NULL && t2 != NULL)
        {
            if (t1->val <= t2->val)
            {
                tail->next = t1;
                tail = t1;
                t1 = t1->next;
            }
            else
            {
                tail->next = t2;
                tail = t2;
                t2 = t2->next;
            }
        }

        if (t1 != NULL)
            tail->next = t1;
        else
            tail->next = t2;

        return head;
    }
};