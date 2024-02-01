#include <iostream>
#include <vector>
#include <math.h>

class MaxPriorityQueue {
public:
    MaxPriorityQueue() {}

    void insert(int value) {
        // Step 1: Insert at the bottom
        heap.push_back(value);
        // Step 2: Heapify Up
        heapifyUp(heap.size() - 1);
    }

    std::vector<int> getHeap() const {
        return heap;
    }

private:
    std::vector<int> heap;

    void heapifyUp(int index) {
        int parentIndex = (index - 1) / 2;
        while (index > 0 && heap[index] > heap[parentIndex]) {
            // Swap the elements
            std::swap(heap[index], heap[parentIndex]);
            // Move up the tree
            index = parentIndex;
            parentIndex = (index - 1) / 2;
        }
    }
};

int main() {
    MaxPriorityQueue maxHeap;
    maxHeap.insert(5);
    maxHeap.insert(10);
    maxHeap.insert(7);
    maxHeap.insert(3);
    maxHeap.insert(12);

    std::vector<int> heap = maxHeap.getHeap();

    int level=0;
    int c=0;

    for (size_t i = 0; i < heap.size(); ++i) {
        if(pow(2,level)==c){
        std::cout<<std::endl;
        level++;
        c=0;
        }
        std::cout << heap[i]<<" ";
        c++;
    }
    return 0;
}
