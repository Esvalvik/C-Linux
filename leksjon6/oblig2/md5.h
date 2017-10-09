// Code by: B-Con (http://b-con.us) 
// Released under the GNU GPL 
// MD5 Hash Digest implementation (little endian byte order) 


// Bah, signed variables are for wimps 
#define uchar unsigned char 
#define uint unsigned int 

// DBL_INT_ADD treats two unsigned ints a and b as one 64-bit integer and adds c to it
#define DBL_INT_ADD(a,b,c) if (a > 0xffffffff - c) ++b; a += c; 
#define ROTLEFT(a,b) ((a << b) | (a >> (32-b))) 

#define F(x,y,z) ((x & y) | (~x & z)) 
#define G(x,y,z) ((x & z) | (y & ~z)) 
#define H(x,y,z) (x ^ y ^ z) 
#define I(x,y,z) (y ^ (x | ~z)) 

#define FF(a,b,c,d,m,s,t) { a += F(b,c,d) + m + t; \
                            a = b + ROTLEFT(a,s); }
#define GG(a,b,c,d,m,s,t) { a += G(b,c,d) + m + t; \
                            a = b + ROTLEFT(a,s); }
#define HH(a,b,c,d,m,s,t) { a += H(b,c,d) + m + t; \
                            a = b + ROTLEFT(a,s); } 
#define II(a,b,c,d,m,s,t) { a += I(b,c,d) + m + t; \
                            a = b + ROTLEFT(a,s); } 


typedef struct { 
   uchar data[64]; 
   uint datalen; 
   uint bitlen[2]; 
   uint state[4]; 
} MD5_CTX; 


void md5_transform(MD5_CTX *ctx, uchar data[]); 

void md5_init(MD5_CTX *ctx);

void md5_update(MD5_CTX *ctx, uchar data[], uint len);

void md5_final(MD5_CTX *ctx, uchar hash[]);  
