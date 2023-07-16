@echo off

mkdir _out
mkdir .cmake

cmake -S . -B ./.cmake
cmake --build ./.cmake

robocopy .cmake/Debug _out /E /MOV