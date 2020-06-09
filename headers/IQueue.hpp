#ifndef IQUEUE_HPP
#define IQUEUE_HPP

#include <memory>

#include "tEvent.hpp"
#include "IReceiver.hpp"


class IQueue
{
public:
    IQueue(){}
    virtual ~IQueue(){}
    virtual void pushEvent (tEvent evant ) = 0;
    virtual void subscribe(std::unique_ptr<IReceiver> obj) = 0;
};

#endif // IQUEUE_HPP
