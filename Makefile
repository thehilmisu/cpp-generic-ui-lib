CXX = g++
CXXFLAGS = -std=c++17 -Wall
LDFLAGS = -lpng -lX11 -lGL -lGLU

BUILD_DIR = build

OBJ := $(patsubst %.cpp,%.o,$(wildcard *.cpp))

TARGET = $(BUILD_DIR)/mainwindow

all: ${OBJ}
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) *.o $(LDFLAGS) -o $(TARGET)
	mv *.o build/

clean:
	rm -f $(BUILD_DIR)/*.o $(TARGET) *.o *.pcap
	rm -Rf build

.PHONY: all clean