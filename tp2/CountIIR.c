/********
* ec2c version 0.68
* c file generated for node : CountIIR 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _CountIIR_EC2C_SRC_FILE
#include "CountIIR.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _integer _init;
   _integer _incr;
   _boolean _reset;
   //OUTPUTS
   _integer _out;
   //REGISTERS
   _integer M9;
   _boolean M9_nil;
   _boolean M4;
} CountIIR_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void CountIIR_I_init(CountIIR_ctx* ctx, _integer V){
   ctx->_init = V;
}
void CountIIR_I_incr(CountIIR_ctx* ctx, _integer V){
   ctx->_incr = V;
}
void CountIIR_I_reset(CountIIR_ctx* ctx, _boolean V){
   ctx->_reset = V;
}
extern void CountIIR_O_out(void* cdata, _integer);
#ifdef CKCHECK
extern void CountIIR_BOT_out(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void CountIIR_reset_input(CountIIR_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void CountIIR_reset(CountIIR_ctx* ctx){
   ctx->M9_nil = _true;
   ctx->M4 = _true;
   CountIIR_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void CountIIR_copy_ctx(CountIIR_ctx* dest, CountIIR_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(CountIIR_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
CountIIR_ctx* CountIIR_new_ctx(void* cdata){
   CountIIR_ctx* ctx = (CountIIR_ctx*)calloc(1, sizeof(CountIIR_ctx));
   ctx->client_data = cdata;
   CountIIR_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void CountIIR_step(CountIIR_ctx* ctx){
//LOCAL VARIABLES
   _integer L8;
   _integer L6;
   _integer L3;
   _integer T9;
//CODE
   L8 = (ctx->M9 + ctx->_incr);
   if (ctx->_reset) {
      L6 = 0;
   } else {
      L6 = L8;
   }
   if (ctx->M4) {
      L3 = ctx->_init;
   } else {
      L3 = L6;
   }
   CountIIR_O_out(ctx->client_data, L3);
   T9 = L3;
   ctx->M9 = T9;
   ctx->M9_nil = _false;
   ctx->M4 = ctx->M4 && !(_true);
}
