.SUFFIXES : .cc .o

CXX = g++
LD = ld						# link
CXXFLAGS = -W -Wall			# c++ compile option
OBJECTS = postfix.o main.o
SRCS = main.cc postfix.cc	# source file
HEADERS = postfix.h			# header files
INC = 						# add a path of header file for include
LIBS =						# add required library for linking

TARGET = postfix				# binary file

all : $(TARGET)

$(TARGET) : $(OBJECTS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean :
	rm -rf *.o $(TARGET)
