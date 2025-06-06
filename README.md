# Sudoku-Generator
          Overall Objective:
The main objective of your project is to generate Sudoku puzzles, solve them, and then either print or save the puzzles and solutions. The project uses several components to handle board generation, validation and solving, file input/output (I/O), and utility operations (such as naming files). In summary, it creates a Sudoku board (or multiple puzzles), processes them (solves or validates), and writes them to files in designated folders (and optionally prints them on the console).

        - I would create an empty sudoku bord all filled with 0
            <pre>
            0   0   0   |   0   0   0   |   0   0   0
            0   0   0   |   0   0   0   |   0   0   0 
            0   0   0   |   0   0   0   |   0   0   0 
            .........................................
            0   0   0   |   0   0   0   |   0   0   0 
            0   0   0   |   0   0   0   |   0   0   0 
            0   0   0   |   0   0   0   |   0   0   0 
            .........................................
            0   0   0   |   0   0   0   |   0   0   0 
            0   0   0   |   0   0   0   |   0   0   0 
            0   0   0   |   0   0   0   |   0   0   0
            </pre>
        - Then I would select either diagonal from left to right or diagonal from right to left, lets say left-to-right
            <pre>
            x   x   x   |   0   0   0   |   0   0   0
            x   x   x   |   0   0   0   |   0   0   0 
            x   x   x   |   0   0   0   |   0   0   0 
            .........................................
            0   0   0   |   x   x   x   |   0   0   0 
            0   0   0   |   x   x   x   |   0   0   0 
            0   0   0   |   x   x   x   |   0   0   0 
            .........................................
            0   0   0   |   0   0   0   |   x   x   x 
            0   0   0   |   0   0   0   |   x   x   x 
            0   0   0   |   0   0   0   |   x   x   x
            </pre>
        - Then I would run three for loops
            - k -> 0 to <4, right after k loop I would define index = 0;
            - i -> k*3 to <k*3+3
            - j -> k*3 to <k*3+3
          - Inside the most inner loop define int vector with element 1, 2, 3, 4, 5, 6, 7, 8, and 9
          - Random shuffle that vector
          - now within the innermost loop I would grab that vector, say, numbers[index], 
          - I would assign numbers[index] to [i][j] th position of board
          - I would increment the index
          - This should yield something like this(note: this is just an example):
            <pre>
            1   4   5   |   0   0   0   |   0   0   0
            2   3   6   |   0   0   0   |   0   0   0 
            9   8   7   |   0   0   0   |   0   0   0 
            .........................................
            0   0   0   |   1   4   9   |   0   0   0 
            0   0   0   |   7   2   8   |   0   0   0 
            0   0   0   |   6   5   3   |   0   0   0 
            .........................................
            0   0   0   |   0   0   0   |   1   6   4 
            0   0   0   |   0   0   0   |   2   7   9 
            0   0   0   |   0   0   0   |   8   3   5
            </pre>
      - Now I would use solveBoard from sudoku to solve the board
      - Once the board is solved, I would run another 2 loops
          - i -> 0 to <9
          - j -> 0 to <9
        - Inside the most inner loop I would use random number generator
          - Option a, something like, int_random_number = ....???... // this should give you random number from 1 to 100, discrete value
            - If you choose this option I would make all [i][j] board piece 0 whenever random_number > 50, this way we eliminate 50% of the board piece
          - Option b, something like, float_random_number = ....???... // this should give you random number from 0 to 1, continuous value
            - If you choose this option I would make all [i][j] board piece 0 whenever random_number > 0.5, this way we eliminate 50% of the board
      - Once the board is created, I would return that board and I am done
