DVR_DIR = /home/dm8/project/tsto/logo/hrd-1642_161219/dvr_app
INC = $(DVR_DIR)/include \
		$(DVR_DIR)/mid/include \
		$(DVR_DIR)/hal/include \
		$(DVR_DIR)/gal \
		$(DVR_DIR)/mid/neofm
		
INC_PATHS = $(foreach d, $(INC), -I$d)

#SUB_FLAGS = $(INC_PATHS) -DNUM_CHANNELS=16 -DPPC_83XX=1 -D_FILE_OFFSET_BITS=64
SUB_FLAGS = $(INC_PATHS) -DNUM_CHANNELS=16 -DPPC_83XX=1 -DUSE_NTP=1

SRCS = search.cpp
OBJS = $(SRCS:%.cpp=%.o) \
		TimeLineContainer.o \
		FileList.o wrap_api.o mid_util_halt.o \
		CReadSlot.o 
#		mid_fman_hdd.o mid_fman_init.o \

GTEST_SRCS = search_unittest.cpp
GTEST_OBJS = $(GTEST_SRCS:%.cpp=%.o)



TARGET = search_unittest

##############################################################################
.SUFFIXES : .cpp .o
all: $(TARGET)

depend :
	gccmakedep $(SRCS)
	
search_clean : clean_depend
	rm -f $(OBJS) $(GTEST_OBJS) $(TARGET_OBJS) $(TARGET)

clean_depend : 
	rm -f *.bak



#ifeq ($(origin GTEST_DIR), undefined)
#	USER_DIR=./
#else
#	USER_DIR=$(GTEST_DIR)/search/
#endif

USER_DIR=$(GTEST_DIR)/search

###############################################################################

search.o :
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(SUB_FLAGS) -c $(USER_DIR)/search.cpp

TimeLineContainer.o : $(DVR_DIR)/mid/neofm/TimeLineContainer.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(SUB_FLAGS) -c $^
	
CReadSlot.o : $(DVR_DIR)/mid/neofm/CReadSlot.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(SUB_FLAGS) -c $^

#mid_fman_init.o : $(DVR_DIR)/mid/fileman/mid_fman_init.c
#	$(CPP) $(CPPFLAGS) $(CPPFLAGS) $(SUB_FLAGS) -c $^

FileList.o : $(DVR_DIR)/mid/neofm/FileList.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(SUB_FLAGS) -c $^ 

wrap_api.o : $(DVR_DIR)/mid/utility/wrap_api.c
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(SUB_FLAGS) -c $^
	 
mid_fman_hdd.o : $(DVR_DIR)/mid/fileman/mid_fman_hdd.c
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(SUB_FLAGS) -c $^
	 
mid_util_halt.o : $(DVR_DIR)/mid/utility/mid_util_halt.c
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(SUB_FLAGS) -c $^

search_unittest.o : $(USER_DIR)/search_unittest.cpp \
                     $(GTEST_HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(SUB_FLAGS) -c $(USER_DIR)/search_unittest.cpp	
	
search_unittest : $(OBJS) search_unittest.o
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread -lgtest_main $^ -o $@
	
	