/*
 *  Copyright (c) 2017, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file
 *   This file includes front end module platform-specific functions.
 *
 */

#ifndef PLATFORM_FEM_H_
#define PLATFORM_FEM_H_

#include <stdint.h>

/**
 * Initialization of the FEM.
 *
 */
void nrf5FemInit(void);

/**
 * Deinitialization of the FEM.
 *
 */
void nrf5FemDeinit(void);

/**
 * Enable the FEM.
 *
 */
void nrf5FemEnable(void);

/**
 * Disable the FEM.
 *
 */
void nrf5FemDisable(void);

#if OPENTHREAD_CONFIG_NRF5_WITH_SKY66112
/**
 * Retrieve the state of the CHL pin on the SKY66112.
 *
 * @retval	true	CHL is high (SKY66112 is in high-gain mode)
 * @retval	false	CHL is low (SKY66112 is in low-gain mode)
 */
bool nrf5RadioGetChl(void);

/**
 * Set the state of the CHL pin on the SKY66112.  Putting the pin in
 * a high state (`aState=true`) enables high-gain mode.
 *
 * @param	aState	State of the CHL pin.
 */
void nrf5RadioSetChl(bool aState);
#endif // OPENTHREAD_CONFIG_NRF5_WITH_SKY66112

#endif // PLATFORM_FEM_H_
