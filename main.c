/* artificial device registers */
unsigned char recv;
unsigned char send;

/* memory buffer */
unsigned char buf[3];

int main(void)
{
	buf[0] = recv; // 读recv三次,可能优化成只读第一次
	buf[1] = recv;
	buf[2] = recv;
	send = ~buf[0]; // 写send三次,可能优化成只写最后一次
	send = ~buf[1];
	send = ~buf[2];

	return 0;
}
