module counter #(
    parameter WIDTH = 8
) (
    // interface signals
    input logic              clk,// clock
    input logic              rst,// rst
    input logic              en,// load counter from data
    input logic [WIDTH-1:0]  v, // value to preload
    output logic [WIDTH-1:0] count
);

// always_ff @(posedge clk,negedge rst)
//     if (rst) count<={WIDTH{1'b0}};
//     else     count<=count+{{WIDTH-1{1'b0}},en};

always_ff @(posedge clk,negedge rst)
    if (rst)       count<={WIDTH{1'b0}};
     else           count<= en ? v : count+{{WIDTH-1{1'b0}},1'b1}; //step 1
    // else           count<= en ? count+{{WIDTH-1{1'b0}},1'b1} : count+{{WIDTH-1{1'b0}},1'b0};



endmodule
