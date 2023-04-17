#include <iostream>
#include <algorithm>
#include <deque>
#include <queue>

struct Task {
	int id;
	int priority;
};

// Comparator for priority_queue
struct ComparePriority {
	bool operator()(const Task& a, const Task& b) const {
		return a.priority < b.priority;
	}
};

// Using deque
void scheduler_deque(std::deque<Task>& tasks) {
	while (!tasks.empty()) {
		auto highest_priority_task = std::max_element(tasks.begin(), tasks.end(),
				[](const Task& a, const Task& b) {
				return a.priority < b.priority;
				}
				);
		std::cout << "Executing task " << highest_priority_task->id << " with priority " << highest_priority_task->priority << std::endl;
		tasks.erase(highest_priority_task);
	}
}

// Using priority_queue
void scheduler_queue(std::priority_queue<Task, std::vector<Task>, ComparePriority>& tasks) {
	while (!tasks.empty()) {
		Task highest_priority_task = tasks.top();
		std::cout << "Executing task " << highest_priority_task.id << " with priority " << highest_priority_task.priority << std::endl;
		tasks.pop();
	}
}

int main() {
	std::deque<Task> tasks_deque = {
		{1, 5}, {2, 3}, {3, 8}, {4, 1}
	};

	std::priority_queue<Task> tasks_queue = ({
		 {1, 5}, {2, 3}, {3, 8}, {4, 1}
	});

	std::cout << "Using deque:" << std::endl;
	scheduler_deque(tasks_deque);

	std::cout << "\nUsing priority_queue:" << std::endl;
	scheduler_queue(tasks_queue);

	return 0;
}
