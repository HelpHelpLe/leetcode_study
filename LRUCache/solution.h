#pragma once


#include <list>
#include <unordered_map>


class LRUCache {
public:
    struct Entry {
        int key {-1};
        int value {-1};
        Entry* prev {nullptr};
        Entry* next {nullptr};
    };

public:
    LRUCache(int capacity);
    
    int get(int key);
    
    void put(int key, int value);

private:
    void add_entry(Entry* e);

    void del_entry(Entry* e);

private:
    int size_;
    int capacity_;
    Entry* head;
    Entry* tail;
    std::unordered_map<int, Entry *> cache_;
};
