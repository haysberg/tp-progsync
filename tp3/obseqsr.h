/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : obseqsr 
* to be used with : obseqsr.c 
********/
#ifndef _obseqsr_EC2C_H_FILE
#define _obseqsr_EC2C_H_FILE
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
//MODULE: obseqsr 3 1
//IN: _boolean init
//IN: _boolean S
//IN: _boolean R
//OUT: _boolean O
#ifndef _obseqsr_EC2C_SRC_FILE
/*--------Context type -------------*/
struct obseqsr_ctx;
/*-------- Input procedures -------------*/
extern void obseqsr_I_init(struct obseqsr_ctx* ctx, _boolean);
extern void obseqsr_I_S(struct obseqsr_ctx* ctx, _boolean);
extern void obseqsr_I_R(struct obseqsr_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void obseqsr_reset(struct obseqsr_ctx* ctx);
/*--------Context copy -------------*/
extern void obseqsr_copy_ctx(struct obseqsr_ctx* dest, struct obseqsr_ctx
* src);
/*--------Context allocation --------*/
extern struct obseqsr_ctx* obseqsr_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void obseqsr_step(struct obseqsr_ctx* ctx);
#endif
#endif
