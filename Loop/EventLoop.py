#!/usr/bin/env python
from ROOT import gSystem

# 加载共享库，注意库名称可能需要完整路径或库名前缀（在 macOS 下通常为 libloop.dylib）
gSystem.Load("build/libloop.dylib")

# 从共享库中导入 EventLoop 类
from ROOT import EventLoop, Algorithm, TH1D

# 创建 EventLoop 类的实例
eventLoop = EventLoop()

eventLoop.treeName = "NOMINAL"

eventLoop.inputFiles.push_back("../Rawdata/ggH.root")


alg = Algorithm()
alg.h_ditau_m = TH1D("ditau_m", ";#it{m}_{#tau#tau} [GeV];Events", 30, 0, 300)
alg.h_ditau_m.Sumw2()

eventLoop.algorithms.push_back( alg )



# 初始化事件循环（例如：构建 TChain 并加载所有文件）
eventLoop.initialize()

# 运行事件循环（遍历事件并处理）
eventLoop.execute()

# Create a new ROOT file
from ROOT import TFile
f = TFile.Open("histograms.root", "recreate")
f.cd()

alg.h_ditau_m.Write()
f.Close()

# 结束事件循环（例如：保存输出文件）
eventLoop.finalize()
