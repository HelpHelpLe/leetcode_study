#include "solution.h"
#include <unordered_map>


LRUCache::LRUCache(int capacity): size_(0), capacity_(capacity) {
    head = new Entry;
    tail = head;
}


int LRUCache::get(int key) {
    std::unordered_map<int, Entry *>::iterator it = cache_.find(key);
    if (it == cache_.end()) return -1;

    Entry* target = it->second;
    del_entry(target);
    add_entry(target);

    return target->value;
}


void LRUCache::put(int key, int value) {
    std::unordered_map<int, Entry *>::iterator it = cache_.find(key);
    if (it != cache_.end()) {
        Entry* target = it->second;
        target->value = value;
        del_entry(target);
        add_entry(target);
    } else {
        if (size_ >= capacity_) {
            Entry* e = tail;
            del_entry(e);
            e->value = value;
            cache_.erase(e->key);
            e->key = key;
            cache_[key] = e;
            add_entry(e);
        } else {
            Entry* e = new Entry;
            e->key = key;
            e->value = value;
            cache_[key] = e;
            add_entry(e);
            ++size_;
        }
    }
}

void LRUCache::add_entry(Entry* e) {
    e->next = head->next;
    if (e->next != nullptr)
        e->next->prev = e;
    head->next = e;
    e->prev = head;
    if (tail == head) tail = e;
}

void LRUCache::del_entry(Entry* e) {
    e->prev->next = e->next;
    if (e->next != nullptr)
        e->next->prev = e->prev;
    if (e == tail)
        tail = e->prev;
}
