#include <iostream>

#include <can_streambuf.hpp>
#include <chassis.hpp>


#include <chrono>
#include <thread>

#include <deque>

#include <iomanip>

int main(int, char**)
{
    auto can = can_streambuf("can0", 0x200);
    std::iostream io(&can);
    robomaster::command::chassis chassis(io);

    while (true)
    {
        chassis.send_heartbeat();
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    

   
    
        
    

    return 0;
}

