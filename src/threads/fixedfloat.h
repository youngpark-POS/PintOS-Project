#define F (1 << 14)

int inttofp(int x) {return x * F;}
int fptoint(int x) {return x / F;}
int fptointround(int x) {return x >= 0 ? (x + F/2)/F : (x - F/2)/F;}
int fpadd(int x, int y) {return x + y;}
int fpsub(int x, int y) {return x - y;}
int addfpn(int x, int y) {return x + y*F;}
int subfpn(int x, int y) {return x - y*F;}
int fpmul(int x, int y) {return ((int64_t)x)*y/F;}
int mulfpn(int  x, int y) {return x * y;}
int fpdiv(int x, int y) {return ((int64_t)x)*F/y;}
int divfpn(int x, int y) {return x / y;}
