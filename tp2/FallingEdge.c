/********
* ec2c version 0.68
* c file generated for node : FallingEdge 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _FallingEdge_EC2C_SRC_FILE
#include "FallingEdge.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _val;
   //OUTPUTS
   _boolean _falling;
   //REGISTERS
   _boolean M7;
   _boolean M7_nil;
   _boolean M2;
} FallingEdge_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void FallingEdge_I_val(FallingEdge_ctx* ctx, _boolean V){
   ctx->_val = V;
}
extern void FallingEdge_O_falling(void* cdata, _boolean);
#ifdef CKCHECK
extern void FallingEdge_BOT_falling(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void FallingEdge_reset_input(FallingEdge_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void FallingEdge_reset(FallingEdge_ctx* ctx){
   ctx->M7_nil = _true;
   ctx->M2 = _true;
   FallingEdge_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void FallingEdge_copy_ctx(FallingEdge_ctx* dest, FallingEdge_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(FallingEdge_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
FallingEdge_ctx* FallingEdge_new_ctx(void* cdata){
   FallingEdge_ctx* ctx = (FallingEdge_ctx*)calloc(1, sizeof(FallingEdge_ctx));
   ctx->client_data = cdata;
   FallingEdge_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void FallingEdge_step(FallingEdge_ctx* ctx){
//LOCAL VARIABLES
   _boolean L6;
   _boolean L5;
   _boolean L1;
   _boolean T7;
//CODE
   L6 = (ctx->M7 < ctx->_val);
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
   FallingEdge_O_falling(ctx->client_data, L1);
   T7 = ctx->_val;
   ctx->M7 = T7;
   ctx->M7_nil = _false;
   ctx->M2 = ctx->M2 && !(_true);
}
