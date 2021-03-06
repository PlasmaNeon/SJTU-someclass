#include <map>
#include "std_lib_facilities.h"
using namespace std;
class Polynomial{

public:
    Polynomial(string s);
    double getValue(double x);
    void printDerivation();
    void printPolynomial();
    void printValueAtX(double x);

    friend void div(Polynomial &diviend, Polynomial &divisor, 
                    map<int, float> &res, map<int, float> &remain);
private:
    map<int, double> saved;
    map<int, double> der;
    bool isvalid;
    bool isValidChar(char c){
        if (isdigit(c) || c == '.' || c == '+' || c == '^' || c == '-' || c == 'x')
            return true;
        else return false;
    }
    void print(map<int, double> &m);
    void derivation();
};

void printMap(const map<int, float> &m);