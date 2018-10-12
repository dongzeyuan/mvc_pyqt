include gtest.mk

# Where to find user code.
#USER_DIR = ../samples


# All tests produced by this Makefile.  Remember to add new tests you
# created to the list.
TESTS = mid_test TextReader_test seller_test


# House-keeping build targets.

all : $(TESTS)

clean :
	rm -f *.o
	rm -f $(TESTS)


include tests.mk


include search.mk
	
	