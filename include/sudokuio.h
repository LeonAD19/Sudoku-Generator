#ifndef SUDOKUPROJECT_SUDOKUIO_H
#define SUDOKUPROJECT_SUDOKUIO_H
#include <vector>
#include <string>
using namespace std;

void createFolder(const string&);
void initDataFolder();
void boardToString(int**, string&);
bool writeSudokuToFile(int**, const string&);
void replaceCharacter(string&, char, char);
void extractNumbers(const string&, vector<int>&);
void fillBoard(const vector<int>&, int**);
int** readSudokuFromFile(const string&);
bool checkIfSolutionIsValid(int**);
vector<string> getAllSudokuInFolder(const string&);

#endif //SUDOKUPROJECT_SUDOKUIO_H
