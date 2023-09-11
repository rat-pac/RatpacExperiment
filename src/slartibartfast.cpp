#include <RAT/AnyParse.hh>
#include <RAT/Rat.hh>
#include <Slartibartfast.hh>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  auto parser = new RAT::AnyParse(argc, argv);
  auto slartibartfast = SLARTIBARTFAST::Slartibartfast(parser, argc, argv);
  slartibartfast.Begin();
  slartibartfast.Report();
}
