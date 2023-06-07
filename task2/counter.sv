module counter #(
    parameter WIDTH = 8
) (
    // interface signals
    input logic              clk,// clock
    input logic              rst,// rst
    input logic              en,// counter enable
    output logic [WIDTH-1:0] count
);

always_ff @(posedge clk,negedge rst)
    if (rst) count<={WIDTH{1'b0}};
    else     count<=count+{{WIDTH-1{1'b0}},en};

endmodule
