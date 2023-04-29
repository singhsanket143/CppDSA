#include <iostream>
#include <vector>

class MaxHeap {
    std::vector<int> arr;
    public:
    void upheapify(int idx) {
        while(idx > 0) {
            int pi = (idx - 1) / 2;
            if(this->arr[pi] < this->arr[idx]) {
                std::swap(this->arr[pi] , this->arr[idx]);
                idx = pi;
            } else {
                break;
            }
        }
    }
    void insert(int data) {
        this->arr.push_back(data);
        this->upheapify(this->arr.size() - 1);
    }
    int get() {
        if(this->arr.size() > 0) return this->arr[0];
        else return INT_MIN;
    }
    void downheapify(int idx) {
        while(idx < this->arr.size()) {
            int lc = 2*idx + 1;
            int rc = 2*idx + 2;
            int cand = idx;
            if(lc < this->arr.size() and this->arr[lc] > this->arr[cand]) {
                cand = lc;
            }
            if(rc < this->arr.size() and this->arr[rc] > this->arr[cand]) {
                cand = rc;
            }
            if(cand == idx) break;
            std::swap(this->arr[idx], this->arr[cand]);
            idx = cand;
        }
    }
    void remove() {
        std::swap(this->arr[0], this->arr[this->arr.size() - 1]);
        this->arr.pop_back();
        downheapify(0);
    }
    void display() {
        for(int i = 0; i < this->arr.size(); i++) {
            std::cout<<this->arr[i]<<" ";
        }
        std::cout<<"\n";
    }
};

int main() {
    MaxHeap hp;
    hp.insert(10);
    hp.insert(5);
    hp.insert(15);
    hp.insert(1);
    hp.insert(25);
    std::cout<<hp.get()<<"\n";
    hp.display();
    hp.insert(0);
    hp.insert(19);
    hp.remove();
    hp.display();
    hp.remove();
    hp.display();
    return 0;
}