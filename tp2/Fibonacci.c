/********
* ec2c version 0.68
* c file generated for node : Fibonacci 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _Fibonacci_EC2C_SRC_FILE
#include "Fibonacci.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _reset;
   //OUTPUTS
   _integer _integer;
   //REGISTERS
   _integer M8;
   _boolean M8_nil;
   _integer M7;
   _boolean M7_nil;
   _boolean M2;
} Fibonacci_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void Fibonacci_I_reset(Fibonacci_ctx* ctx, _boolean V){
   ctx->_reset = V;
}
extern void Fibonacci_O_integer(void* cdata, _integer);
#ifdef CKCHECK
extern void Fibonacci_BOT_integer(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void Fibonacci_reset_input(Fibonacci_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void Fibonacci_reset(Fibonacci_ctx* ctx){
   ctx->M8_nil = _true;
   ctx->M7_nil = _true;
   ctx->M2 = _true;
   Fibonacci_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void Fibonacci_copy_ctx(Fibonacci_ctx* dest, Fibonacci_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(Fibonacci_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
Fibonacci_ctx* Fibonacci_new_ctx(void* cdata){
   Fibonacci_ctx* ctx = (Fibonacci_ctx*)calloc(1, sizeof(Fibonacci_ctx));
   ctx->client_data = cdata;
   Fibonacci_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void Fibonacci_step(Fibonacci_ctx* ctx){
//LOCAL VARIABLES
   _integer L6;
   _integer L5;
   _integer L1;
   _integer T8;
   _integer T7;
//CODE
   L6 = (ctx->M7 + ctx->M8);
   if (ctx->_reset) {
      L5 = 1;
   } else {
      L5 = L6;
   }
   if (ctx->M2) {
      L1 = 1;
   } else {
      L1 = L5;
   }
   Fibonacci_O_integer(ctx->client_data, L1);
   T8 = ctx->M7;
   T7 = L1;
   ctx->M8 = T8;
   ctx->M8_nil = _false;
   ctx->M7 = T7;
   ctx->M7_nil = _false;
   ctx->M2 = ctx->M2 && !(_true);
}
