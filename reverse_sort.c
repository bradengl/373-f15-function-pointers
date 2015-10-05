#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#include "sort.h"

//__attribute__ ((weak))
int compare(int a, int b) {
	    return b - a;
}
