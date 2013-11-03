#ifndef _POP3_H
#define _POP3_H

#include "pigeon.h"

typedef struct
{
	char *recv_from;
	char *from;
	char *subject;
	char *to;
	char *date;
	char *data;
}POP_INFO;

int pop3_login(USER_INFO *user);

#endif
