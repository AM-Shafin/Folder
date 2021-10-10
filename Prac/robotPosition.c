//same solution using 2D array and blocked cell.(not solved)
#include <stdio.h>
int main() {

	int x, y, i, j, n; 
	int grid[10][10]; //an 2d array takes as grid for robot's movement
	char c; // command veriable

	//Preparing the whole grid for robot movement first.
	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			grid[i][j] = 1; //assigning 1 to indicate free-to-move cell
		}
	}

	printf("Please enter the number of blocked cells: ");
	scanf("%d", &n);

	//taking how many and which cells are blocked for robot to move.
	for (i = 0; i < n; i++) {

		if(i == 0) {
			printf("Please enther the postion of blocked cells");
		}  
    	scanf("%d %d", &x, &y);  
    	grid[x][y] = 0; //assigning 0 to indicate blocked cell 
	}

	//Taking the starting position of the Robot and proceeding to command part
	printf("Please enter the initial positoin: ");
	scanf("%d %d", &x, &y);

	//This infinite loop take Command input ultill given input is 'S'(stop)
	while(1) {

		scanf("%c", &c);

		//statement for breaking the loop and executing last position of the robot
		if (c == 'S') { 
			break;
		}

		//we're using nested condition statement to check if requested move is acceptable/the destination cell is blocked. 
		//If the requested position have 0 value assigned, it's blocked and Robot do nothing.

		//Move Up command
		else if (c == 'U') {
			if (grid[x-1][y] == 1)
			{
				x--;
			}
		}
		//Move Down commnad
		else if(c == 'D') {
			if (grid[x+1][y] == 1)
			{
				x++;
			}
		}
		//Move Right command
		else if(c == 'R') {
			if (grid[x][y+1] == 1)
			{
				y++;
			}
		}
		//Move Left command
		else if (c == 'L') {
			if (grid[x][y-1] == 1)
			{
				y--;
			}
		}
		
	}

	//reveal the final position of Robot
	printf("Final postion of the robot is %d, %d\n", x, y);

	return 0;  
}





















/*
// A C/C++ program that think there's a robot at N x N grid. We will give it some commands, 
// one cell to the right, one to the left, one up and one down command.
// Suppose, at this moment the robot is in (2, 2) room. If you ask him to go upstairs, 
// he will go to room 1 (2). You can go downstairs (3, 2) in the room. 
// If asked to go right and left, (2, 3) and (2, 1) will go home, respectively. 
// The commands are U (up), D (down), L (left), R (right), S (stop). 
// Now if we tell you the starting position and the commands, 
// then you have to find the last position of the robot (position after stopping).

#include <stdio.h> 
int main() {
	int x, y;

	char c;
	printf("Please enter the initial positoin: ");
	scanf("%d %d", &x, &y);
	while(1) {
		scanf("%c", &c);
		if (c == 'S') {
			break;
		}
		else if (c == 'U') {
			x--;
		}
		else if(c == 'D') {
			x++;
		}
		else if(c == 'R') {
			y++;
		}
		else if (c == 'L') {
			y--;
		}
	}
	printf("Final postion of the robot is %d, %d\n", x, y);

	return 0;
}*/