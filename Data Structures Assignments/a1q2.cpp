//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//void readfromfile(const string& filename, string**& inputarray, int& numrows, int& numcols)
//{
//    ifstream file(filename);
//    string value;
//
//    numrows = 0;
//    numcols = 0;
//
//    if (file.is_open()) 
//    {
//        while (getline(file, value)) 
//        {
//            numrows++;
//            numcols = max(numcols, static_cast<int>(count(value.begin(), value.end(), ' ') + 1));
//        }
//
//        inputarray = new string * [numrows];
//        for (int i = 0; i < numrows; ++i) {
//            inputarray[i] = new string[numcols];
//        }
//
//        file.clear();
//        file.seekg(0);
//        int row = 0;
//        while (getline(file, value)) 
//        {
//            int col = 0;
//            size_t pos = 0;
//            while ((pos = value.find(' ')) != string::npos) {
//                inputarray[row][col++] = value.substr(0, pos);
//                value.erase(0, pos + 1);
//            }
//            inputarray[row][col] = value;
//            row++;
//        }
//    }
//    else 
//    {
//        cout << "unable to open file!" << endl;
//        numrows = 0;
//        numcols = 0;
//    }
//}
//
//void compressarray(string** inputarray, int numrows, int numcols, int*& yesarray) {
//    yesarray = new int[numrows];
//
//    for (int i = 0; i < numrows; ++i) {
//        yesarray[i] = 0;
//        for (int j = 0; j < numcols; ++j)
//        {
//            if (inputarray[i][j] == "Yes") 
//            {
//                yesarray[i]++;
//            }
//        }
//    }
//}
//void reconstructarray(string** inputarray, int* carray, int numrows, int numcols) 
//{
//    for (int i = 0; i < numrows; ++i) 
//    {
//        for (int j = 0; j < numcols; ++j) 
//        {
//            if (j < carray[i]) 
//            { 
//                inputarray[i][j] = "Yes";
//            }
//            else {
//                inputarray[i][j] = "No";
//            }
//        }
//    }
//}
//
//
//void print(string** array, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//int main() 
//{
//    string filename = "input.txt";
//    string** inputarray;
//    int rows, cols;
//    int* yesarray;
//
//    readfromfile(filename, inputarray, rows, cols);
//    compressarray(inputarray, rows, cols, yesarray);
//
//    cout << "array is :" << endl;
//    for (int i = 0; i < rows; ++i) 
//    {
//        cout << yesarray[i] << " " << cols - yesarray[i] << endl;
//    }
//
//  
//    reconstructarray(inputarray, yesarray, rows, cols);
//
//    cout << endl << "arranged array:" << endl;
//    print(inputarray, rows, cols);
//
//    int count = 0;
//    for (int i = 0; i < rows; ++i) {
//        count += yesarray[i];
//    }
//    cout << endl << "total num of yes are: " << count << endl;
//
//    for (int i = 0; i < rows; ++i)
//    {
//        delete[] inputarray[i];
//    }
//    delete[] inputarray;
//    delete[] yesarray;
//
//    return 0;
//}
