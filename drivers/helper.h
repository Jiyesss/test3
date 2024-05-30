#ifndef __HELPER_H__
#define __HELPER_H__

#include <sys/types.h> 

<<<<<<< HEAD
#define RQ_DONE_FILE  "RQ_DONE"
=======
>>>>>>> 6444c1377fd93b81b10eed8ec25d0ab9ff56c1e0
#define SEM_NAME  "/sem"
#define SHM_ORDER "/order"
#define ORDER_PARENT 1
#define ORDER_CHILD 0

#define PANE_LEFT   0
#define PANE_RIGHT  2

#define BUF_SZ      256
#define TASK_CNT    32
#define CLOCK       0.5
#define EXIT_TMOUT  3

<<<<<<< HEAD
int is_wsl();
int get_cols();
long epoch_now();
void clear_line();
=======
int get_cols();
long epoch_now();
>>>>>>> 6444c1377fd93b81b10eed8ec25d0ab9ff56c1e0
int is_invalid(char *str);
void system_d(char *fmt, ...);
void parse_cmd(char *cmd, char **args);
char *get_random_str(const char *prefix);
void shell(char *cmd, char *fmt, void *ptr);
<<<<<<< HEAD
void read_file(const char *path, void (*hdlr)());
void init_timer(void (*hdlr)(), int signo, double second);
=======
void init_timer(void (*hdlr)(), int signo, double second);
void read_file(const char *path, const char *fmt, void *ptr);
>>>>>>> 6444c1377fd93b81b10eed8ec25d0ab9ff56c1e0

#define EQ(buf, str) (strncmp(buf, str, strlen(str)) == 0)

#endif