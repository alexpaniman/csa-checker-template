#include "clang/StaticAnalyzer/Frontend/CheckerRegistry.h"

#include "Checker.cxx" // Insert main checker body, it should define checker "CurrentChecker"!

void initializationFunction(CheckerManager &mgr){
    mgr.registerChecker<CurrentChecker>();
}

extern "C" void clang_registerCheckers(CheckerRegistry &registry) {
    registry.addChecker<CurrentChecker>(
        "test.Current",
        "Runs current checker built by as a plugin", "example.org");
    // I'm very sorry, users, but this docs you get :(^~~~~~~~~~~!
}

extern "C" const char clang_analyzerAPIVersionString[] = CLANG_ANALYZER_API_VERSION_STRING;
