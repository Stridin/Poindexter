
int SumPoindexter( int* p )
{
	// NOTE: const int* const p
	// const int* p means value pointedd at cant be modified
	// int* const p meant pointer cant be redirected
	int sum = 0;
	for ( int* e = p + sizeof( p ); p <= e; p++ )
	{
		sum += *p;
	}
	return sum;
}

int main()
{
	int arr[5] = { 2, 4, 12, 7, 15 };
	int calc = SumPoindexter( arr );

	// int** pp pointer of a pointer
	int* p = &arr[0];
	int** pp = &p;

	**pp = 69;

	*pp = &calc;

	*p = 64;

	return 0;
}