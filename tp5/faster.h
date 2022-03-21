/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : faster 
* to be used with : faster.c 
********/
#ifndef _faster_EC2C_H_FILE
#define _faster_EC2C_H_FILE
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
//MODULE: faster 2 2
//IN: _boolean a
//IN: _boolean b
//OUT: _boolean faster
//OUT: _integer cpt
#ifndef _faster_EC2C_SRC_FILE
/*--------Context type -------------*/
struct faster_ctx;
/*-------- Input procedures -------------*/
extern void faster_I_a(struct faster_ctx* ctx, _boolean);
extern void faster_I_b(struct faster_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void faster_reset(struct faster_ctx* ctx);
/*--------Context copy -------------*/
extern void faster_copy_ctx(struct faster_ctx* dest, struct faster_ctx* src);
/*--------Context allocation --------*/
extern struct faster_ctx* faster_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void faster_step(struct faster_ctx* ctx);
#endif
#endif
