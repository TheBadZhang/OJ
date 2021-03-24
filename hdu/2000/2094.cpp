#include <iostream>
#include <set>
#include <string>

int main () {

    std::string A, B;
    int n;
    std::set<std::string> AA, BB;
    while (std::cin >> n) {
        while (n--) {
            std::cin >> A >> B;
            AA.insert (A); AA.insert (B);
            BB.insert (B);
        }
        if (AA.size() - BB.size() == 1) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
        AA.clear (); BB.clear ();
    }



    return 0;
}