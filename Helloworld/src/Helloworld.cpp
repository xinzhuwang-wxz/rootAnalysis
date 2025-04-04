#include "Helloworld.h"
#include <iostream>
#include <memory>
HelloWorld::HelloWorld(){

}

void HelloWorld::execute(){
    std::cout << "Helloworld!!" << std::endl;
}

void HelloWorld::runMe(){
    std::unique_ptr<HelloWorld> helloWorld = std::make_unique<HelloWorld>();
    helloWorld->execute();
}



