#ifndef FILTER_H
#define FILTER_H
#include "BaseballStatistic.h"
#include <string>
#include <vector>
using namespace std;
class Filter{

  public: // vectors
  void swap(vector<BaseballStatistic>&, int, int); // swap function
  static std::vector<BaseballStatistic> search(std::vector<BaseballStatistic>&, std::string, std::string); // search and recursion     
  void namesort(vector<BaseballStatistic>&); //sorts names  
  void teamsort(vector<BaseballStatistic>&);
};

#endif

