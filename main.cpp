#include <iostream>
#include "Queue.hpp"
#include "A.hpp"

using namespace std;

int main()
{
    std::shared_ptr <Queue> Queue_ = std::make_shared<Queue>();
    std::unique_ptr <IReceiver> A_ = std::make_unique<A>(Queue_);
    Queue_->subscribe(std::move(A_));

    return 0;
}
