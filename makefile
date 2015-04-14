ult: main.o clk.o
	g++ -o exe main.o clk.o
main.o: main.cpp Clk.h
	g++ -c main.cpp
clk.o: clk.cpp Clk.h
	g++ -c clk.cpp
clean:
	rm *.o
