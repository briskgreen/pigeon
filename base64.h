#ifndef _BASE64_H
#define _BASE64_H

#include <string.h>
#include <stdlib.h>

unsigned char *base64_encode(const char *src,const int src_len);

unsigned char *base64_decode(const char *src,const int src_len);

#endif
