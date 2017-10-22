#include <iostream>

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

void RevPoindexter( int* arr )
{
	int* pTmp = new int;
	for ( int* ptr = arr; ptr <= arr + sizeof( arr ) / 2; ptr++ )
	{
		*pTmp = arr[ptr - arr]; // adr after the array as temp = ascending
		arr[ptr - arr] = arr[sizeof(arr) - (ptr - arr)]; // adr at ascending = descending
		arr[sizeof(arr) - (ptr - arr)] = *pTmp; // adr at descending = temp
	}
	delete pTmp;
}

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int calc = SumPoindexter( arr );
	RevPoindexter( arr );

	return 0;
}