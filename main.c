#include "src/eArray.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    eArray *array = new_eArray();
    char *test = "Hello World";
    append_eArray(array, (eData *)test);
    printf("%s\n", test);
    printf("%s", (char *)get_eArray(array, 0));
}