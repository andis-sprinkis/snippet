/* https://c-faq.com/strangeprob/ptralign.html */

struct mystruct {
	char c;
	long int i32;
	int i16;
} s; /* aligned data structure */
unsigned char buf[7]; /* external data buffer */
unsigned char *p = buf; /* pointer to the external data buffer */

int main(int argc, char *argv[])
{
  /* *p char 10000001 */
  s.c = *p++; /* derefence from p 8 bits of data, add 8 to p, assign data to s.c */
  /* 10000001 */

  /* *p long int 10101010 01010101 11001100 00110011 */
  s.i32 = (long)*p++ << 24; /* dereference from p 8 bits of data, add 8 to p, cast data to 32 bit long, shift data 24 bits left, assign data to s.i32 */
  /* 10101010 */
  /* 00000000 00000000 00000000 10101010 */
  /* 10101010 00000000 00000000 00000000 */
  s.i32 |= (long)*p++ << 16; /* dereference from p 8 bits of data, add 8 to p, cast data to 32 bit long, shift data 16 bits left, assign-or data to s.i32 */
  /* 01010101 */
  /* 00000000 00000000 00000000 01010101 */
  /* 00000000 01010101 00000000 00000000 */
  /* 10101010 01010101 00000000 00000000 */
  s.i32 |= (unsigned)(*p++ << 8); /* dereference from p 8 bits of data, add 8 to p, cast data to 16 bit unsigned, shift data 8 bits left, assign-or data to s.i32, the data is promoted to 32 bit long int rvalue */
  /* 11001100 */
  /* 00000000 11001100 */
  /* 11001100 00000000 */
  /* 10101010 01010101 11001100 00000000 */
  s.i32 |= *p++; /* dereference from p 8 bits of data, add 8 to p, assign-or data to s.i32, the data is promoted to 32 bit long int rvalue */
  /* 00110011 */
  /* 10101010 01010101 11001100 00110011 */

  /* *p int 11110000 00001111 */
  s.i16 = *p++ << 8; /* dereference from p 8 bits of data, add 8 to p, ?? data is promoted to 16bit int by lvalue ??, shift data 8 bits left, assign data to s.i16 */
  /* 00000000 11110000 */
  /* 11110000 00000000 */
  s.i16 |= *p++; /* dereference from p 8 bits of data, add 8 to p, assign-or data to s.i16 */
  /* 00001111 */
  /* 11110000 00001111 */

  return 0;
}
