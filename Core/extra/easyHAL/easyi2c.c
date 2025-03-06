/*
 * easyi2c.c
 *
 *  Created on: Mar 6, 2025
 *      Author: le quang anh
 */

#include "easyi2c.h"
#include "main.h"
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"

void I2C_Scan_Bus()
{
	printf("start scan i2c address\r\n");
	for (int addr = 0; addr < 127; addr++){
		if(HAL_I2C_IsDeviceReady(&hi2c1, addr, 1, 10) == HAL_OK)
		{
			printf("found i2c device at 0x%02x\r\n", addr);
		}
	}
	printf("scan finish\r\n");
}

HAL_StatusTypeDef i2c_read_reg(uint8_t device_addr, uint8_t reg_addr, uint16_t* pRegValue)
{
	HAL_StatusTypeDef ret = 0;

	return ret;
}

HAL_StatusTypeDef i2c_write_reg(uint8_t device_addr, uint8_t reg_addr, uint16_t Value)
{
	HAL_StatusTypeDef ret = 0;

	return ret;
}
