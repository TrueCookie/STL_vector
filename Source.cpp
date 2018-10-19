#include <iostream>
#include <iomanip>
#include <vector>
#include <conio.h>
#include <algorithm>

void fill_v(std::vector<float> &v);
void print_v(std::vector<float> &v);
void sort4(std::vector<float> &v);

int main() {
	std::vector<float> v1(20);

	fill_v(v1);
	print_v(v1);
	sort4(v1);
	print_v(v1);

	std::cout << "end";
	_getch();
	return 0;
}

void fill_v(std::vector<float> &v) {
	for (int i = 0; i < v.size(); i++) {
		v.at(i) = (rand() % 100 + 1) + (float)(rand() % 99 + 1) / 100;
	}
}

void print_v(std::vector<float> &v) {
	std::cout << std::fixed;
	std::cout.precision(1);
	for (int i = 0; i < v.size(); i++) {
		std::cout << std::setw(5) << v.at(i) << " ";
	}std::cout << std::endl << std::endl;
}

void sort4(std::vector<float> &v) {
	int frst = 0, scd = 4;
	for (int i = 0; i < (v.size())/4; i++) {
		std::sort(v.begin() + frst, v.begin() + scd);
			frst = frst + 4;
			frst + 4 <= v.size() ? scd = frst + 4 : scd = v.size();
	}
}





