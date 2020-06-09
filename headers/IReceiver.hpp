#ifndef IRECEVIVER_HPP
#define IRECEVIVER_HPP

#include <vector>
#include <cstdint>



class IReceiver
{
public:
    IReceiver(){}
    virtual~IReceiver(){}

    virtual void receiveEvent (uint8_t fancId , std::vector<uint8_t>& buffer ) = 0;

};

#endif // IRECEVIVER_HPP
