
int SumPoindexter( int arr[] )
{
	int* ptr = arr;
	int sum = 0;
	while ( ptr != arr + sizeof(arr) )
	{
		sum += *ptr++;
	}
	return sum;
}

int main()
{
	int arr[5] = { 2, 4, 12, 7, 15 };
	int calc = SumPoindexter( arr );

	return 0;
}