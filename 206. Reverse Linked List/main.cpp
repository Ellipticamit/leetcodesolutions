class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *n = NULL, *p = NULL, *c = head;
        while (c != NULL)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }

        head = p;

        return head;
    }
};

/*   Recursively */
