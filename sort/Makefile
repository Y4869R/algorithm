CC	= gcc
CPP	= g++
RM	= rm -rf

## source file path
SRC_PATH	:= .
## get all source files
SRCS	+= $(wildcard $(SRC_PATH)/*.cpp)

## all .o based on all .cpp
OBJS        := $(SRCS:.cpp=.o)
## target exec file name
TARGET     := test

CFLAGS  = --std=c++11

## need libs, add at here
LIBS :=
## used headers  file path
INCLUDE_PATH := .
## used include librarys file path
LIBRARY_PATH := /lib

## get all library path
LDFLAGS += $(foreach lib, $(LIBRARY_PATH), -L$(lib))
## get all librarys
LDFLAGS += $(foreach lib, $(LIBS), -l$(lib))

MIAOPASITARGET	= quick_sort.o

all:
	$(CPP) -c $(CFLAGS) $(SRCS)
	$(CPP) $(CFLAGS) -o $(TARGET) $(MIAOPASITARGET)

.PHONY : clean
clean:
	$(RM) $(TARGET) $(OBJS)
