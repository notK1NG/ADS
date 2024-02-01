#include <iostream>
#include <vector>
#include<math.h>

class MinPriorityQueue {
public:
    MinPriorityQueue() {}

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
        while (index > 0 && heap[index] < heap[parentIndex]) {
            // Swap the elements
            std::swap(heap[index], heap[parentIndex]);
            // Move up the tree
            index = parentIndex;
            parentIndex = (index - 1) / 2;
        }
    }
};

int main() {
    MinPriorityQueue minHeap;
    minHeap.insert(5);
    minHeap.insert(10);
    minHeap.insert(7);
    minHeap.insert(3);
    minHeap.insert(12);

    std::vector<int> heap = minHeap.getHeap();

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
