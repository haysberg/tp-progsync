/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : CountIIR 
* to be used with : CountIIR.c 
********/
#ifndef _CountIIR_EC2C_H_FILE
#define _CountIIR_EC2C_H_FILE
/*-------- Predefined types ---------*/
#ifndef _EC2C_PREDEF_TYPES
#define _EC2C_PREDEF_TYPES
typedef int _boolean;
typedef int _integer;
typedef char* _string;
typedef double _real;
typedef double _double;
typedef float _float;
#define _false 0
#define _true 1
#endif
/*--------- Pragmas ----------------*/
//MODULE: CountIIR 3 1
//IN: _integer init
//IN: _integer incr
//IN: _boolean reset
//OUT: _integer out
#ifndef _CountIIR_EC2C_SRC_FILE
/*--------Context type -------------*/
struct CountIIR_ctx;
/*-------- Input procedures -------------*/
extern void CountIIR_I_init(struct CountIIR_ctx* ctx, _integer);
extern void CountIIR_I_incr(struct CountIIR_ctx* ctx, _integer);
extern void CountIIR_I_reset(struct CountIIR_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void CountIIR_reset(struct CountIIR_ctx* ctx);
/*--------Context copy -------------*/
extern void CountIIR_copy_ctx(struct CountIIR_ctx* dest, struct CountIIR_ctx
* src);
/*--------Context allocation --------*/
extern struct CountIIR_ctx* CountIIR_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void CountIIR_step(struct CountIIR_ctx* ctx);
#endif
#endif
