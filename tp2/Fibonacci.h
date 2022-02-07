/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : Fibonacci 
* to be used with : Fibonacci.c 
********/
#ifndef _Fibonacci_EC2C_H_FILE
#define _Fibonacci_EC2C_H_FILE
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
//MODULE: Fibonacci 1 1
//IN: _boolean reset
//OUT: _integer integer
#ifndef _Fibonacci_EC2C_SRC_FILE
/*--------Context type -------------*/
struct Fibonacci_ctx;
/*-------- Input procedures -------------*/
extern void Fibonacci_I_reset(struct Fibonacci_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void Fibonacci_reset(struct Fibonacci_ctx* ctx);
/*--------Context copy -------------*/
extern void Fibonacci_copy_ctx(struct Fibonacci_ctx* dest, struct Fibonacci_ctx
* src);
/*--------Context allocation --------*/
extern struct Fibonacci_ctx* Fibonacci_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void Fibonacci_step(struct Fibonacci_ctx* ctx);
#endif
#endif
