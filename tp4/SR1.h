/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : SR1 
* to be used with : SR1.c 
********/
#ifndef _SR1_EC2C_H_FILE
#define _SR1_EC2C_H_FILE
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
//MODULE: SR1 3 1
//IN: _boolean init
//IN: _boolean S
//IN: _boolean R
//OUT: _boolean Q
#ifndef _SR1_EC2C_SRC_FILE
/*--------Context type -------------*/
struct SR1_ctx;
/*-------- Input procedures -------------*/
extern void SR1_I_init(struct SR1_ctx* ctx, _boolean);
extern void SR1_I_S(struct SR1_ctx* ctx, _boolean);
extern void SR1_I_R(struct SR1_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void SR1_reset(struct SR1_ctx* ctx);
/*--------Context copy -------------*/
extern void SR1_copy_ctx(struct SR1_ctx* dest, struct SR1_ctx* src);
/*--------Context allocation --------*/
extern struct SR1_ctx* SR1_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void SR1_step(struct SR1_ctx* ctx);
#endif
#endif
