CXX = g++
AR = ar
GCOV = gcov
CFLAGS += -MMD

ifeq ($(OS), Windows_NT)
    EXT = .exe
    RM = del
    CFLAGS += 
    CXX = g++
    LDFLAGS += 
    PREFIX = 
else
    EXT =
    PREFIX = ./
    RM = rm -f
    UNAME_S := $(shell uname -s)
    ifeq ($(UNAME_S), Linux)
        CFLAGS += 
    endif
    ifeq ($(UNAME_S), Darwin)
        CFLAGS += 
    endif
endif

