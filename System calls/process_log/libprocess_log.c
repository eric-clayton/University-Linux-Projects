#include <unistd.h>
#include "process_log.h"
int get_proc_log_level()
{
        return syscall(435);
}
int set_proc_log_level(int new_level)
{
        return syscall(436, new_level);
}
int proc_log_message(int level, char *message)
{
        return syscall(PROC_LOG_CALL, message, level);
}
