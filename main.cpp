//
//  main.cpp
//  Assignment3
//


#include <iostream>
#include <cstdlib>

#include "LinkedListTest.hpp"
#include "StackQueueTest.hpp"

//------------------------------------------------------


int main(int argc, const char * argv[]) {

  // insert code here...
  if(argc>1) {
    std::string temp(argv[1]);
    if("compile"==temp) {
      std::cout << "Passed Compile Test\n";
      return 0;
    }
    else if("basic"==temp) {
      if(!doBasicTest()) {
        std::cout << "Passed Basic Test\n";
        return 0;
      }
    }
    else if ("random"==temp) {
      if(!doRandomTest()) {
        std::cout << "Passed Random Test\n";
        return 0;
      }
    }
    else if ("visitor"==temp) {
      if(!doVisitorTest()) {
        std::cout << "Passed Visitor Test\n";
        return 0;
      }
    }
    else if ("stack"==temp) {
      if(!doStackTest()) {
        std::cout << "Passed Stack Test\n";
        return 0;
      }
    }
    else if ("queue"==temp) {
      if(!doQueueTest()) {
        std::cout << "Passed Queue Test\n";
        return 0;
      }
    }    
    return 1;
  }
  
  //STUDENT -- add your own additional tests here...
  //  ECE17::doBasicTest();  
  //return ECE17::doVisitorTest();
    
}
