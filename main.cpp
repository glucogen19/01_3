#include <cstdio>
#include <iostream>
#include <fstream>

class Road {
    public:
        double Length;
        int Width;
	void data(double l, int w) {
	Length = l;
	Width = w;
	}
};

int main() {
    setlocale(LC_ALL,"rus");
    Road road;
	double rl;
	int wl;
    std::ifstream file;  
    file.open("text.txt");
    if (file.is_open()) {
    file >> rl >> wl;
    road.data(rl, wl);
    }
    else {
    	std::cout << "Open failed" << std::endl;
    	return 1;
	}
    std::cout << "Length:" << road.Length << std::endl;
    std::cout << "Width:" << road.Width << std::endl;
    file.close();
    return 0;
}
