//#include <iostream>
//using namespace std;
//const int N = 9;
//
//bool isValid(char board[N][N], int row, int col, char num) 
//{
//   
//    for (int i = 0; i < N; ++i) {
//        if (board[row][i] == num)
//            return false;
//    }
//
//   
//    for (int i = 0; i < N; ++i) {
//        if (board[i][col] == num)
//            return false;
//    }
//
//    int startRow = row - row % 3;
//    int startCol = col - col % 3;
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            if (board[startRow + i][startCol + j] == num)
//                return false;
//        }
//    }
//
//    return true;
//}
//
//bool solveRec(char board[N][N], int row, int col) {
//    if (row == N - 1 && col == N) {
//        return true;
//    }
//
//    if (col == N) {
//        row++;
//        col = 0;
//    }
//
//    if (board[row][col] != '.') {
//        return solveRec(board, row, col + 1);
//    }
//
//    for (char num = '1'; num <= '9'; ++num) {
//        if (isValid(board, row, col, num)) 
//        {
//            board[row][col] = num; 
//
//            if (solveRec(board, row, col + 1))
//            {
//
//                return true;
//            }
//            board[row][col] = '.'; 
//        }
//    }
//
//    return false; 
//}
//
//bool solvebox(char board[N][N]) {
//    return solveRec(board, 0, 0);
//}
//
//int main() {
//    char board[N][N] = {
//        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
//        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
//        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
//        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
//        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
//        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
//        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
//        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
//        {'.', '.', '.', '.', '8', '.', '.', '7', '8'}
//    };
//
//    if (solvebox(board)) {
//        cout << "Solution:\n";
//        for (int i = 0; i < N; ++i) {
//            for (int j = 0; j < N; ++j) {
//                cout << board[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
//    else {
//        cout << "No solution exists.\n";
//    }
//
//    return 0;
//}
