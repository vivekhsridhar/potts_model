CXX = g++

all: potts

potts: main.o random.o spin.o utils.o vector2D.o
	$(CXX) -o $@ $^ -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_videoio

%.o: %.cpp
	$(CXX) "-I/usr/include/opencv4" -c -o $@ $<