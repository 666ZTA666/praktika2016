all: hsv.cpp 
	g++ -ggdb `pkg-config --cflags opencv` -o hsv hsv.cpp `pkg-config --libs opencv`
