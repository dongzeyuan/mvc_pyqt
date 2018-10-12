################################################################################
DVR_MAIN_PATH=/home/dm8/project/tsto/logo/hrd-1642_161219/dvr_app
RELATEIVE_PATH=mid/dbfileman

# Where to find user code.
DBMAN_USER_DIR = $(GTEST_DIR)/$(RELATEIVE_PATH)


################################################################################
# Builds a sample test.  A test should link with either gtest.a or
# gtest_main.a, depending on whether it defines its own main()
# function.


DEFINES += -DUSE_NEW_SYSTEM_LOG

mid_dbman_vssdb.o : $(DVR_MAIN_PATH)/$(RELATEIVE_PATH)/mid_dbman_vssdb.c
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -I$(DVR_MAIN_PATH)/include -I$(GTEST_DIR)/mid/include -c $(DVR_MAIN_PATH)/$(RELATEIVE_PATH)/mid_dbman_vssdb.c

mid_dbman_vssdb_ut.o : $(DBMAN_USER_DIR)/mid_dbman_vssdb_ut.cpp \
                     $(GTEST_HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $(DEFINES) -I$(DVR_MAIN_PATH)/include $(DBMAN_USER_DIR)/mid_dbman_vssdb_ut.cpp

mid_test : mid_dbman_vssdb.o mid_dbman_vssdb_ut.o
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread -lgtest_main $^ -o $@






################################################################################
TXT_USER_DIR=$(GTEST_DIR)/textreader

TextReader.o : $(TXT_USER_DIR)/TextReader.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $(TXT_USER_DIR)/TextReader.cpp

TextReader_test.o : $(TXT_USER_DIR)/TextReader_test.cpp \
                     $(GTEST_HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $(TXT_USER_DIR)/TextReader_test.cpp

TextReader_test : TextReader.o TextReader_test.o 
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread -lgtest_main $^ -o $@
	



################################################################################
USER_DIR_SUFFER=$(GTEST_DIR)/suffer

seller.o : $(USER_DIR_SUFFER)/seller.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $(USER_DIR_SUFFER)/seller.cpp

seller_test.o : $(USER_DIR_SUFFER)/seller_test.cpp \
                     $(GTEST_HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $(USER_DIR_SUFFER)/seller_test.cpp

seller_test : seller.o seller_test.o 
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread -lgtest_main $^ -o $@
	
	
