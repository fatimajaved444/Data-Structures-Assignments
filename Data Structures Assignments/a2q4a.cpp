//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//bool isRepetitionPattern(const string& str)
//{
//    stack<char> charStack;
//
//    for (char c : str) {
//        if (c == '0') {
//            charStack.push(c);
//        }
//        else if (c == '1') {
//          
//            if (charStack.empty()) {
//                return false; 
//            }
//
//            charStack.pop();
//        }
//        else {
//            return false;
//        }
//    }
//
//    return charStack.empty();
//}
//
//int main() {
//    string input;
//    cout << "Enter a string of 0's and 1's starting with 0's: ";
//    cin >> input;
//
//    if (isRepetitionPattern(input))
//    {
//        cout << "The string follows the repetition pattern.\n";
//    }
//    else {
//        cout << "The string does not follow the repetition pattern.\n";
//    }
//
//    return 0;
//}
