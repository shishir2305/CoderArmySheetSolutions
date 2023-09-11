// lru cache

// algorithm 1 -> we can use array to store the elements and a hashmap to perform searching and all
// t.c -> hit {O(n)}
//        miss {O(n)}
// s.c -> O(n)

// algorithm 2 -> we can use DLL to store elements and hashmap to search, when found an element we can put that element in the front of the dll in O(1) and we can also delete an element using its reference in O(1)
// t.c -> O(1)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int key;
    int val;
    Node *next;
    Node *prev;
    Node(int k, int v)
    {
        key = k;
        val = v;
        next = NULL;
        prev = NULL;
    }
};

class LRUCache
{
public:
    unordered_map<int, Node *> mp;
    int cap, count;
    Node *head, *tail;
    LRUCache(int capacity)
    {
        cap = capacity;
        count = 0;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
        head->prev = NULL;
        tail->next = NULL;
    }

    void deleteNode(Node *head)
    {
        head->prev->next = head->next;
        head->next->prev = head->prev;
    }

    void addToHead(Node *node)
    {
        node->next = head->next;
        node->next->prev = node;
        node->prev = head;
        head->next = node;
    }

    int get(int key)
    {
        if (mp[key])
        {
            Node *node = mp[key];
            int result = node->val;
            deleteNode(node);
            addToHead(node);
            return result;
        }
        return -1;
    }

    void put(int key, int value)
    {
        if (mp[key])
        {
            Node *node = mp[key];
            node->val = value;
            deleteNode(node);
            addToHead(node);
        }
        else
        {
            Node *newNode = new Node(key, value);
            mp[key] = newNode;
            if (count < cap)
            {
                count++;
                addToHead(newNode);
            }
            else
            {
                mp.erase(tail->prev->key);
                deleteNode(tail->prev);
                addToHead(newNode);
            }
        }
    }
};

int main()
{

    return 0;
}