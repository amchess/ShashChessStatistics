/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

inline int getWinProbability(int value, int depth){
    double winrateToMove=double(0.5 + 1000 / (1 + std::exp((((((0.3367760 * (std::min(240, depth) / 64.0) + -4.30175627) * (std::min(240, depth) / 64.0) + 33.08810557) * (std::min(240, depth) / 64.0)) + 365.60223431) - (std::clamp(double(value), -4000.0, 4000.0))) / ((((-2.50471102 * (std::min(240, depth) / 64.0) + 15.96509799) * (std::min(240, depth) / 64.0) + -14.33066859) * (std::min(240, depth) / 64.0)) + 71.42705250))));
    double winrateOpponent=double(0.5 + 1000 / (1 + std::exp((((((0.3367760 * (std::min(240, depth) / 64.0) + -4.30175627) * (std::min(240, depth) / 64.0) + 33.08810557) * (std::min(240, depth) / 64.0)) + 365.60223431) - (std::clamp(double(-value), -4000.0, 4000.0))) / ((((-2.50471102 * (std::min(240, depth) / 64.0) + 15.96509799) * (std::min(240, depth) / 64.0) + -14.33066859) * (std::min(240, depth) / 64.0)) + 71.42705250))));
    double winrateDraw=1000-winrateToMove-winrateOpponent;  
    return ((double)(winrateToMove + winrateDraw/2)/10);
}

int main()
{
    int value=0;//you can consider it from 0 to 1000
    int depth=0;//from 0 to 240
    cout<<"winProbability=";
    cout<<getWinProbability(value, depth);
    return 0;
}

