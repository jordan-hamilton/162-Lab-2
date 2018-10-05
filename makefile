# Source: http://web.engr.oregonstate.edu/~rookert/cs162/03.mp4

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = main.o count_letters.o helperFunctions.o output_letters.o
SRCS = main.cpp count_letters.cpp helperFunctions.cpp output_letters.cpp
HEADERS = count_letters.hpp helperFunctions.hpp output_letters.hpp

lab2: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o lab2

$(OBJS): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $(@:.o=.cpp)

clean:
	rm *.o lab2
