/********
* ec2c version 0.68
* c file generated for node : CountR 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _CountR_EC2C_SRC_FILE
#include "CountR.h"
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
   _integer M8;
   _boolean M8_nil;
   _boolean M2;
} CountR_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void CountR_I_inp(CountR_ctx* ctx, _boolean V){
   ctx->_inp = V;
}
extern void CountR_O_out(void* cdata, _integer);
#ifdef CKCHECK
extern void CountR_BOT_out(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void CountR_reset_input(CountR_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void CountR_reset(CountR_ctx* ctx){
   ctx->M8_nil = _true;
   ctx->M2 = _true;
   CountR_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void CountR_copy_ctx(CountR_ctx* dest, CountR_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(CountR_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
CountR_ctx* CountR_new_ctx(void* cdata){
   CountR_ctx* ctx = (CountR_ctx*)calloc(1, sizeof(CountR_ctx));
   ctx->client_data = cdata;
   CountR_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void CountR_step(CountR_ctx* ctx){
//LOCAL VARIABLES
   _integer L6;
   _integer L5;
   _integer L1;
   _integer T8;
//CODE
   L6 = (1 + ctx->M8);
   if (ctx->_inp) {
      L5 = L6;
   } else {
      L5 = 0;
   }
   if (ctx->M2) {
      L1 = 0;
   } else {
      L1 = L5;
   }
   CountR_O_out(ctx->client_data, L1);
   T8 = L1;
   ctx->M8 = T8;
   ctx->M8_nil = _false;
   ctx->M2 = ctx->M2 && !(_true);
}
