/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:

    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;

        while(curr) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    Node* addTwoLists(Node* head1, Node* head2) {

        // Remove leading zeros from input lists
        while(head1 && head1->next && head1->data == 0) {
            head1 = head1->next;
        }

        while(head2 && head2->next && head2->data == 0) {
            head2 = head2->next;
        }

        head1 = reverse(head1);
        head2 = reverse(head2);

        Node* dummy = new Node(0);
        Node* tail = dummy;

        int carry = 0;

        while(head1 || head2 || carry) {

            int sum = carry;

            if(head1) {
                sum += head1->data;
                head1 = head1->next;
            }

            if(head2) {
                sum += head2->data;
                head2 = head2->next;
            }

            carry = sum / 10;

            tail->next = new Node(sum % 10);
            tail = tail->next;
        }

        Node* ans = reverse(dummy->next);

        // Remove leading zeros from answer
        while(ans && ans->next && ans->data == 0) {
            ans = ans->next;
        }

        return ans;
    }
};