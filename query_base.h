#include <string>
#include <iostream>

using std::string;

class QueryBase {
  virtual void eval();
  virtual string req();
};
