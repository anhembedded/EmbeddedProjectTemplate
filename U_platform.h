#ifndef __U_PLATFORM_H__
#define __U_PLATFORM_H__

#include "U_facilitate.h"

// PF

#define PF_delay_us(a) Delay_us(a)
#define PF_delay_ms(a) Delay_ms(a)
#define PF_delay_Cyc(a) Delay_Cyc(a)
#define PF_NOP // do nothing

intmax_t PF_millis(void);

typedef uint8_t PF_pin_type_t;
typedef uint8_t PF_port_type_t;



#endif // __U_PLATFORM_H__