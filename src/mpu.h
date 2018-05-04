#ifndef __MPU_H
#define __MPU_H

#include <stdint.h>

#include "clock.h"
#include "setup.h"

uint8_t mpu_who_am_i(void);

void mpu_setup(void);
int16_t get_gyro_z_raw(void);
float get_gyro_z_dps(void);

#endif /* __MPU_H */
