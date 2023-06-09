#include "Vcounter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
    
    int main(int argc, char **argv, char **env){
        int i;
        int clk;
        int j=0;

        Verilated::commandArgs(argc,argv);
        // init top verilog instance
        Vcounter* top = new Vcounter;
        // init trace dump
        Verilated::traceEverOn(true);
        VerilatedVcdC* tfp = new VerilatedVcdC;
        top->trace(tfp,99);
        tfp->open("counter.vcd");


        // init vbuddy
        if(vbdOpen()!=1) return(-1);
        vbdHeader("Lab 1: Counter");




        //initialize simulation inputs
        top->clk = 1;
        top->rst = 1;
        top->ld = 1;
        //top->v = 4095;

        // run simulation for many clock cycles
        for(i=0;i<300;i++){
            //dump variables into VCD file and toggle clock
            for (clk=0;clk<2;clk++){
            tfp->dump(2*i+clk); //unit is in ps
            top->clk = !top->clk;
            top->eval();
            }
        
        // top->rst = (i<2);
        // // top->en = ((14>i)&(i>4))|(i>15);
        // if((top->count == 0x9)&(j<2))
        // {
        //     top->en = 0;
        //     j++;
        // }
        // else if (i<4)
        // {
        //     top->en = 0;
        // }
        
        // else
        //     top->en = 1;
        
        // ------send count value to buddy
        vbdHex(4,(int(top->count)>>16)&0xF);
        vbdHex(3,(int(top->count)>>8)&0xF);
        vbdHex(2,(int(top->count)>>4)&0xF);
        vbdHex(1,(int(top->count))&0xF);
        vbdCycle(i+1);
        // -----------end of Vbuddy output section

        printf("%d\r\n",top->count);

        //change input stimuli
        top->rst = (i<2) | (i==15);
        top->ld = vbdFlag();
        top->v = vbdValue();
        vbdSetMode(1);

        if(Verilated::gotFinish())   exit(0);
        }

        vbdClose();
        tfp->close();
        exit(0);

    }