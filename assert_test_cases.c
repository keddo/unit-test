#include "counter.h"

bool test_add(int return_value, int expected)
{
    return return_value == expected;
}

bool test_counter(struct Counter *c, int expected)
{
   return (c->value) == expected;
}