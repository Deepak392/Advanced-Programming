BOARD_SIZE = 9
MIN_NUMBER = 1
MAX_NUMBER = 9
BOX_SIZE = 3


class Sudoku:

    def __init__(self, table):
        self.table = table

    def run(self):
        if self.solve(0, 0):
            self.show_solution()
        else:
            print('There is no solution...')

    def solve(self, row, col):
        # base-case for recursion
        if row == BOARD_SIZE:
            col += 1
            # we have considered all the cells - end of algorithm
            if col == BOARD_SIZE:
                return True
            else:
                # hop to the next column so re-initialize row=0
                row = 0

        # skip filled cells
        if self.table[row][col] != 0:
            return self.solve(row + 1, col)

        # consider all the numbers from 1-9
        for num in range(MIN_NUMBER, MAX_NUMBER + 1):
            if self.is_valid(row, col, num):
                # we assign the number to that location
                self.table[row][col] = num

                if self.solve(row + 1, col):
                    return True

                # BACKTRACK (re-initialize cell to be 0 - empty)
                self.table[row][col] = 0

        return False

    def is_valid(self, row, col, num):
        # if the given number is already in the column: the number
        # cannot be part of the solution
        for i in range(BOARD_SIZE):
            if self.table[i][col] == num:
                return False

        # if the given number is already in the row: the number
        # cannot be part of the solution
        for j in range(BOARD_SIZE):
            if self.table[row][j] == num:
                return False

        # if the given number is already in the box: the number
        # cannot be part of the solution
        box_row_offset = (row // 3) * BOX_SIZE
        box_col_offset = (col // 3) * BOX_SIZE

        # all the 9 items of the given box (3x3 box)
        for i in range(BOX_SIZE):
            for j in range(BOX_SIZE):
                if self.table[box_row_offset + i][box_col_offset + j] == num:
                    return False

        return True

    def show_solution(self):
        print('\n'.join(str(i) for i in self.table))


if __name__ == '__main__':
    sudoku = [[3, 0, 6, 5, 0, 8, 4, 0, 0],
              [5, 2, 0, 0, 0, 0, 0, 0, 0],
              [0, 8, 7, 0, 0, 0, 0, 3, 1],
              [0, 0, 3, 0, 1, 0, 0, 8, 0],
              [9, 0, 0, 8, 6, 3, 0, 0, 5],
              [0, 5, 0, 0, 9, 0, 6, 0, 0],
              [1, 3, 0, 0, 0, 0, 2, 5, 0],
              [0, 0, 0, 0, 0, 0, 0, 7, 4],
              [0, 0, 5, 2, 0, 6, 3, 0, 0]]

    algorithm = Sudoku(table=sudoku)
    algorithm.run()
