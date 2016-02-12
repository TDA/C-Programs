int main() {
	char* data = "\xb8\x0b\x00\x00\x00"
"\x68\x2f\x73\x68\x00"
"\x68\x2f\x62\x69\x6e"
"\x89\xe3"
"\x6a\x00"
"\x53"
"\x89\xe1"
"\xba\x00\x00\x00\x00"
"\xcd\x80"
"\xb8\x01\x00\x00\x00"
"\xc3";
	void (*fp)(void);

	fp = data;
	fp();
	return 0;
}

//b8 0b 00 00 00          mov    $0xb,%eax
//68 2f 73 68 00          push   $0x68732f
//68 2f 62 69 6e          push   $0x6e69622f
//89 e3                   mov    %esp,%ebx
//6a 00                   push   $0x0
//53                      push   %ebx
//89 e1                   mov    %esp,%ecx
//ba 00 00 00 00          mov    $0x0,%edx
//cd 80                   int    $0x80
//b8 01 00 00 00          mov    $0x1,%eax
// "\xb8\x0b\x00\x00\x00"
// "\x68\x2f\x73\x68\x00"
// "\x68\x2f\x62\x69\x6e"
// "\x89\xe3"
// "\x6a\x00"
// "\x53"
// "\x89\xe1"
// "\xba\x00\x00\x00\x00"
// "\xcd\x80"
// "\xb8\x01\x00\x00\x00"
// "\xc3"