void __cdecl Log(const char*);
typedef void (__cdecl * pfun)(const char *);
pfun SetLogCB(pfun arg);