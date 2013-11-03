#ifndef _CONFIG_H
#define _CONFIG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HOME_PATH getenv("HOME")
#define CONFIG_FILE ".pigeon/config"
#define CONFIG_PATH_LEN strlen(HOME_PATH)+strlen(CONFIG_FILE)+2

typedef struct
{
	char *pop_ser;
	char *smtp_ser;
	unsigned short pop_poer;
	unsigned short smtp_port;
	char *username;
	char *passwd;
	unsigned int apop;
	unsigned int pop_ssl;
	unsigned int smtp_ssl;
}CONFIG;

int mkdir_config(void);

int open_config(CONFIG *conf);

void close_config(void);

int read_config(CONFIG *conf);

int save_config(CONFIG *conf);

void free_config(CONFIG *conf);

int is_config_saved(void);

#endif
