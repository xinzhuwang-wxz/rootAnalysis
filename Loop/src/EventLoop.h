#ifndef EVENTLOOP_H
#define EVENTLOOP_H

#include <vector>
#include <TString.h>
#include <TChain.h>
#include "Data.h"
#include "Algorithm.h"


class EventLoop{
    public:
        EventLoop();
        void initialize();
        void execute();
        void finalize();
    
        std::vector<TString> inputFiles;
        TString treeName;

        std::vector<Algorithm*> algorithms;

    protected:
        TChain* m_chain = 0;
        Data* m_data = 0;
};

#endif
