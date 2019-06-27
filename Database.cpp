////
//// Created by peter on 6/24/19.
////
//
//#include "Database.h"
//
//#include "main.cpp"
//#include <iostream>
//#include <pqxx/pqxx>
//
//class connection;
//
//using namespace std;
//using namespace pqxx;
//int main( argc, char* argv[]){
//    try {
//        connection C("prepared =  user = peter password = 1234 \
//      hostaddr = 127.0.0.1 port = 5432");
//        if  (C.is_open()) {
//            cout << "Opened database successfully: " << C.prepared() << endl;
//        } else {
//            cout << "Can't open database" << endl;
//            return 1;
//        }
//        C.disconnect ();
//    } catch (const std::exception &e) {
//        cerr << e.what() << std::endl;
//        return 1;
//    }
//    }
