all:
	g++ src/*.cpp
	./a.out > data.out
	gnuplot plot.plot
	ps2pdf problem1output.ps
	evince problem1output.pdf
