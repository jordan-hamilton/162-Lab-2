#include "count_letters.hpp"

using std::ifstream;
using std::string;

/*********************************************************************
** Description: This function accepts a input file stream variable
** and a pointer to an array of integers to store letter frequency
** for all 26 characters in the alphabet. The array is looped through
** to ensure the frequency count is 0 before reading the input file
** stream variable. Then, one line of the input file stream is read
** and temporarily stored in a string. The string is looped through,
** converting lowercase letters in the string to uppercase to
** prevent case sensitivity. Then, the value stored in the array's
** index corresponding to ASCII code of any alphabetic character is
** incremented by one. The return type is void.
*********************************************************************/
void count_letters(ifstream &inputFile, int* count) {

  string contents;

  for (int i = 0; i < 26; i++) {
    count[i] = 0;
  }

  getline(inputFile, contents);

  for (int i = 0; i < contents.length(); i++) {
    if (islower(contents[i])) {
      contents[i] = toupper(contents[i]);
    }
    if (isalpha(contents[i])) {
      count[(contents[i] - 65)] += 1;
    }
  }

}
