/********
* ec2c version 0.68
* c file generated for node : MinMax 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _MinMax_EC2C_SRC_FILE
#include "MinMax.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _integer _input;
   //OUTPUTS
   _integer _min;
   _integer _max;
   //REGISTERS
   _integer M12;
   _boolean M12_nil;
   _integer M7;
   _boolean M7_nil;
   _boolean M2;
} MinMax_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void MinMax_I_input(MinMax_ctx* ctx, _integer V){
   ctx->_input = V;
}
extern void MinMax_O_min(void* cdata, _integer);
extern void MinMax_O_max(void* cdata, _integer);
#ifdef CKCHECK
extern void MinMax_BOT_min(void* cdata);
extern void MinMax_BOT_max(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void MinMax_reset_input(MinMax_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void MinMax_reset(MinMax_ctx* ctx){
   ctx->M12_nil = _true;
   ctx->M7_nil = _true;
   ctx->M2 = _true;
   MinMax_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void MinMax_copy_ctx(MinMax_ctx* dest, MinMax_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(MinMax_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
MinMax_ctx* MinMax_new_ctx(void* cdata){
   MinMax_ctx* ctx = (MinMax_ctx*)calloc(1, sizeof(MinMax_ctx));
   ctx->client_data = cdata;
   MinMax_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void MinMax_step(MinMax_ctx* ctx){
//LOCAL VARIABLES
   _boolean L6;
   _integer L5;
   _integer L1;
   _boolean L11;
   _integer L10;
   _integer L9;
   _integer T12;
   _integer T7;
//CODE
   L6 = (ctx->M7 > ctx->_input);
   if (L6) {
      L5 = ctx->_input;
   } else {
      L5 = ctx->M7;
   }
   if (ctx->M2) {
      L1 = 0;
   } else {
      L1 = L5;
   }
   MinMax_O_min(ctx->client_data, L1);
   L11 = (ctx->M12 < ctx->_input);
   if (L11) {
      L10 = ctx->_input;
   } else {
      L10 = ctx->M12;
   }
   if (ctx->M2) {
      L9 = 0;
   } else {
      L9 = L10;
   }
   MinMax_O_max(ctx->client_data, L9);
   T12 = L9;
   T7 = L1;
   ctx->M12 = T12;
   ctx->M12_nil = _false;
   ctx->M7 = T7;
   ctx->M7_nil = _false;
   ctx->M2 = ctx->M2 && !(_true);
}
