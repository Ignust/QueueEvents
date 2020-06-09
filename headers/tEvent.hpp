#ifndef TEVENT_HPP
#define TEVENT_HPP

#include <cstdint>
#include <vector>

enum E_ReceiverName {
    DEFAULT_NAME = 0,
    CLASS_A = 1,
    CLASS_B = 2
};

enum E_FancID {
    BEGIN_A = 0,
    FANC_1,
    FANC_2,
    END_A = 100
};

struct tEvent {
    E_ReceiverName receiverID_;
    E_FancID fancID_;
    std::vector<uint8_t> buffer;
};

#endif // TEVENT_HPP
