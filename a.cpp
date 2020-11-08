#include <iostream>

using namespace std;
int main() {

	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			if (i >= j) {
				cout << "a=" << i << "; b=" << j << "; #1;" << '\n';
			}
		}
	}
}

`timescale 10ns/1ps

module testbench_prj1();
	reg [3:0] a,b; 		// 4-bit inputs
	wire [3:0] s_rca,s_bcd; // 4-bit sum outpus
	wire c_rca, c_bcd;	// 1-bit carry-out flags
	
	rca my_rca(a,b,s_rca,c_rca);
	bcd my_bcd(a,b,s_bcd,c_bcd);

	initial begin
		a=0; b=0; #1;
		a=1; b=0; #1;
		a=1; b=1; #1;
		a=2; b=0; #1;
		a=2; b=1; #1;
		a=2; b=2; #1;
		a=3; b=0; #1;
		a=3; b=1; #1;
		a=3; b=2; #1;
		a=3; b=3; #1;
		a=4; b=0; #1;
		a=4; b=1; #1;
		a=4; b=2; #1;
		a=4; b=3; #1;
		a=4; b=4; #1;
		a=5; b=0; #1;
		a=5; b=1; #1;
		a=5; b=2; #1;
		a=5; b=3; #1;
		a=5; b=4; #1;
		a=5; b=5; #1;
		a=6; b=0; #1;
		a=6; b=1; #1;
		a=6; b=2; #1;
		a=6; b=3; #1;
		a=6; b=4; #1;
		a=6; b=5; #1;
		a=6; b=6; #1;
		a=7; b=0; #1;
		a=7; b=1; #1;
		a=7; b=2; #1;
		a=7; b=3; #1;
		a=7; b=4; #1;
		a=7; b=5; #1;
		a=7; b=6; #1;
		a=7; b=7; #1;
		a=8; b=0; #1;
		a=8; b=1; #1;
		a=8; b=2; #1;
		a=8; b=3; #1;
		a=8; b=4; #1;
		a=8; b=5; #1;
		a=8; b=6; #1;
		a=8; b=7; #1;
		a=8; b=8; #1;
		a=9; b=0; #1;
		a=9; b=1; #1;
		a=9; b=2; #1;
		a=9; b=3; #1;
		a=9; b=4; #1;
		a=9; b=5; #1;
		a=9; b=6; #1;
		a=9; b=7; #1;
		a=9; b=8; #1;
		a=9; b=9; #1;
	end

endmodule
