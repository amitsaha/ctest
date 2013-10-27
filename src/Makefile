# Basic Makefile to run the tests

test:	test_ctest test_print test_sum
	./test_ctest
	./test_print
	./test_sum

test_ctest:
	gcc -I . -o test_ctest tests/test_ctest.c

test_print:
	gcc -I . -o test_print tests/test_print.c ctest.c print.c

test_sum:
	gcc -I . -o test_sum tests/test_sum.c sum.c

clean:
	rm test_sum test_ctest test_print

.PHONY: test
