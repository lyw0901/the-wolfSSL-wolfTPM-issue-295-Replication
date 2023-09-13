/**
  ******************************************************************************
  * File Name          : wolfSSL.I-CUBE-wolfTPM_conf.h
  * Description        : This file provides code for the configuration
  *                      of the wolfSSL.I-CUBE-wolfTPM_conf.h instances.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __WOLFSSL_I_CUBE_WOLFTPM_CONF_H__
#define __WOLFSSL_I_CUBE_WOLFTPM_CONF_H__

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/

/**
	MiddleWare name : wolfSSL.I-CUBE-wolfTPM.2.7.0
	MiddleWare fileName : wolfSSL.I-CUBE-wolfTPM_conf.h
	MiddleWare version :
*/
/*---------- WOLFTPM_CONF_WOLFCRYPT -----------*/
#define WOLFTPM_CONF_WOLFCRYPT      1

/*---------- WOLFTPM_CONF_HW_SPI -----------*/
#define WOLFTPM_CONF_HW_SPI      0

/*---------- WOLFTPM_CONF_DEBUG -----------*/
#define WOLFTPM_CONF_DEBUG      0

/* ------------------------------------------------------------------------- */
/* Platform */
/* ------------------------------------------------------------------------- */
#define NO_FILESYSTEM
#define NO_MAIN_DRIVER
#define WOLFTPM_EXAMPLE_HAL

/* ------------------------------------------------------------------------- */
/* Enable Features */
/* ------------------------------------------------------------------------- */
#undef WOLFTPM2_NO_WOLFCRYPT
#if defined(WOLFTPM_CONF_WOLFCRYPT) && WOLFTPM_CONF_WOLFCRYPT == 0
    #define WOLFTPM2_NO_WOLFCRYPT
#endif

#undef USE_HW_SPI_CS
#if defined(WOLFTPM_CONF_HW_SPI) && WOLFTPM_CONF_HW_SPI == 1
    #define USE_HW_SPI_CS
#endif

/* ------------------------------------------------------------------------- */
/* Debugging */
/* ------------------------------------------------------------------------- */
#if defined(WOLFTPM_CONF_DEBUG) && WOLFTPM_CONF_DEBUG == 1
    #define DEBUG_WOLFTPM
#endif

#ifdef __cplusplus
}
#endif
#endif /* WOLFSSL_I_CUBE_WOLFTPM_CONF_H_H */

/**
  * @}
  */

/*****END OF FILE****/
