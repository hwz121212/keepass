/*
 * Copyright 1998-2016 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

/*-
 * #included by:
 *    cbc_enc.c  (DES_cbc_encrypt)
 *    des_enc.c  (DES_ncbc_encrypt)
 */

#include "des_local.h"

#ifdef CBC_ENC_C__DONT_UPDATE_IV
void DES_cbc_encrypt(const unsigned char *in, unsigned char *out, long length,
	DES_key_schedule *_schedule, DES_cblock *ivec, int enc);
#else
void DES_ncbc_encrypt(const unsigned char *in, unsigned char *out,
	long length, DES_key_schedule *_schedule,
	DES_cblock *ivec, int enc);
#endif