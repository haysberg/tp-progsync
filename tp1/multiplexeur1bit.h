/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : multiplexeur1bit 
* to be used with : multiplexeur1bit.c 
********/
#ifndef _multiplexeur1bit_EC2C_H_FILE
#define _multiplexeur1bit_EC2C_H_FILE
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
//MODULE: multiplexeur1bit 3 1
//IN: _boolean a
//IN: _boolean b
//IN: _boolean sel
//OUT: _boolean out
#ifndef _multiplexeur1bit_EC2C_SRC_FILE
/*--------Context type -------------*/
struct multiplexeur1bit_ctx;
/*-------- Input procedures -------------*/
extern void multiplexeur1bit_I_a(struct multiplexeur1bit_ctx* ctx, _boolean);
extern void multiplexeur1bit_I_b(struct multiplexeur1bit_ctx* ctx, _boolean);
extern void multiplexeur1bit_I_sel(struct multiplexeur1bit_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void multiplexeur1bit_reset(struct multiplexeur1bit_ctx* ctx);
/*--------Context copy -------------*/
extern void multiplexeur1bit_copy_ctx(struct multiplexeur1bit_ctx
* dest, struct multiplexeur1bit_ctx* src);
/*--------Context allocation --------*/
extern struct multiplexeur1bit_ctx* multiplexeur1bit_new_ctx
(void* client_data);
/*-------- Step procedure -----------*/
extern void multiplexeur1bit_step(struct multiplexeur1bit_ctx* ctx);
#endif
#endif
