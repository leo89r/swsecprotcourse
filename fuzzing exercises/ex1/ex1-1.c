int binomial(int n, int k)
{
	if (n < 0)
		return -1;
	else if (k < 0)
		return -1;
	else if (k > n)
		return -1;
	else if (k == 0)
		return 1;
	else if (n == k)
		return 1;
	else
		return binomial(n - 1, k - 1) + binomial(n - 1, k);
}

int main()
{
	/* Write your test code here. */
	
	return 0;
}
