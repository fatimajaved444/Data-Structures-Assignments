//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstdlib> 
//#include <ctime>   
//#include <limits>  
//
//using namespace std;
//
//class receiver {
//    vector<queue<int>> sqn;
//
//public:
//    receiver() : sqn(5) {} 
//
//    void addrequest(int rid, int reqno)
//    {
//        if (rid >= 0 && rid < sqn.size()) 
//        {
//            sqn[rid].push(reqno);
//        }
//        else
//        {
//            cout << "resource id is invalid: " << rid << endl;
//        }
//    }
//
//    void servicerequestatresource(int rid) {
//        if (rid >= 0 && rid < sqn.size() && !sqn[rid].empty()) 
//        {
//            sqn[rid].pop();
//        }
//        else {
//            cout << "resource id is invalid or empty queue: " << rid << endl;
//        }
//    }
//
//    void printqueues() {
//        for (int i = 0; i < sqn.size(); i++) 
//        {
//            cout << "resource " << i << ": ";
//            queue<int> tempqueue = sqn[i]; 
//            while (!tempqueue.empty()) {
//                cout << tempqueue.front() << " ";
//                tempqueue.pop();
//            }
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//    srand(static_cast<unsigned int>(time(nullptr))); 
//
//    receiver receiver;
//    vector<int> srates(5); 
//
//    cout << "please enter 5 servicing rates :" << endl;
//    for (int i = 0; i < 5; i++) 
//    {
//        cin >> srates[i];
//    }
//
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//    int timecounter = 0;
//    int requestcounter = 0; 
//
//  
//    while (true) {
//      
//        if (timecounter % 500 == 0) {
//            int resourceid = rand() % 5; 
//            receiver.addrequest(resourceid, ++requestcounter);
//        }
//
//        for (int i = 0; i < 5; i++) {
//            if (timecounter % srates[i] == 0) {
//                receiver.servicerequestatresource(i);
//            }
//        }
//
//        if (timecounter % 250 == 0) {
//          // system("clear"); 
//            receiver.printqueues();
//        }
//
//        timecounter += 250;
//
//        if (timecounter > 5000) { 
//            break;
//        }
//        cout << endl<<endl;
//    }
//
//    return 0;
//}