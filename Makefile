CC=gcc
CFLAGS=-std=c99 -Wall

# additional flags for gcov
TESTFLAGS=-fprofile-arcs -ftest-coverage

test: test.c counter.h counter.c add.c assert_test_cases.c
	# build the test
	$(CC) $(CFLAGS) $(TESTFLAGS) -o test test.c counter.c add.c assert_test_cases.c

    # run the test, which will generate test-counter.gcna and test-counter.gcno
	./test

    # compute how test is covering counter.c
	gcov -c -p test-counter

clean:
	rm -f *.o test *.gcov *.gcda *.gcno