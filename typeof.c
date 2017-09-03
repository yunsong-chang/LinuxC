int main()
{
	typeof(3) x = 3;
	typeof('a') c = 'a';		// 还是整型
	typeof(3.14) pi = 3.14;

	return 0;
}

// objdump -dS a.out
