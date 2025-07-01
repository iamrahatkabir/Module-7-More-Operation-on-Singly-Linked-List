#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

class Node
{
    public:
        int val;
        Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = next;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);

    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode; 
}

// void print_linked_list(Node* head)
// {
//     Node* temp = head;
//     while(temp != NULL)
//     {
//         cout << temp->val << endl;
//         temp = temp->next;
//     }
// }

void print_reverse(Node* temp)
{
    if(temp == NULL)
    {
        return;
    }

    print_reverse(temp->next);
    cout << temp->val << endl;
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;  

    int val;
    while (true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    // print_linked_list(head); 
    print_reverse(head);
    

    return 0;
} 