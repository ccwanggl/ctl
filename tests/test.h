#pragma once

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <assert.h>

#ifdef LONG
#define TEST_MAX_SIZE  (4096)
#define TEST_MAX_LOOPS (8096)
#else
#define TEST_MAX_SIZE  (1024)
#define TEST_MAX_LOOPS (1024)
#endif

#define TEST_SIGN(a) ((a < 0) ? (-1) : (a > 0) ? (1) : (0))

#define TEST_PASS(f) printf("%s: PASSED\n", f)
