class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            ListNode *temp1 = temp->next;
            if (temp->val == temp1->val)
            {
                while (temp1->next != NULL)
                {
                    if (temp1->val != temp1->next->val)
                        break;
                    temp1 = temp1->next;
                }
                temp->next = temp1->next;
            }
            else
            {
                temp = temp->next;
            }
        }

        return head;
    }
};