#!/bin/bash

rm -rf build/
mkdir build && cd build
cmake .. && make -j8

echo "Move QueueEvent to upper folder" 
mv QueueEvent ../QueueEvent