HEADERS = $(wildcard *.h)
CPP_SOURCE = $(wildcard *.cpp)

OBJ = ${CPP_SOURCE:.c=.o}

%.o : %.cpp ${HEADERS}
	g++ -c $< -o $@


clean:
	rm *.o
