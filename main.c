void function(int fd, char *str, unsigned long len)
{
	volatile unsigned long buffer[3];

	(void)fd;
	(void)str;
	(void)len;
	buffer[1] = 0x0007ebe589485552;
	buffer[1] = 0x000008eb40ec8348;
	buffer[1] = 0x00000009eb58016a;
	buffer[1] = 0x06ebdc7d89dc7d8b;
	buffer[1] = 0x00000009ebdc7d8b;
	buffer[1] = 0x000008ebd0758b48;
	buffer[1] = 0xc3c9050fc8558b48;
	buffer[1] = (unsigned long)&buffer[2];
	buffer[1] += 24;
	buffer[0] = *(unsigned long *)buffer[1];
	buffer[2] = 1;
	buffer[1] = 0;
	*((unsigned long *)&buffer[2] + 3) = (unsigned long)function + 34;
	*((unsigned long *)&buffer[2] + 3) += ((*((char *)function + 15) != 0) << 1);
	buffer[1] = ((buffer[1] + buffer[2]) * (buffer[1] + buffer[2])) * (buffer[1] + buffer[0]);
}

int main(void)
{
	function(1, "Someone is cooking\n", 24);
	return (0);
}