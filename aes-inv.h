/* aes-inv.h
 *
 * aes_inv() calculates multiplicative inverse in Galois field GF(2^8) with
 * reduction polynomial 0x11B.
 */
#ifndef AES_INV_H
#define AES_INV_H

#include <stdint.h>

uint8_t aes_inv(uint8_t a);

#endif /* !defined(AES_INV_H) */
