#ifndef _LOONGSON_H
#define _LOONGSON_H

#include <stdint.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/mman.h>

#define PSTR(s) s
#define sei()
#define cli()
#define ISR(m) void ##m(void)
#define pgm_read_byte_near(s) *s
#endif