/*
 * AES.h
 *
 *  Created on: Feb 13, 2024
 *      Author: mdrab
 */

#ifndef INC_AES_H_
#define INC_AES_H_
#define INPUT_SIZE 10
#include <stdio.h>
#include <stdint.h>

uint32_t *crypt_aes(uint32_t* text, uint32_t *cipher, uint32_t mlen, uint32_t *key, uint8_t mode);


#endif /* INC_AES_H_ */
