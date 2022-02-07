/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : multiplexeur4bit 
* to be used with : multiplexeur4bit.c 
********/
#ifndef _multiplexeur4bit_EC2C_H_FILE
#define _multiplexeur4bit_EC2C_H_FILE
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
//MODULE: multiplexeur4bit 9 4
//IN: _boolean X_0
//IN: _boolean X_1
//IN: _boolean X_2
//IN: _boolean X_3
//IN: _boolean Y_0
//IN: _boolean Y_1
//IN: _boolean Y_2
//IN: _boolean Y_3
//IN: _boolean sel
//OUT: _boolean out_0
//OUT: _boolean out_1
//OUT: _boolean out_2
//OUT: _boolean out_3
#ifndef _multiplexeur4bit_EC2C_SRC_FILE
/*--------Context type -------------*/
struct multiplexeur4bit_ctx;
/*-------- Input procedures -------------*/
extern void multiplexeur4bit_I_X_0(struct multiplexeur4bit_ctx* ctx, _boolean);
extern void multiplexeur4bit_I_X_1(struct multiplexeur4bit_ctx* ctx, _boolean);
extern void multiplexeur4bit_I_X_2(struct multiplexeur4bit_ctx* ctx, _boolean);
extern void multiplexeur4bit_I_X_3(struct multiplexeur4bit_ctx* ctx, _boolean);
extern void multiplexeur4bit_I_Y_0(struct multiplexeur4bit_ctx* ctx, _boolean);
extern void multiplexeur4bit_I_Y_1(struct multiplexeur4bit_ctx* ctx, _boolean);
extern void multiplexeur4bit_I_Y_2(struct multiplexeur4bit_ctx* ctx, _boolean);
extern void multiplexeur4bit_I_Y_3(struct multiplexeur4bit_ctx* ctx, _boolean);
extern void multiplexeur4bit_I_sel(struct multiplexeur4bit_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void multiplexeur4bit_reset(struct multiplexeur4bit_ctx* ctx);
/*--------Context copy -------------*/
extern void multiplexeur4bit_copy_ctx(struct multiplexeur4bit_ctx
* dest, struct multiplexeur4bit_ctx* src);
/*--------Context allocation --------*/
extern struct multiplexeur4bit_ctx* multiplexeur4bit_new_ctx
(void* client_data);
/*-------- Step procedure -----------*/
extern void multiplexeur4bit_step(struct multiplexeur4bit_ctx* ctx);
#endif
#endif
