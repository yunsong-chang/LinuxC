int main()
{
	unsigned char uc = 0xA5;
	uc = uc >> 1; 				// shr
	uc = uc >> 3;				// shr 3, eax
	uc = uc << 1;				// shl
	uc = uc << 3;				// shl 3, eax

	signed char sc = 0xA5;
	sc = sc >> 1;				// sar
	sc = sc >> 3;				// sar 3, eax
	sc = sc << 1;				// add 翻译成加法
	sc = sc << 3;				// shl 3, eax
	
	return 0;
}
