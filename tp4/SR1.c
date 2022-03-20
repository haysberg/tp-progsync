/********
* ec2c version 0.68
* c file generated for node : SR1 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _SR1_EC2C_SRC_FILE
#include "SR1.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _init;
   _boolean _S;
   _boolean _R;
   //OUTPUTS
   _boolean _Q;
   //REGISTERS
   _boolean M9;
   _boolean M9_nil;
   _boolean M4;
} SR1_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void SR1_I_init(SR1_ctx* ctx, _boolean V){
   ctx->_init = V;
}
void SR1_I_S(SR1_ctx* ctx, _boolean V){
   ctx->_S = V;
}
void SR1_I_R(SR1_ctx* ctx, _boolean V){
   ctx->_R = V;
}
extern void SR1_O_Q(void* cdata, _boolean);
#ifdef CKCHECK
extern void SR1_BOT_Q(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void SR1_reset_input(SR1_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void SR1_reset(SR1_ctx* ctx){
   ctx->M9_nil = _true;
   ctx->M4 = _true;
   SR1_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void SR1_copy_ctx(SR1_ctx* dest, SR1_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(SR1_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
SR1_ctx* SR1_new_ctx(void* cdata){
   SR1_ctx* ctx = (SR1_ctx*)calloc(1, sizeof(SR1_ctx));
   ctx->client_data = cdata;
   SR1_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void SR1_step(SR1_ctx* ctx){
//LOCAL VARIABLES
   _boolean L7;
   _boolean L6;
   _boolean L3;
   _boolean T9;
//CODE
   if (ctx->_R) {
      L7 = _false;
   } else {
      L7 = ctx->M9;
   }
   if (ctx->_S) {
      L6 = _true;
   } else {
      L6 = L7;
   }
   if (ctx->M4) {
      L3 = ctx->_init;
   } else {
      L3 = L6;
   }
   SR1_O_Q(ctx->client_data, L3);
   T9 = L3;
   ctx->M9 = T9;
   ctx->M9_nil = _false;
   ctx->M4 = ctx->M4 && !(_true);
}
