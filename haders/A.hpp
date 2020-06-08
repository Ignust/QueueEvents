#ifndef A_HPP
#define A_HPP



#include "IReceiver.hpp"
#include "IQueue.hpp"
#include"memory"

class A: public IReceiver
{
public:
    A() = delete;
    A(std::shared_ptr<IQueue> PoolEvent);

    void receiveEvent(uint8_t fancId , std::vector<uint8_t>& buffer ) override;

    void fanc1();
    void fanc2(std::vector<uint8_t>& buffer);
private:
    std::shared_ptr<IQueue> mPoolEvent;
};

#endif // A_HPP
