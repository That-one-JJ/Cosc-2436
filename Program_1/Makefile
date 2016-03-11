# Makefile for Linked List class

# application names ---------------------------------------
APP		= demo


# project directory names ---------------------------------
SRC 	= src
LIB		= lib
TESTS	= tests
INCS	= includes

# do not modify anything below this point -----------------
CFLAGS	= -I $(INCS)
include makevars/system.mak
include makevars/files.mak

DEMOAPP = $(APP)$(EXT)


# build targets follow ------------------------------------

all:	$(DEMOAPP) 



$(DEMOAPP):		$(APPOBJS) $(LIBOBJS)
	$(CXX) -o $@ $^ $(LDFLAGS)

docs:
	cd documentation && make html

# implicit rules follow
%.o:	%.cpp
	$(CXX) -c $(CFLAGS) $< -o $@



clean:
	$(RM) $(ALLOBJS) $(DEMOAPP) 

-include $(DEPENDS)
