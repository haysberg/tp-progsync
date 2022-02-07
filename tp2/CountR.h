/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : CountR 
* to be used with : CountR.c 
********/
#ifndef _CountR_EC2C_H_FILE
#define _CountR_EC2C_H_FILE
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
//MODULE: CountR 1 1
//IN: _boolean inp
//OUT: _integer out
#ifndef _CountR_EC2C_SRC_FILE
/*--------Context type -------------*/
struct CountR_ctx;
/*-------- Input procedures -------------*/
extern void CountR_I_inp(struct CountR_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void CountR_reset(struct CountR_ctx* ctx);
/*--------Context copy -------------*/
extern void CountR_copy_ctx(struct CountR_ctx* dest, struct CountR_ctx* src);
/*--------Context allocation --------*/
extern struct CountR_ctx* CountR_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void CountR_step(struct CountR_ctx* ctx);
#endif
#endif
