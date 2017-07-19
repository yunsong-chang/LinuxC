/* main.c */
#include <stdio.h>
#include "ret_ptr.h"

int main(void)
{
     printf("%s %s\n", get_a_day_buf(0), get_a_day_buf(1));
     printf("%s %s\n", get_a_day_origin(0), get_a_day_origin(1));
     return 0;
}
