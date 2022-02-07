/********
* ec2c version 0.68
* c file generated for node : XOR4bit 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _XOR4bit_EC2C_SRC_FILE
#include "XOR4bit.h"
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
   //OUTPUTS
   _boolean _out_0;
   _boolean _out_1;
   _boolean _out_2;
   _boolean _out_3;
   //REGISTERS
} XOR4bit_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void XOR4bit_I_X_0(XOR4bit_ctx* ctx, _boolean V){
   ctx->_X_0 = V;
}
void XOR4bit_I_X_1(XOR4bit_ctx* ctx, _boolean V){
   ctx->_X_1 = V;
}
void XOR4bit_I_X_2(XOR4bit_ctx* ctx, _boolean V){
   ctx->_X_2 = V;
}
void XOR4bit_I_X_3(XOR4bit_ctx* ctx, _boolean V){
   ctx->_X_3 = V;
}
void XOR4bit_I_Y_0(XOR4bit_ctx* ctx, _boolean V){
   ctx->_Y_0 = V;
}
void XOR4bit_I_Y_1(XOR4bit_ctx* ctx, _boolean V){
   ctx->_Y_1 = V;
}
void XOR4bit_I_Y_2(XOR4bit_ctx* ctx, _boolean V){
   ctx->_Y_2 = V;
}
void XOR4bit_I_Y_3(XOR4bit_ctx* ctx, _boolean V){
   ctx->_Y_3 = V;
}
extern void XOR4bit_O_out_0(void* cdata, _boolean);
extern void XOR4bit_O_out_1(void* cdata, _boolean);
extern void XOR4bit_O_out_2(void* cdata, _boolean);
extern void XOR4bit_O_out_3(void* cdata, _boolean);
#ifdef CKCHECK
extern void XOR4bit_BOT_out_0(void* cdata);
extern void XOR4bit_BOT_out_1(void* cdata);
extern void XOR4bit_BOT_out_2(void* cdata);
extern void XOR4bit_BOT_out_3(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void XOR4bit_reset_input(XOR4bit_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void XOR4bit_reset(XOR4bit_ctx* ctx){
   XOR4bit_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void XOR4bit_copy_ctx(XOR4bit_ctx* dest, XOR4bit_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(XOR4bit_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
XOR4bit_ctx* XOR4bit_new_ctx(void* cdata){
   XOR4bit_ctx* ctx = (XOR4bit_ctx*)calloc(1, sizeof(XOR4bit_ctx));
   ctx->client_data = cdata;
   XOR4bit_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void XOR4bit_step(XOR4bit_ctx* ctx){
//LOCAL VARIABLES
   _boolean L8;
   _boolean L11;
   _boolean L13;
   _boolean L15;
//CODE
   L8 = (ctx->_X_0 != ctx->_Y_0);
   XOR4bit_O_out_0(ctx->client_data, L8);
   L11 = (ctx->_X_1 != ctx->_Y_1);
   XOR4bit_O_out_1(ctx->client_data, L11);
   L13 = (ctx->_X_2 != ctx->_Y_2);
   XOR4bit_O_out_2(ctx->client_data, L13);
   L15 = (ctx->_X_3 != ctx->_Y_3);
   XOR4bit_O_out_3(ctx->client_data, L15);
}
