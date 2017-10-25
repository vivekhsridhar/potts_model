About
------

The Potts model is a generalisation of the Ising model. The key distinction of the Potts model from the Ising model
is that it allows individuals to exist in more than two states. Usually, the spins are arranged in a square lattice 
where they interact with other spins within a defined neighbourhood. In this implementation, spins exist in one of 
three states and interact with their four closest neighbours. The implementation however is generalisable to n states.

Use
---

The above code is written using C++11 and tested on MacOS Sierra 10.12.5. The visualisation is executed using 
OpenCV 3.2.0. In case of troubles installing OpenCV / linking it to the C++ project, visualisation can be turned 
off by silencing OpenCV headers and the graphics function in main.cpp. The rest of the code should still work on 
naked C++.
