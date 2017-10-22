
int SumPoindexter( int* p )
{
	int sum = 0;
	for ( int i = 0; i <= sizeof( p ); i++ )
	{
		sum += p[i];
	}
	return sum;
}

int main()
{
	int arr[5] = { 2, 4, 12, 7, 15 };
	int calc = SumPoindexter( arr );

	return 0;
}