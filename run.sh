
[[ -d ./cmake-build-debug ]] && rm -rf ./cmake-build-debug
mkdir -p ./cmake-build-debug
cmake -B ./cmake-build-debug
cmake --build ./cmake-build-debug
echo "----------------------------------------"
echo "------------COMPILATION DONE------------"
echo "----------------------------------------"
# Use following for Windows, delete #
# ./cmake-build-debug/Debug/SudokuProject.exe
# Use following for Mac or Linux, delete #
#./cmake-build-debug/SudokuProject
