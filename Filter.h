#ifndef FILTER_H
#define FILTER_H
#include "BaseballStatistic.h"
#include <string>
#include <vector>
using namespace std;
class Filter {

  public: // vectors
  static void swap(vector<BaseballStatistic>&, int, int); // swap function
  static void namesort(vector<BaseballStatistic>&); //sorts names  
  static int search(vector<BaseballStatistic>&, std::string, std::string, std::string, std::string); // search and recursion

};
#endif
