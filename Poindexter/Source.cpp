#include <algorithm>

int SumPoindexter( int* arr )
{
	int* ptr = arr;
	int sum = 0;
	while ( ptr != arr + sizeof(arr) )
	{
		sum += *ptr++;
	}
	return sum;
}

void RevPoindexter( int* pl )
{
	for ( int* pr = pl + sizeof( pl ); pl < pr; pl++, pr-- )
	{
		std::swap( *pl, *pr );
	}
}

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int calc = SumPoindexter( arr );
	RevPoindexter( arr );

	return 0;
}