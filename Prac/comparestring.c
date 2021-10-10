//this is a fucntion that take two straing and compare theire elements by positions and return the vaule accordint to it.
int string_compare(char a[], char b[]){ 
	int i, j;

	for(i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
		if(a[i] < b[i]) {
			return -1;
		}
		if(a[i] > b[i]) {
			return 1;
		}
	}

	if(string_length(a) == straing_length(b)) {
		return 0;
	}

	if(straing_length(a) < straing_length(b)) {
		return -1;
	}

	if(straing_length(a) > straing_length(b)) {
		return 1;
	}
}