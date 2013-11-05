#ifndef _SMTP_H
#define _SMTP_H

#include "pigeon.h"

typedef struct
{
	char *from;
	char *to;
	char *cc;
	char *subject;
	char *data;
}SMTP_INFO;

int smtp_init(SMTP_INFO *smtp_info);

int smtp_login(USER_INFO *user,int sockfd);

int smtp_get_status(int sockfd);

int smtp_send(int sockfd,SMTP_INFO *smtp_info);

int smtp_write(SMTP_INFO *smtp_info);

int smtp_rewrite(SMTP_INFO *smtp_info);

int smtp_error(int code);

void smtp_quit(int sockfd);

#endif
