#ifndef _MYCOMMON_
#define _MYCOMMON_

#include "pthread.h"
#include "common.h"
//#define puerta pthread_mutex_t
#define crear_puerta(m) pthread_mutex_init(&m,NULL)
#define cerrar_puerta(m) pthread_mutex_lock(&m)
#define abrir_puerta(m) pthread_mutex_unlock(&m)
#define destruir_puerta(m) pthread_mutex_destroy(&m)

#endif
