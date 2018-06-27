/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GYRO_SPI_H
#define __GYRO_SPI_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x_type.h"
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

void Push_SPI_Data(u16 dat);
void Clear_SPI_Data(void);

void CovertData(void);

u16 getGyroX(void);
u16 getGyroY(void);
u16 getGyroZ(void);

u16 getACC_X(void);
u16 getACC_Y(void);
u16 getACC_Z(void);


s16 getGyroX_raw(void);
s16 getGyroY_raw(void);
s16 getGyroZ_raw(void);

s16 getACC_X_raw(void);
s16 getACC_Y_raw(void);
s16 getACC_Z_raw(void);


void Gyro_Configuration(void);
void ACC_Configuration(void);


//void set_GYRO_ACC_Enable(FunctionalState NewState);
void __GYRO_ACC_READ_ISR(void);


#endif /* __GYRO_SPI_H */

