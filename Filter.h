
#ifndef FILTER_H
#define FILTER_H


#include "BaseballStatistic.h"
#include <string>
#include <vector>



class Filter
{
   public:
   
   static void swap(vector<BaseballStatistic>&,int,int);
   
   static void namesort(vector<BaseballStatistic>&);
   
   static int search(vctor<BaseballStatistic>&,std::string, std::string, std::string);
   
         
};
#endif
