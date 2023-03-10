#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *deleteNode(Node *head, int i)
{
    if (i <= 0)
        return head;
    if (i == 1 && head != NULL)
    {
        Node *newHead = head->next;
        head->next = NULL;
        delete head;
        return newHead;
    }
    Node *curr = head;
    int count = 1;
    while (curr != NULL && count < i - 1)
    {
        curr = curr->next;
        count++;
    }
    if (curr && curr->next)
    {
        Node *temp = curr->next;
        curr->next = temp->next;
        temp->next = NULL;
        delete temp;
        return head;
    }
    return head;
}

Node *reverseList(Node *head)
{
    Node *current = head;
    Node *previous = NULL;
    Node *next = NULL;

    while (current != NULL)
    {
        // Store next node
        next = current->next;

        // Reverse the link between current node and previous node
        current->next = previous;

        // Move pointers to next node and previous node
        previous = current;
        current = next;
    }

    // Set head to point to the last node in the original list (now the first node in the reversed list)
    head = previous;

    return head;
}

Node *merge_sort(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
}

int main()
{

    return 0;
}