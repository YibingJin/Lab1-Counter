#!/bin/sh

#clean up
rm -rf obj_dir
rm -f  counter.vcd

#run Verilator to translate verilog into c++, including c++ testbench
verilator -Wall --cc --trace counter.sv bin2bcd.sv top.sv --exe top_tb.cpp
# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vcounter.mk Vcounter
# run executable simulation file
obj_dir/Vcounter
