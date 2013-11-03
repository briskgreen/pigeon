#ifndef _PIGEON_H
#define _PIGEON_H

#include <mysock/mysock.h>
#include "base64.h"
#include "config.h"

#define PIGEON_FILE ".pigeon/"
#define PIGEON_PATH_LEN strlen(HOME_PATH)+strlen(PIGEON_FILE)+2

typedef struct
{
	char *user_name;
	char *passwd;
}USER_INFO;

typedef struct
{
	char *server;
	unsigned short port;
	USER_INFO *user;
}PIGEON_INFO;

void pigeon_error(int error_code);

int pigeon_get_user_info(USER_INFO *user);

int pigeon_get_pop_info(PIGEON_INFO *pop_info);

int pigeon_get_smtp_info(PIGEON_INFO *smtp_info);

#endif
