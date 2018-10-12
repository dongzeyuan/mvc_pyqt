############################################################
# 1. choose architecture

#ARCH = ppc
#ARCH = arm


############################################################
# 2 choose dvr_app path
DVR_APP_PATH = /home/dm8/project/tsto/logo/hrd-1642-161219/dvr_app



############################################################

ifeq ($(ARCH), arm)
	#CC = arm-linux-g++
	CC = arm-hisiv200-linux-gcc
	STRIP = arm-linux-strip
else ifeq ($(ARCH), ppc)
	CC = ppc_83xx-g++
	STRIP = ppc_83xx-strip
else
	CC=g++
	STRIP=strip
endif

TARGET = EVEdump

LIBS = -I$(DVR_APP_PATH)/include \
			-I$(DVR_APP_PATH)/mid/neofm \
			-I$(DVR_APP_PATH)/hal/include


OBJS = EVEget.o EVEdump.o

CFLAGS  = -Wall \
		-D_FILE_OFFSET_BITS=64 \
		-D_LARGEFILE_SOURCE \
		-D_GNU_SOURCE

DFLAGS =


all : $(TARGET)

EVEdump : $(OBJS)
	$(CC) -m32 -o $@ $(OBJS) $(DFLAGS)
	$(STRIP) $@
	
.c.o : $(OBJS)
	$(CC) $(CFLAGS) -m32 -c $<  $(LIBS)

clean : 
	rm -f $(OBJS)
	rm -f $(TARGET)
