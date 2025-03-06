/*
 * easyi2c.h
 *
 *  Created on: Mar 6, 2025
 *      Author: le quang anh
 */

#ifndef EASYHAL_EASYI2C_H_
#define EASYHAL_EASYI2C_H_

#include "main.h""


void I2C_Scan_Bus();

HAL_StatusTypeDef i2c_read_reg(uint8_t device_addr, uint8_t reg_addr, uint16_t* pRegValue);
HAL_StatusTypeDef i2c_write_reg(uint8_t device_addr, uint8_t reg_addr, uint16_t Value);

#endif /* EASYHAL_EASYI2C_H_ */
