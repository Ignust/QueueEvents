#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <list>
#include <memory>
#include <queue>
#include <mutex>

#include "tEvent.hpp"
#include "IQueue.hpp"
#include "A.hpp"
#include "IReceiver.hpp"

class Queue :public IQueue
{
public:
    Queue();
    void pushEvent (tEvent event) override;
    void subscribe(std::unique_ptr<IReceiver> obj)override;
    void run();
    void processEvent(tEvent event);

private:
    std::queue<tEvent> mQueueEvent;
    std::unique_ptr<IReceiver> mA;
    std::mutex mMutex;
};

#endif // QUEUE_HPP
