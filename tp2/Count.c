/********
* ec2c version 0.68
* c file generated for node : Count 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _Count_EC2C_SRC_FILE
#include "Count.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _inp;
   //OUTPUTS
   _integer _out;
   //REGISTERS
   _integer M6;
   _boolean M6_nil;
   _boolean M2;
} Count_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void Count_I_inp(Count_ctx* ctx, _boolean V){
   ctx->_inp = V;
}
extern void Count_O_out(void* cdata, _integer);
#ifdef CKCHECK
extern void Count_BOT_out(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void Count_reset_input(Count_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void Count_reset(Count_ctx* ctx){
   ctx->M6_nil = _true;
   ctx->M2 = _true;
   Count_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void Count_copy_ctx(Count_ctx* dest, Count_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(Count_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
Count_ctx* Count_new_ctx(void* cdata){
   Count_ctx* ctx = (Count_ctx*)calloc(1, sizeof(Count_ctx));
   ctx->client_data = cdata;
   Count_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void Count_step(Count_ctx* ctx){
//LOCAL VARIABLES
   _integer L7;
   _integer L5;
   _integer L1;
   _integer T6;
//CODE
   if (ctx->_inp) {
      L7 = 1;
   } else {
      L7 = 0;
   }
   L5 = (ctx->M6 + L7);
   if (ctx->M2) {
      L1 = 0;
   } else {
      L1 = L5;
   }
   Count_O_out(ctx->client_data, L1);
   T6 = L1;
   ctx->M6 = T6;
   ctx->M6_nil = _false;
   ctx->M2 = ctx->M2 && !(_true);
}
