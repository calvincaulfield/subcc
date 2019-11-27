#include <stdio.h> 
#include "interpreter.h"

namespace subcc
{
char DATA[1024];
char STRING_SEGMENT[1024] ="";
int GPR0;
int GPR1;
int GPR2;
int const ZERO = 0;
char M0[256];

void myFunc() {

	STORE ( FP, STACK, SP - 4, 4);
	SP = SP - 4;
	FP = SP;
	SP = SP - 4;
	LOAD( M0 , STACK , FP + (4) + ZERO , 4 );
	SP = FP;
	LOAD ( FP, STACK, SP, 4);
	SP = SP + 4;
	RETURN;
L1:
	SP = FP;
	LOAD ( FP, STACK, SP, 4);
	SP = SP + 4;
	RETURN;
} // end of( myFunc )

void _main() {

	STORE ( FP, STACK, SP - 4, 4);
	SP = SP - 4;
	FP = SP;
	SP = SP - 492;
	 GPR0  = 16;
	 GPR1  = 0;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-56) + ZERO , 4 );
	LOAD( M0 , STACK , FP + (-56) + ZERO , 4 );
	STORE( M0 , STACK , FP + (-52) + ZERO , 4 );
	 GPR0  = 8;
	 GPR1  = 0;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-80) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-52) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-80) + ZERO , 4 );
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-76) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-76) + ZERO , 4 );
	 GPR1  = 0;
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-92) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-92) + ZERO , 4 );
	 GPR0  = 11;
	STORE( GPR0 , STACK , FP + (-48) + GPR1 , 4 );
L3:
	 GPR0  = 16;
	 GPR1  = 0;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-104) + ZERO , 4 );
	LOAD( M0 , STACK , FP + (-104) + ZERO , 4 );
	STORE( M0 , STACK , FP + (-100) + ZERO , 4 );
	 GPR0  = 8;
	 GPR1  = 1;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-128) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-100) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-128) + ZERO , 4 );
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-124) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-124) + ZERO , 4 );
	 GPR1  = 4;
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-140) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-140) + ZERO , 4 );
	 GPR0  = 22;
	STORE( GPR0 , STACK , FP + (-48) + GPR1 , 4 );
L4:
	 GPR0  = 16;
	 GPR1  = 1;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-152) + ZERO , 4 );
	LOAD( M0 , STACK , FP + (-152) + ZERO , 4 );
	STORE( M0 , STACK , FP + (-148) + ZERO , 4 );
	 GPR0  = 8;
	 GPR1  = 0;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-176) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-148) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-176) + ZERO , 4 );
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-172) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-172) + ZERO , 4 );
	 GPR1  = 0;
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-188) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-188) + ZERO , 4 );
	 GPR0  = 33;
	STORE( GPR0 , STACK , FP + (-48) + GPR1 , 4 );
L5:
	 GPR0  = 16;
	 GPR1  = 1;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-200) + ZERO , 4 );
	LOAD( M0 , STACK , FP + (-200) + ZERO , 4 );
	STORE( M0 , STACK , FP + (-196) + ZERO , 4 );
	 GPR0  = 8;
	 GPR1  = 1;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-224) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-196) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-224) + ZERO , 4 );
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-220) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-220) + ZERO , 4 );
	 GPR1  = 4;
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-236) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-236) + ZERO , 4 );
	 GPR0  = 44;
	STORE( GPR0 , STACK , FP + (-48) + GPR1 , 4 );
L6:
	 GPR0  = 16;
	 GPR1  = 2;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-248) + ZERO , 4 );
	LOAD( M0 , STACK , FP + (-248) + ZERO , 4 );
	STORE( M0 , STACK , FP + (-244) + ZERO , 4 );
	 GPR0  = 8;
	 GPR1  = 0;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-272) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-244) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-272) + ZERO , 4 );
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-268) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-268) + ZERO , 4 );
	 GPR1  = 0;
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-284) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-284) + ZERO , 4 );
	 GPR0  = 55;
	STORE( GPR0 , STACK , FP + (-48) + GPR1 , 4 );
L7:
	 GPR0  = 16;
	 GPR1  = 2;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-296) + ZERO , 4 );
	LOAD( M0 , STACK , FP + (-296) + ZERO , 4 );
	STORE( M0 , STACK , FP + (-292) + ZERO , 4 );
	 GPR0  = 8;
	 GPR1  = 1;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-320) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-292) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-320) + ZERO , 4 );
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-316) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-316) + ZERO , 4 );
	 GPR1  = 4;
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-332) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-332) + ZERO , 4 );
	 GPR0  = 66;
	STORE( GPR0 , STACK , FP + (-48) + GPR1 , 4 );
L8:
	 GPR0  = 16;
	 GPR1  = 0;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-344) + ZERO , 4 );
	LOAD( M0 , STACK , FP + (-344) + ZERO , 4 );
	STORE( M0 , STACK , FP + (-340) + ZERO , 4 );
	 GPR0  = 8;
	 GPR1  = 0;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-368) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-340) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-368) + ZERO , 4 );
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-364) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-364) + ZERO , 4 );
	 GPR1  = 0;
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-380) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-380) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-48) + GPR1 , 4 );
	STORE( GPR0 , STACK , FP + (-384) + ZERO , 4 );
	 GPR0  = 16;
	 GPR1  = 1;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-392) + ZERO , 4 );
	LOAD( M0 , STACK , FP + (-392) + ZERO , 4 );
	STORE( M0 , STACK , FP + (-388) + ZERO , 4 );
	 GPR0  = 8;
	 GPR1  = 1;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-416) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-388) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-416) + ZERO , 4 );
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-412) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-412) + ZERO , 4 );
	 GPR1  = 4;
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-428) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-428) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-48) + GPR1 , 4 );
	STORE( GPR0 , STACK , FP + (-432) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-384) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-432) + ZERO , 4 );
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-436) + ZERO , 4 );
	 GPR0  = 16;
	 GPR1  = 2;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-444) + ZERO , 4 );
	LOAD( M0 , STACK , FP + (-444) + ZERO , 4 );
	STORE( M0 , STACK , FP + (-440) + ZERO , 4 );
	 GPR0  = 8;
	 GPR1  = 1;
	 GPR2  =  GPR0 * GPR1 ;
	STORE( GPR2 , STACK , FP + (-468) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-440) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-468) + ZERO , 4 );
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-464) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-464) + ZERO , 4 );
	 GPR1  = 4;
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-480) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-480) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-48) + GPR1 , 4 );
	STORE( GPR0 , STACK , FP + (-484) + ZERO , 4 );
	LOAD( GPR0 , STACK , FP + (-436) + ZERO , 4 );
	LOAD( GPR1 , STACK , FP + (-484) + ZERO , 4 );
	 GPR2  =  GPR0 + GPR1 ;
	STORE( GPR2 , STACK , FP + (-488) + ZERO , 4 );
	LOAD( M0 , STACK , FP + (-488) + ZERO , 4 );
	STORE ( M0, STACK, SP - 4 ,4 );
	SP = SP - 4;
	CALL( printInt);
	SP = SP + 4 ;
L9:
	*((int *)M0) = 0;
	SP = FP;
	LOAD ( FP, STACK, SP, 4);
	SP = SP + 4;
	RETURN;
L2:
	SP = FP;
	LOAD ( FP, STACK, SP, 4);
	SP = SP + 4;
	RETURN;
} // end of( main )


}