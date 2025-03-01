/*
 * bsp.h
 *
 *  Created on: Apr 9, 2022
 *      Author: gianfranco
 */

#ifndef BSP_INC_BSP_H_
#define BSP_INC_BSP_H_

#include <stdint.h>
#include <stdbool.h>

#include "error.h"
#include "actuators.h"
#include "log.h"
#include "sensor.h"
#include "serial.h"
#include "indicators.h"


/**
 * @brief Initializes BSP.
 *
 * @retval BSP status.
 */
bsp_status_t BSP_init(void);


/**
 * @brief Returns SysTick value.
 *
 * @retval SysTick value.
 */
uint32_t BSP_get_timer(void);


/**
 * @brief Error handler.
 *
 */
void BSP_error_handler(void);


#endif /* BSP_INC_BSP_H_ */
