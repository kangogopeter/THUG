////
//// Created by peter on 6/24/19.
////
//
//#include <iostream>
//#include "data.h"
//#include <pqxx/pqxx>
//
//using namespace std;
//using namespace pqxx;
//
//int main(int argc, char* argv[]) {
//    char * sql;
//
//    try {
//        connection C("dbname =plus_plus  user =peter password =1234 \
//      hostaddr = 127.0.0.1 port = 5432");
//        if (C.is_open()) {
//            std::cout << "Opened database successfully: " << C.dbname() << std::endl;
//        } else {
//            std::cout << "Can't open database" << std::endl;
//            return 1;
//        }
//
//        /* Create a transactional object. */
//        work W(C);
//        /* Create  SQL UPDATE statement */
//        sql = "UPDATE COMPANY set SALARY = 25000.00 where ID=1";
//        /* Execute SQL query */
//        W.exec( sql );
//        W.commit();
//        std::cout << "Records updated successfully" << std::endl;
//
//        /* Create SQL SELECT statement */
//        sql = "SELECT * from COMPANY";
//
//        /* Create a non-transactional object. */
//        nontransaction N(C);
//
//        /* Execute SQL query */
//        result R( N.exec( sql ));
//
//        /* List down all the records */
//        for (result::const_iterator c = R.begin(); c != R.end(); ++c) {
//           std::cout << "ID = " << c[0].as<int>() << std::endl;
//            std::cout << "Name = " << c[1].as<std::string>() << std::endl;
//            std::cout << "Age = " << c[2].as<int>() << std::endl;
//            std::cout << "Address = " << c[3].as<std::string>() << std::endl;
//            std::cout << "Salary = " << c[4].as<float>() << std::endl;
//        }
//        std::cout << "Operation done successfully" << std::endl;
//        C.disconnect ();
//    } catch (const std::exception &e) {
//        std::cerr << e.what() << std::endl;
//        return 1;
//    }
//
//    return 0;
//}