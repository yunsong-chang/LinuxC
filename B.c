int main()
{
	int A[] = {1,2,3,4};

	A[2]=0x33;

	for(int i=0; i<sizeof A/sizeof A[0]; i++)
		A[i]=i+1;
	return 0;
}
