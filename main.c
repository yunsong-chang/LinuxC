void add(int, int, int);

int main()
{
	int a = 1;
	int b = 2;
	int c = 0;
	add(a, b, c);
	c++;

	return 0x33;
}

void add(int a, int b, int c)
{
	c = a + b;
}
