#include <iostream>
using namespace std;

class BunchOfKeys {
  public:
    // ctor
    BunchOfKeys();
    
    // member function
    void add();
    void shake();
    
  private:
    int n_keys; // jumlah kunci yg ada
};
