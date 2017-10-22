
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
	// inception
	int* p = &arr[0];
	int** pp = &p;

	**pp = 69;

	*pp = &calc;

	*p = 64;

	// Type Punning (Strict Aliasing):
	// "You can do it, but don't do it." -chili
	float f = 420.0f;
	int* p2 = reinterpret_cast<int*>( &f );
	arr[1] = *p;

	// C-Style cast also only reinterpret to char IF unavoidable
	char* p3 = (char*)&f;
	arr[2] = *p3;

	return 0;
}