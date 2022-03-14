

#include "U_facilitate.h"

uintmax_t PF_systemTick;

    void
    delayHandler(uint32_t time, void (*HandleF)(void))
{
     uint32_t now = PF_systemTick;
     uint32_t totalDelay = now + time;
     while (PF_systemTick < totalDelay)
     {
          HandleF();
     }
}
