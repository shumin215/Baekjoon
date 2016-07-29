.SUFFIXES : .cc .o

CXX = g++
LD = ld						# link
CXXFLAGS = -W -Wall			# c++ compile option
OBJECTS = turret.o main.o
SRCS = main.cc turret.cc	# source file
HEADERS = 					# header files
INC = 						# add a path of header file for include
LIBS =						# add required library for linking

TARGET = turret				# binary file

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean :
	rm -rf *.o $(TARGET)
