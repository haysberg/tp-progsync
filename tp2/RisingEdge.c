/********
* ec2c version 0.68
* c file generated for node : RisingEdge 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _RisingEdge_EC2C_SRC_FILE
#include "RisingEdge.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _val;
   //OUTPUTS
   _boolean _rising;
   //REGISTERS
   _boolean M7;
   _boolean M7_nil;
   _boolean M2;
} RisingEdge_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void RisingEdge_I_val(RisingEdge_ctx* ctx, _boolean V){
   ctx->_val = V;
}
extern void RisingEdge_O_rising(void* cdata, _boolean);
#ifdef CKCHECK
extern void RisingEdge_BOT_rising(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void RisingEdge_reset_input(RisingEdge_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void RisingEdge_reset(RisingEdge_ctx* ctx){
   ctx->M7_nil = _true;
   ctx->M2 = _true;
   RisingEdge_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void RisingEdge_copy_ctx(RisingEdge_ctx* dest, RisingEdge_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(RisingEdge_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
RisingEdge_ctx* RisingEdge_new_ctx(void* cdata){
   RisingEdge_ctx* ctx = (RisingEdge_ctx*)calloc(1, sizeof(RisingEdge_ctx));
   ctx->client_data = cdata;
   RisingEdge_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void RisingEdge_step(RisingEdge_ctx* ctx){
//LOCAL VARIABLES
   _boolean L6;
   _boolean L5;
   _boolean L1;
   _boolean T7;
//CODE
   L6 = (ctx->M7 > ctx->_val);
   if (L6) {
      L5 = _true;
   } else {
      L5 = _false;
   }
   if (ctx->M2) {
      L1 = _false;
   } else {
      L1 = L5;
   }
   RisingEdge_O_rising(ctx->client_data, L1);
   T7 = ctx->_val;
   ctx->M7 = T7;
   ctx->M7_nil = _false;
   ctx->M2 = ctx->M2 && !(_true);
}
