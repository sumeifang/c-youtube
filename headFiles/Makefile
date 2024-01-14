
SRCS := $(wildcard *.cpp)
CC := g++
BINS := $(SRCS:%.cpp=%)

all: compile 


compile: ${BINS} vector.h
	${CC} main.o vector.o -o vector1

clean:
	@rm -rf vector1
	@rm -rf *.o

listCPPFiles:
	@echo $(SRCS)
	@echo ${BINS}

%: %.cpp
	${CC} -c $<
#main: main.cpp
#	${CC} -c main.cpp
#vector: vector.cpp vector.h
#	${CC} -c vector.cpp