STRINGS = strings1.o strings2.o addstring.o size.o at1.o at2.o destructor.o rawstrings.o

#memory/memory.ih.gch: memory/memory.ih
#	g++ -std=c++11 -x c++-header $<

%.o: strings/%.cc strings/strings.h
	g++ -std=c++11 -Wall -c -o $@ $<

main: main.cc $(STRINGS) main.h
	g++ -std=c++11 -Wall -lstdc++ -o main main.cc $(STRINGS) main.h
