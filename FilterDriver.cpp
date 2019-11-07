#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

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
    
    vector<BaseballStatistic> baseList;
    
    ifstream inFile;
    inFile.open("BStats.csv");
    
    string team_name, fname, lname, pos;
    int jersey_num, b_year, b_month, b_day, atbat, t_HR, t_RBI, t_SB;
    char batArm, throwArm;
    double batAvg, t_OPS, t_ERA;
    
    string holder;
    int c = 0;
    while (inFile.eof() == 0) 
    {
        getline(inFile, team_name, ',');
        
        //Input jersey number into holder string
        getline(inFile, holder, ',');
        //Stream holder value to string stream
        stringstream convertj(holder); 
        //puts string converted to int to jersey_num
        convertj >> jersey_num;
        
        
        getline(inFile, fname, ',');
        getline(inFile, lname, ',');
        
        
        getline(inFile, holder, ',');
        stringstream convertBY(holder);
        convertBY >> b_year;
        
        
        getline(inFile, holder, ',');
        stringstream convertBM(holder);
        convertBM >> b_month;
        
        
        getline(inFile, holder, ',');
        stringstream convertBD(holder);
        convertBD >> b_day;
        
        char held;
        inFile.get(batArm);
        inFile.get(held); //For the ',' after
        
        inFile.get(throwArm);
        inFile.get(held); //For the ',' after
        
        
        getline(inFile, holder, ',');
        stringstream convertAB(holder);
        convertAB >> atbat;
        
        
        getline(inFile, holder, ',');
        stringstream convertBA(holder);
        double avgbats;
        convertBA >> avgbats;
        
        
        
        getline(inFile, holder, ',');
        stringstream convertHR(holder);
        convertHR >> t_HR;
        
        
        getline(inFile, holder, ',');
        stringstream convertRBI(holder);
        convertRBI >> t_RBI;
        
        
        getline(inFile, holder, ',');
        stringstream convertSB(holder);
        convertSB >> t_SB;
        
        
        getline(inFile, holder, ',');
        stringstream convertOPS(holder);
        double opsin;
        convertOPS >> opsin;
        
        
        getline(inFile, holder, ',');
        stringstream convertERA(holder);
        convertERA >> t_ERA;
        
        
        getline(inFile, pos, ',');
        
        BaseballStatistic first (fname, lname, pos, jersey_num, team_name,
                               atbat, t_HR, t_RBI, batArm, throwArm,
                               t_SB, avgbats, b_month, b_day, b_year,
                               opsin, t_ERA);
        
        //Left Here!!!
        /*(baseList+c) = first;
        baseList[c].setFirstName(first.getFirstName);*/
        
        baseList.push_back(first);
    }
    
    
    return 0;
}