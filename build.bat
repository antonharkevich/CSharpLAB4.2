g++ -c -DSUM sumofarray.cpp
g++ -shared -o sumofarray.dll sumofarray.o -Wl,--out-implib,sumofarray.a