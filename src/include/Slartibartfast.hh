#ifndef __SLARTIBARTFAST_Slartibartfast__
#define __SLARTIBARTFAST_Slartibartfast__

#include <Config.hh>
#include <RAT/Rat.hh>
#include <RAT/AnyParse.hh>
#include <RAT/ProcBlockManager.hh>
#include <RAT/ProcAllocator.hh>

namespace SLARTIBARTFAST {
class Slartibartfast : public RAT::Rat {
 public:
  Slartibartfast(RAT::AnyParse* p, int argc, char** argv);
};
}  // namespace SLARTIBARTFAST

#endif  // __SLARTIBARTFAST_Slartibartfast__
