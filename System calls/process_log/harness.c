#include <unistd.h>
#include <stdlib.h>
#include "process_log.h"
int* retrieve_set_level_params(int new_level)
{
        int* arr = (int*)calloc(3, sizeof(int));
        arr[0] = 436;
        arr[1] = 1;
        arr[2] = new_level;
        return arr;
}
int* retrieve_get_level_params()
{
        int* arr = (int*)calloc(2, sizeof(int));
        arr[0] = 435;
        arr[1] = 0;
        return arr;
}
int interpret_set_level_result(int ret_value)
{
        return ret_value;
}
int interpret_get_level_result(int ret_value)
{
        return ret_value;
}
int interpret_log_message_result(int ret_value)
{
        return ret_value;
}
