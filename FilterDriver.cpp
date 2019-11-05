#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "BaseballStatistic.h"
#include "Date.h"
#include "Filter.h"

using namespace std;

void swap(int, int, vector<BaseballStatistic>&);
void sort(vector<BaseballStatistic>&);
int search(vector<BaseballStatistic>, string, string);
void loadFile(vector<BaseballStatistic>&);
void printHeading();



int main()
{
    
    vector<players> baseList;
   // created file stream to open data from baseball stats 
    ifstream inFile;
    inFile.open("BStats.csv");
    
    
   
   // reading in the line 
    while (inFile) {
        string player_line;
        inFile >> player_line;
        istringstream ss(player_line);
    {
     //adding from the line into temporary values  
        while(ss)
       {
        getline(ss, team_name, ',');
        getline(ss, jersey_num, ',');
        getline(ss, fname, ',');
        getline(ss, lname, ',');
        getline(ss, b_year, ',');
        getline(ss, b_month, ',');
        getline(ss, b_day, ',');
        getline(ss, batArm, ',');
        getline(ss, throwArm, ',');
        getline(ss, Atbats, ',');
        getline(ss, batAvg, ',');
        getline(ss, t_HR, ',');
        getline(ss, t_RBI, ',');
        getline(ss, t_SB, ',');
        getline(ss, t_OPS, ',');
        getline(ss, t_ERA, ',');
        getline(ss, pos, ',');
  // pushing players into vector created
        players.push_back(temp);
       }
    }
    
   
    
    return 0;
}

