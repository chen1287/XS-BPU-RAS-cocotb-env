module cocotb_iverilog_dump();
initial begin
    $dumpfile("sim_build/RAS.fst");
    $dumpvars(0, RAS);
end
endmodule
