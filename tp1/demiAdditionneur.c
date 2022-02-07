/********
* ec2c version 0.68
* c file generated for node : demiAdditionneur 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _demiAdditionneur_EC2C_SRC_FILE
#include "demiAdditionneur.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   //OUTPUTS
   _boolean _cy;
   _boolean _sum;
   //REGISTERS
} demiAdditionneur_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void demiAdditionneur_I_a(demiAdditionneur_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void demiAdditionneur_I_b(demiAdditionneur_ctx* ctx, _boolean V){
   ctx->_b = V;
}
extern void demiAdditionneur_O_cy(void* cdata, _boolean);
extern void demiAdditionneur_O_sum(void* cdata, _boolean);
#ifdef CKCHECK
extern void demiAdditionneur_BOT_cy(void* cdata);
extern void demiAdditionneur_BOT_sum(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void demiAdditionneur_reset_input(demiAdditionneur_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void demiAdditionneur_reset(demiAdditionneur_ctx* ctx){
   demiAdditionneur_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void demiAdditionneur_copy_ctx(demiAdditionneur_ctx* dest, demiAdditionneur_ctx
* src){
   memcpy((void*)dest, (void*)src, sizeof(demiAdditionneur_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
demiAdditionneur_ctx* demiAdditionneur_new_ctx(void* cdata){
   demiAdditionneur_ctx* ctx = (demiAdditionneur_ctx*)calloc(1, sizeof(
demiAdditionneur_ctx));
   ctx->client_data = cdata;
   demiAdditionneur_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void demiAdditionneur_step(demiAdditionneur_ctx* ctx){
//LOCAL VARIABLES
   _boolean L3;
   _boolean L2;
   _boolean L7;
//CODE
   L3 = (ctx->_a && ctx->_b);
   if (L3) {
      L2 = _true;
   } else {
      L2 = _false;
   }
   demiAdditionneur_O_cy(ctx->client_data, L2);
   L7 = (ctx->_a != ctx->_b);
   demiAdditionneur_O_sum(ctx->client_data, L7);
}
