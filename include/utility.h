#ifndef SUDOKUPROJECT_UTILITY_H
#define SUDOKUPROJECT_UTILITY_H
#include <iostream>
#include <string>
using namespace std;
string getFileName(int, const string &, const string &);
void createAndSaveNPuzzles(const int&, const string&, const string&);
void solveAndSaveNPuzzles(const int &, const string&, const string&, const string&);
#endif //SUDOKUPROJECT_UTILITY_H
