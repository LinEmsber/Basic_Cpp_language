#include <iostream>
#include <queue>
#include <deque>
#include <chrono>

int main() {
    const int num_operations = 1000000; // 1 million operations

    // Queue
    std::queue<int> q;
    auto start_queue = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < num_operations; ++i) {
        q.push(i);
        if (i % 2 == 0) {
            q.pop();
        }
    }
    auto end_queue = std::chrono::high_resolution_clock::now();
    auto queue_duration = std::chrono::duration_cast<std::chrono::microseconds>(end_queue - start_queue).count();

    // Deque
    std::deque<int> dq;
    auto start_deque = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < num_operations; ++i) {
        dq.push_back(i);
        if (i % 2 == 0) {
            dq.pop_front();
        }
    }
    auto end_deque = std::chrono::high_resolution_clock::now();
    auto deque_duration = std::chrono::duration_cast<std::chrono::microseconds>(end_deque - start_deque).count();

    std::cout << "Queue duration: " << queue_duration << " microseconds" << std::endl;
    std::cout << "Deque duration: " << deque_duration << " microseconds" << std::endl;

    return 0;
}

