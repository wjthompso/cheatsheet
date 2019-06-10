#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void invertedTriangle(int width) {
	int space = 0;
	for (int i = 0; i < width; i++) {
		for (int s = 0; s < space; s++) {
			cout << " ";
		}
		for (int j = 0; j < (width - space); j++) {
			cout << "*";
		}
		cout << "\n";
		space++;
	}
}


int main(int argc, char *argv[]) {
	if (argc!=2) {
    cerr << "Usage: " << argv[0] << " width height" << endl;
    exit(1);
  }

  int width = stoi(argv[1]);
  invertedTriangle(width);
  return 0;
}