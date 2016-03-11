APPFILES	= $(wildcard $(SRC)/*.cpp)
LIBFILES	= $(wildcard $(LIB)/*.cpp)


APPOBJS		= $(APPFILES:.cpp=.o)
LIBOBJS		= $(LIBFILES:.cpp=.o)

ALLOBJS		= $(APPOBJS) $(LIBOBJS) 

DEPENDS		= $(ALLOBJS:.o=.d)

