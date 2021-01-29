EXEFILE = ducks
CXXFLAGS = -c -Wall
SOURCES = $(wildcard *.cc)
OBJECTS = $(SOURCES:.cc=.o)
INCLUDES = -Iheaders

$(EXEFILE): $(OBJECTS)
	g++ $^ -o $@ $(INCLUDES)

%.o: %.cc
	g++ $(CXXFLAGS) $^ -o $@ $(INCLUDES)

clean:
	rm *.o $(EXEFILE)

.PHONY: clean