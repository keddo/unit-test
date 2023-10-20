#ifndef COUNTER_H
#define COUNTER_H

#include <stdbool.h>
/*
 * A very simple counter.
 */
struct Counter {
    int value;
};

/**
 * Instantiate a new counter.
 */
struct Counter *counter(void);

/**
 * Increment the value of the counter.
 */
void increment(struct Counter *);

/**
 * Get the current value of the counter.
 */
int value(struct Counter *);

int add (int a, int b);
bool test_add(int return_value, int expected);
bool test_counter(struct Counter *c, int expected);

#endif
