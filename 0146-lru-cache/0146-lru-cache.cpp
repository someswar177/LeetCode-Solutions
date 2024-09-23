#include <iostream>
#include <map>

using namespace std;

struct Node {
    int key;
    int value;
    Node* prev;
    Node* next;
    
    Node(int k, int v) {
        key = k;
        value = v;
        prev = nullptr;
        next = nullptr;
    }
};

class LRUCache {
public:
    Node* head;
    Node* tail;
    map<int, Node*> mpp;
    int capacity;
    
    LRUCache(int capacity_) {
        capacity = capacity_;
        mpp.clear();
        
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }

    void insertion(Node* node) {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }

    void deletion(Node* node) {
        Node* prevNode = node->prev;
        Node* nextNode = node->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    int get(int key) {
        if (mpp.find(key) == mpp.end()) return -1;
        Node* node = mpp[key];
        deletion(node);
        insertion(node);
        return node->value;  
    }

    void put(int key, int value) {
        if (mpp.find(key) != mpp.end()) {
            Node* node = mpp[key];
            node->value = value;
            deletion(node);
            insertion(node);
        } else {
            if (mpp.size() == capacity) {
                Node* lru = tail->prev;
                mpp.erase(lru->key);
                deletion(lru);
                delete lru;
            }
            Node* newNode = new Node(key, value);
            mpp[key] = newNode;
            insertion(newNode);
        }
    }
    
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
