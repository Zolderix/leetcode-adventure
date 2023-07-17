@echo off

mkdir .cmake

cmake -S . -B ./.cmake
cmake --build ./.cmake