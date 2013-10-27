Unit testing in C
-----------------

This repository consists of a few .c files and a header file which are
an experiment to write unit tests for C programs. 

What can you do with this?
==========================

These are the tests you can carry out as of now:

- ``testAlmostEquals``: Say you want to compare two numbers and you
  are happy if they are within ``1e-5`` magnitude of each other, then
  you would use this test.

- ``testEquals``: Test for equality of two numbers

- ``testStringEquals``: Test for equality of two strings

- ``testStdout``: Sometimes you may want to test if the output of your
  program is something that you expect it to be. This test will allow
  you do do that.

Please see ``ctest.h`` for the source and see the ``tests`` directory
for examples of using some of these tests.

Source code
===========

Source tree::

    .
    ├── ctest.c
    ├── ctest.h
    ├── examples
    ├── Makefile
    ├── print.c
    ├── print.h
    ├── sum.c
    ├── sum.h
    └── tests

The functionality of the program is provided via ``ctest.h`` and 
``ctest.c`` files. In fact, ``ctest.c`` currently performs only one
task, i.e. patching the standard output to enable the functioning of
``testStdout``. All the tests are implemented as macros  in
``ctest.h``.

Trying out
==========

To compile and run the tests in ``tests``, execute ``make test`` in
``src`` after cloning the repository.


Contact
=======

If you find this useful, have a suggestion or want to discuss
something, please contact `@echorand
<http://twitter.com/echorand>`__.
