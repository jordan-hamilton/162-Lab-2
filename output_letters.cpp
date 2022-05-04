#include "output_letters.hpp"

using std::ofstream;

/*********************************************************************
** Description: This function accepts a output file stream variable
** and a pointer to an array of integers containing letter frequency
** for all 26 characters in the alphabet. The array is looped through
** to format the contents of the array into the output file stream
** variable, using a static cast to convert the index of the array
** into the matching ASCII code for each letter's frequency. The
** return type is void.
*********************************************************************/
void output_letters(ofstream &outputFile, int* count) {

  for (int i = 0; i < 26; i++) {
    outputFile << static_cast<char>(i + 97) << ": " << count[i] << "\n";
  }

}
