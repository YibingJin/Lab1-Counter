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
        //top->en = 1;
        //top->v = 4095;

        // run simulation for many clock cycles
        for(i=0;i<300;i++){
            //dump variables into VCD file and toggle clock
            for (clk=0;clk<2;clk++){
            tfp->dump(2*i+clk); //unit is in ps
            top->clk = !top->clk;
            top->eval();
            }
        
        
        // ------send count value to buddy
        // vbdHex(4,((top->bcd)/1000)%10);
        // vbdHex(3,((top->bcd)/100)%10);
        // vbdHex(2,((top->bcd)/10)%10);
        // vbdHex(1,((top->bcd)/1)%10);
        vbdHex(4,(int(top->bcd)>>16)&0xF);
        vbdHex(3,(int(top->bcd)>>8)&0xF);
        vbdHex(2,(int(top->bcd)>>4)&0xF);
        vbdHex(1,(int(top->bcd))&0xF);
        vbdCycle(i+1);
        // -----------end of Vbuddy output section

        printf("%d\r\n",top->bcd);

        //change input stimuli
        top->rst = (i<2) | (i==15);
        top->en = vbdFlag();
        top->v = vbdValue();
        vbdSetMode(1);

        if(Verilated::gotFinish())   exit(0);
        }

        vbdClose();
        tfp->close();
        exit(0);

    }