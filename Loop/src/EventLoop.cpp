#include "EventLoop.h"
#include <iostream>
#include <stdexcept>

EventLoop::EventLoop() {

}

void EventLoop::initialize() {
    m_chain = new TChain(treeName);
    for (auto inputFile : inputFiles){
        m_chain -> Add(inputFile);
        std::cout << "Added file: " << inputFile << std::endl;
    }

    m_data = new Data(m_chain);
    m_data->initialize();

    for(auto algorithm : algorithms){
        algorithm->initialize(m_data);
    }



}

void EventLoop::execute(){

 if(!m_chain) {
   throw std::runtime_error("Calling execute while the wvent loop was not initialized.");
 }

 for (Long64_t i=0; i<m_chain->GetEntries(); i++){
     m_chain->GetEntry(i);
     for(auto algorithm : algorithms){
         algorithm->execute();
     }

 }

}

void EventLoop::finalize() {
    delete m_chain;
    m_data->finalize();
    for (auto algorithm : algorithms){
        algorithm->finalize();
    }
}