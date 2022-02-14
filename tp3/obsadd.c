/********
* ec2c version 0.68
* c file generated for node : obsadd 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _obsadd_EC2C_SRC_FILE
#include "obsadd.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   _boolean _c;
   //OUTPUTS
   _boolean _O;
   //REGISTERS
} obsadd_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void obsadd_I_a(obsadd_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void obsadd_I_b(obsadd_ctx* ctx, _boolean V){
   ctx->_b = V;
}
void obsadd_I_c(obsadd_ctx* ctx, _boolean V){
   ctx->_c = V;
}
extern void obsadd_O_O(void* cdata, _boolean);
#ifdef CKCHECK
extern void obsadd_BOT_O(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void obsadd_reset_input(obsadd_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void obsadd_reset(obsadd_ctx* ctx){
   obsadd_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void obsadd_copy_ctx(obsadd_ctx* dest, obsadd_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(obsadd_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
obsadd_ctx* obsadd_new_ctx(void* cdata){
   obsadd_ctx* ctx = (obsadd_ctx*)calloc(1, sizeof(obsadd_ctx));
   ctx->client_data = cdata;
   obsadd_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void obsadd_step(obsadd_ctx* ctx){
//LOCAL VARIABLES
   _boolean L6;
   _boolean L5;
   _boolean L4;
   _boolean L10;
   _boolean L11;
   _boolean L9;
   _boolean L12;
   _boolean L8;
   _boolean L14;
   _boolean L13;
   _boolean L7;
   _boolean L3;
//CODE
   L6 = (ctx->_a != ctx->_b);
   L5 = (L6 != ctx->_c);
   L4 = (L5 == L5);
   L10 = (ctx->_b && ctx->_c);
   L11 = (ctx->_a && ctx->_b);
   L9 = (L10 || L11);
   L12 = (ctx->_a && ctx->_c);
   L8 = (L9 || L12);
   L14 = (L6 && ctx->_c);
   L13 = (L14 != L11);
   L7 = (L8 == L13);
   L3 = (L4 && L7);
   obsadd_O_O(ctx->client_data, L3);
}
