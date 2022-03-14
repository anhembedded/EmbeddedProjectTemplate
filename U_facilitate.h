#ifndef __U_FACILITATE_H__
#define __U_FACILITATE_H__

#include "stdint.h"

/* BASIC BITWISE MACRO */
#define BIT_SET(a, b) ((a) |= (1UL << (b)))
#define BIT_CLEAR(a, b) ((a) &= ~(1UL << (b)))
#define BIT_TOGGLE(a, b) ((a) ^= (1UL << (b)))
#define BIT_READ(a, b) (!!((a) & (1UL << (b)))) // '!!' to make sure this returns 0 or 1
#define SET_BIT(a, b) ((a) |= (1UL << (b)))
#define CLEAR_BIT(a, b) ((a) &= ~(1UL << (b)))
#define TOGGLE_BIT(a, b) ((a) ^= (1UL << (b)))
#define READ_BIT(a, b) (!!((a) & (1UL << (b)))) // '!!' to make sure this returns 0 or 1
#define CLEAR_REG(REG) ((REG) = (0x0))
#define WRITE_REG(REG, VAL) ((REG) = (VAL))
#define READ_REG(REG) ((REG))
#define MODIFY_REG(REG, CLEARMASK, SETMASK) WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))
#define LOWBYTE(w) ((uint8_t)((w)&0xff))
#define HIGHBYTE(w) ((uint8_t)((w) >> 8))
#define CONSTRAIN(amt, low, high) ((amt) < (low) ? (low) : ((amt) > (high) ? (high) : (amt)))




#endif // __U_FACILITATE_H__