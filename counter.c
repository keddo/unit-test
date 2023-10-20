/**
 * A simple counter.
 */
#include <stdlib.h>

#include "counter.h"


struct Counter * counter(void)
{
    struct Counter* c = malloc(sizeof(struct Counter));
    c->value = 0;

    return c;
}

void increment(struct Counter* c)
{
    c->value++;
}

int value(struct Counter* c)
{
    return c->value;
}
