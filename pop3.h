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

int pop3_init(USER_INFO *pop_info);

int pop3_login(USER_INFO *user,int sockfd);

int pop3_get_status(int sockfd);

int pop3_message_list(int sockfd);

int pop3_message_read(int sockfd,POP_INFO *pop_info,int n);

int pop3_get_message_num(int sockfd);

int pop3_message_delete(int sockfd,int n);

void pop3_error(int code);

void pop3_quit(int sockfd);

#endif
