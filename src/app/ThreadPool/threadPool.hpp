// ThreadPool.hpp
#ifndef THREAD_POOL_HPP
#define THREAD_POOL_HPP

#include <thread>
#include <mutex>
#include <queue>
#include <condition_variable>
#include <functional>
#include <vector>
#include <atomic>

class ThreadPool {
private:
    std::vector<std::thread> workers;
    std::queue<std::function<void()>> tasks;
    std::mutex queue_mutex;
    std::condition_variable condition;
    std::atomic<bool> stop;

public:
    explicit ThreadPool(size_t threads);
    ~ThreadPool();
    void enqueue(std::function<void()> task);
};

#endif
