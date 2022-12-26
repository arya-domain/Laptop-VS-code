
	/* Get the Xor of all elements */
	for (i = 1; i < n; i++)
		Xor ^= arr[i];

	/* Get the rightmost set bit in set_bit_no */
	set_bit_no = Xor & ~(Xor - 1);

	/* Now divide elements in two sets by
	comparing rightmost set bit of Xor with bit
	at same position in each element. */
	for (i = 0; i < n; i++) {

		/*Xor of first set */
		if (arr[i] & set_bit_no)
			*x = *x ^ arr[i];
		/*Xor of second set*/
		else {
			*y = *y ^ arr[i];
		}
	}
}

/* Driver code */
int main()
{
	int arr[] = { 2, 3, 7, 9, 11, 2, 3, 11 };
	int n = sizeof(arr) / sizeof(*arr);
	int* x = new int[(sizeof(int))];
	int* y = new int[(sizeof(int))];
	get2NonRepeatingNos(arr, n, x, y);
	cout << "The non-repeating elements are " << *x
		<< " and " << *y;
}