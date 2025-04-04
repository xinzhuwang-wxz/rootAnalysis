from ROOT import gSystem
import os
import sys

if sys.platform.startswith("win"):
    lib_name = "helloworld.dll"
elif sys.platform.startswith("darwin"):
    lib_name = "libhelloworld.dylib"
else:
    lib_name = "libhelloworld.so"

lib_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), "build", lib_name)

gSystem.Load(lib_path)

from ROOT import HelloWorld
HelloWorld.runMe()


