#include "clang/StaticAnalyzer/Core/Checker.h"

using namespace clang;
using namespace clang::ento;

namespace {

    class CurrentChecker: public Checker<check::EndAnalysis> {
    public:
        void checkEndAnalysis(ExplodedGraph&, BugReporter&, ExprEngine&) const {
            llvm::outs() << "Hello again path sensitive checker!\n";

        }
    };


}; // end anonymous namespace
