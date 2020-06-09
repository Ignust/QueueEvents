#include"Queue.hpp"


#include <thread>
#include <pthread.h>

//------------------------------------------------------------------------------------------
Queue::Queue()
    :mQueueEvent()
    , mMutex()
//------------------------------------------------------------------------------------------
{

}

//------------------------------------------------------------------------------------------
void Queue::pushEvent(tEvent event)
//------------------------------------------------------------------------------------------
{
    std::lock_guard<std::mutex> lock (mMutex);
    mQueueEvent.push(event);
}

//------------------------------------------------------------------------------------------
void Queue::subscribe(std::unique_ptr<IReceiver> obj)
//------------------------------------------------------------------------------------------
{
    mA=std::move(obj);
}


//------------------------------------------------------------------------------------------
void Queue::run()
//------------------------------------------------------------------------------------------
{
    while (!mQueueEvent.empty()) {
        mMutex.lock();
        tEvent tempEvent = mQueueEvent.front();
        mQueueEvent.pop(); 
        mMutex.unlock();
        processEvent(tempEvent);
    }
}

//------------------------------------------------------------------------------------------
void Queue::processEvent(tEvent event)
//------------------------------------------------------------------------------------------
{
    //std::thread th([&](){mA->receiveEvent(event.fancID_, event.buffer);});
    //th.detach();
    //std:: thread th2 ([](){});
    //pthread_create([](){});
    return;
    switch(event.receiverID_){
    case CLASS_A:
    {
        //std::thread th([&](){mA->receiveEvent(event.fancID_, event.buffer);});
        //th.detach();
        //std::thread th(&IReceiver::receiveEvent,mA.get(),static_cast<uint8_t>(event.fancID_), event.buffer );
        //th.join();
    }
        break;
    case CLASS_B:
        break;
    case DEFAULT_NAME:
        break;
    }
}


