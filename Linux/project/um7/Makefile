###############################################################
#
# Purpose: Makefile for "um7"
# Author.: Interbotix Labs
# Version: 0.1
# License: GPL
#
###############################################################

TARGET = um7

CXX = g++
INCLUDE_DIRS = -I../../include -I../../../Framework/include
CXXFLAGS +=	-O2 -DLINUX -g -Wall -fmessage-length=0 $(INCLUDE_DIRS) -std=c++11
LIBS += -lpthread -lrt

OBJS =	main.o


all: darwin.a $(TARGET)

darwin.a:
	make -C ../../build

$(TARGET): $(OBJS) ../../lib/darwin.a
	$(CXX) -o $(TARGET) $(OBJS) ../../lib/darwin.a $(LIBS)
	
clean:
	rm -f $(OBJS) $(TARGET)





