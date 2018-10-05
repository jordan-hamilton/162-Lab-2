#include <iostream>
#include <fstream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main() {

  ifstream inputFile;
  string fileName;
  string contents;

  do {
    std::cout << "Please enter the name of a file to read:" << endl;
    getline(cin, fileName);
    inputFile.open(fileName);
  } while (!inputFile);
  inputFile.close();
  return 0;
}