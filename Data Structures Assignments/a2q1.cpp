//#include <iostream>
//#include <string>
//using namespace std;
//string keypad[] = { "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };
//
//void generateCombinations(string digits, string current = "", int index = 0) {
//   
//    if (index == digits.length())
//    {
//        cout << current << " "; 
//        return;
//    }
//
//    string letters = keypad[digits[index] - '0'];
//
//    for (char letter : letters)
//    {
//        generateCombinations(digits, current + letter, index + 1);
//    }
//}
//
//int main() {
//    string digits;
//    cout << "Enter sequence of numbers from mobile keypad: ";
//    cin >> digits;
//
//    cout << "Possible combinations of words: ";
//    generateCombinations(digits);
//
//    return 0;
//}
