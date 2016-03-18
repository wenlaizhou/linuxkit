#include <pthread.h>

typedef struct {
  char * socket9p_root;
  char * fusermount;
  char * pidfile;
  char * logfile;
  char * mount_trigger;
  char * trigger_log;
  pthread_mutex_t fd_lock;
  int logfile_fd;
  int trigger_fd;
} parameters;

typedef struct {
  parameters * params;
  long id;
} connection_t;

void lock(char *const descr, pthread_mutex_t * mutex);

void unlock(char *const descr, pthread_mutex_t * mutex);
