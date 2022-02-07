/********
* ec2c version 0.68
* c file generated for node : multiplexeur4bit 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _multiplexeur4bit_EC2C_SRC_FILE
#include "multiplexeur4bit.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _X_0;
   _boolean _X_1;
   _boolean _X_2;
   _boolean _X_3;
   _boolean _Y_0;
   _boolean _Y_1;
   _boolean _Y_2;
   _boolean _Y_3;
   _boolean _sel;
   //OUTPUTS
   _boolean _out_0;
   _boolean _out_1;
   _boolean _out_2;
   _boolean _out_3;
   //REGISTERS
} multiplexeur4bit_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void multiplexeur4bit_I_X_0(multiplexeur4bit_ctx* ctx, _boolean V){
   ctx->_X_0 = V;
}
void multiplexeur4bit_I_X_1(multiplexeur4bit_ctx* ctx, _boolean V){
   ctx->_X_1 = V;
}
void multiplexeur4bit_I_X_2(multiplexeur4bit_ctx* ctx, _boolean V){
   ctx->_X_2 = V;
}
void multiplexeur4bit_I_X_3(multiplexeur4bit_ctx* ctx, _boolean V){
   ctx->_X_3 = V;
}
void multiplexeur4bit_I_Y_0(multiplexeur4bit_ctx* ctx, _boolean V){
   ctx->_Y_0 = V;
}
void multiplexeur4bit_I_Y_1(multiplexeur4bit_ctx* ctx, _boolean V){
   ctx->_Y_1 = V;
}
void multiplexeur4bit_I_Y_2(multiplexeur4bit_ctx* ctx, _boolean V){
   ctx->_Y_2 = V;
}
void multiplexeur4bit_I_Y_3(multiplexeur4bit_ctx* ctx, _boolean V){
   ctx->_Y_3 = V;
}
void multiplexeur4bit_I_sel(multiplexeur4bit_ctx* ctx, _boolean V){
   ctx->_sel = V;
}
extern void multiplexeur4bit_O_out_0(void* cdata, _boolean);
extern void multiplexeur4bit_O_out_1(void* cdata, _boolean);
extern void multiplexeur4bit_O_out_2(void* cdata, _boolean);
extern void multiplexeur4bit_O_out_3(void* cdata, _boolean);
#ifdef CKCHECK
extern void multiplexeur4bit_BOT_out_0(void* cdata);
extern void multiplexeur4bit_BOT_out_1(void* cdata);
extern void multiplexeur4bit_BOT_out_2(void* cdata);
extern void multiplexeur4bit_BOT_out_3(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void multiplexeur4bit_reset_input(multiplexeur4bit_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void multiplexeur4bit_reset(multiplexeur4bit_ctx* ctx){
   multiplexeur4bit_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void multiplexeur4bit_copy_ctx(multiplexeur4bit_ctx* dest, multiplexeur4bit_ctx
* src){
   memcpy((void*)dest, (void*)src, sizeof(multiplexeur4bit_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
multiplexeur4bit_ctx* multiplexeur4bit_new_ctx(void* cdata){
   multiplexeur4bit_ctx* ctx = (multiplexeur4bit_ctx*)calloc(1, sizeof(
multiplexeur4bit_ctx));
   ctx->client_data = cdata;
   multiplexeur4bit_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void multiplexeur4bit_step(multiplexeur4bit_ctx* ctx){
//LOCAL VARIABLES
   _boolean L9;
   _boolean L12;
   _boolean L14;
   _boolean L16;
//CODE
   if (ctx->_sel) {
      L9 = ctx->_X_0;
   } else {
      L9 = ctx->_Y_0;
   }
   multiplexeur4bit_O_out_0(ctx->client_data, L9);
   if (ctx->_sel) {
      L12 = ctx->_X_1;
   } else {
      L12 = ctx->_Y_1;
   }
   multiplexeur4bit_O_out_1(ctx->client_data, L12);
   if (ctx->_sel) {
      L14 = ctx->_X_2;
   } else {
      L14 = ctx->_Y_2;
   }
   multiplexeur4bit_O_out_2(ctx->client_data, L14);
   if (ctx->_sel) {
      L16 = ctx->_X_3;
   } else {
      L16 = ctx->_Y_3;
   }
   multiplexeur4bit_O_out_3(ctx->client_data, L16);
}
