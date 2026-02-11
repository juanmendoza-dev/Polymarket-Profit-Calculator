#include <iostream>
#include "riskAnalyzer.h"
#include <string>
using std::cout;

void runRiskAnalyzer(){
    //vars
    double capital;
    std::string yes_no_contract;
    double $pershare;
    
    //intro
    cout << "Running risk Analyzer...\n";
    cout << "\n";

    //capital (step 1)
    cout << "Captial: ";
    std::cin >> capital;

    //yes or no contract (step 2 )
    cout << '"'<< "Yes" << '"' << "or" <<'"' << "No" << '"' << "Contract"; // "Yes" or "No" Contract
    std::cin >> yes_no_contract;

    //yes or no contract logic (step 2.5)
    if (yes_no_contract == "Yes" || yes_no_contract == "Y" == yes_no_contract == "YES")
    





}