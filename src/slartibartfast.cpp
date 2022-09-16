#include <stdlib.h>
#include <RAT/AnyParse.hh>
#include <RAT/Rat.hh>
#include <RAT/DetectorFactory.hh>
#include <iostream>
#include <string>

namespace SLARTIBARTFAST {
class Slartibartfast : public RAT::Rat {
 public:
  Slartibartfast(RAT::AnyParse* p, int argc, char** argv) : Rat(p, argc, argv) {
    // Append an additional data directory (for ratdb and geo)
    char* slartibartfastdata = getenv("SLARTIBARTFASTDATA");
    if (slartibartfastdata != NULL) {
      ratdb_directories.insert(static_cast<std::string>(slartibartfastdata) + "/ratdb");
      model_directories.insert(static_cast<std::string>(slartibartfastdata) + "/models");
    }
    // Initialize a geometry factory
    // Include a new type of processor
    // Add a unique component to the datastructure
  }
};
}  // namespace SLARTIBARTFAST

int main(int argc, char** argv) {
  auto parser = new RAT::AnyParse(argc, argv);
  auto slartibartfast = SLARTIBARTFAST::Slartibartfast(parser, argc, argv);
  slartibartfast.Begin();
  slartibartfast.Report();
}
