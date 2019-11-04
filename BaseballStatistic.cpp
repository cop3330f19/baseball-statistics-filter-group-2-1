#include "BaseballStatistic.h"
#include "Date.h"
using namespace std;


BaseballStatistic::BaseballStatistic(string fN, string lN, string pos, int jNum,
                                     string tN, int atBat, int homers, int runsBatIn, char batg, char throwg, 
                                     int stopb, double battingAvg, int bm, int bd, int by, double opstop, double eravg)
{
    firstName = fN;
    lastName = lN;
    teamName = tN;
    position = pos;
    
    jerseyNum = jNum;
    atBats = atBat;
    hr = homers;
    rbi = runsBatIn;
    sb = stopb;
    
    batting = batg;
    throwing = throwg;
    
    battingAverage = battingAvg;
    ops = opstop;
    era = eravg;
    
    dob = new Date(by, bm, bd);
}

void setFirstName(string fName)
{firstName = fName;}

void setLastName(string lName)
{lastName = lName;}

void setTeamName(string tName)
{teamName = tName;}

void setJerseyNum(int jNumb)
{jerseyNum = jNumb;}

void setPosition(string pos)
{position = pos;}

void setBatting(char bat)
{batting = bat;}

void setThrowing(char thro)
{throwing = thro;}

void setAtBats(int aBats)
{atBats = aBats;}

void setBattingAverage(double bAvg)
{battingAverage = bAvg;}

void setHR(int homeR)
{hr = homeR;}

void setRBI(int runsBI)
{rbi = runsBI;}

void setSB(int sBat)
{sb = sBat;}

void setOPS(double op)
{ops = op;}

void setERA(double er)
{era = er;}

getFirstName()const
{return firstName;}

string getLastName()const
{return lastName;}

sring getTeamName()const
{return teamName;}

int getJerseyNum()const
{return jerseyNum;}

string getPosition()const
{return position;}

int getAge()const
{}
    
char getBatting()const
{return batting;}

char getThrowing()const
{return throwing;}

int getAtBats()const
{return atBats;}

double getBattingAverage()const
{return battingAverage;}

int getHR()const
{return hr;}

int getRBI()const
{return rbi;}

int getSB()const
{return sb;}

double getOPS()const
{return ops;}

double getERA()const
{return era;}

void print()const
