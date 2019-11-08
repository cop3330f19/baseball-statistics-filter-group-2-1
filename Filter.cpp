#include "Filter.h"
#include "BaseballStatistic.h"
#include "StringHelper.h"
#include "Date.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

//Swap Function
void Filter::swap(vector<BaseballStatistic>& bList, int oIdx, int nIdx)
  {
    BaseballStatistic temp = bList[oIdx]; // //temporary baseball variable to hold the old value during swap
    bList[oIdx] = bList[nIdx]; // assign the min_idx(element to be moved) to it's position
    bList[nIdx] = temp; //assign the element previously at the now sorted postion
  }

// Search Function
std::vector<BaseballStatistic> Filter::search(std::vector<BaseballStatistic>& bList, std::string key , std::string filter){
    
    bool valid;
    vector<BaseballStatistic> result;
    
    for(int i = 0; i < bList.size(); i++)
    { 
        valid = false;
        if(filter == "T"){
            if(bList[i].getTeamName() == key)
                valid = true;
        }
        else if(filter == "P"){
            if(bList[i].getPosition() == key)
                valid = true;
        }
        else if(filter == "B"){
            if(bList[i].getBatting() == key[0])
                valid = true;
        }
        else if(filter == "BA"){
            if(bList[i].getBattingAverage() == atof(key.c_str()))
                valid = true;
        }
        else if(filter == "H"){
            if(bList[i].getHR() == atoi(key.c_str()))
                valid = true;
        }
        else if(filter == "R"){
            if(bList[i].getRBI() == atoi(key.c_str()))
                valid = true;
        }
        else if(filter == "S"){
            if(bList[i].getSB() == atoi(key.c_str()))
                valid = true;
        }
        else if(filter == "O"){
            if(bList[i].getOPS() == atoi(key.c_str()))
                valid = true;
        }
        else if(filter == "E"){
            if(bList[i].getERA() == atoi(key.c_str()))
                valid = true;
        }
        if(valid)
           result.push_back(bList[i]);
    }
    return result;
}




//option 1 sort
void Filter::namesort(vector<BaseballStatistic>& bList)
{
  
  std::string firstName, lastName, teamName, position;
	int jerseyNum, atBats, hr, rbi, sb;
	char batting, throwing;
	double battingAverage, ops,era;
    int day, month, year;
    
    int i, j, min_idx; 
    
  
  for (i = 0; i < bList.size()-1; i++) 
  {

        min_idx = i;     

        for (j = i+1; j < bList.size(); j++) 
           if (

              (bList[j].getLastName().compare(bList[min_idx].getLastName()) < 0)
             
              || (bList[j].getLastName().compare(bList[min_idx].getLastName()) == 0 && bList[j].getFirstName().compare(bList[min_idx].getFirstName() ) < 0)

             || (bList[j].getLastName().compare(bList[min_idx].getLastName()) == 0 && bList[j].getFirstName().compare(bList[min_idx].getFirstName()) == 0 && bList[j].getPosition() < bList[min_idx].getPosition()) 
              )
       

            min_idx = j; 

        swap(bList, min_idx, i);
     
      
}
}
  //option 2 sort
void Filter::teamsort(vector<BaseballStatistic>& bList)
{

	  int i, j, min_idx; 

    for (i = 0; i < bList.size()-1; i++) 
    { 

        min_idx = i; 

        
        for (j = i+1; j < bList.size(); j++) 

          if (

             (bList[j].getTeamName().compare(bList[min_idx].getTeamName()) < 0)

             || (bList[j].getTeamName().compare(bList[min_idx].getTeamName()) == 0 && bList[j].getJerseyNum() < bList[min_idx].getJerseyNum())

              )

		  min_idx = j; 

      

        swap(bList, min_idx, i);

         } 
}
  


