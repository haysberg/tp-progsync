/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : demiAdditionneur 
* to be used with : demiAdditionneur.c 
********/
#ifndef _demiAdditionneur_EC2C_H_FILE
#define _demiAdditionneur_EC2C_H_FILE
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
//MODULE: demiAdditionneur 2 2
//IN: _boolean a
//IN: _boolean b
//OUT: _boolean cy
//OUT: _boolean sum
#ifndef _demiAdditionneur_EC2C_SRC_FILE
/*--------Context type -------------*/
struct demiAdditionneur_ctx;
/*-------- Input procedures -------------*/
extern void demiAdditionneur_I_a(struct demiAdditionneur_ctx* ctx, _boolean);
extern void demiAdditionneur_I_b(struct demiAdditionneur_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void demiAdditionneur_reset(struct demiAdditionneur_ctx* ctx);
/*--------Context copy -------------*/
extern void demiAdditionneur_copy_ctx(struct demiAdditionneur_ctx
* dest, struct demiAdditionneur_ctx* src);
/*--------Context allocation --------*/
extern struct demiAdditionneur_ctx* demiAdditionneur_new_ctx
(void* client_data);
/*-------- Step procedure -----------*/
extern void demiAdditionneur_step(struct demiAdditionneur_ctx* ctx);
#endif
#endif
