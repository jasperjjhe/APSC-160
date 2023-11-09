/*
Name: He, Jasper Jia Jie
Student Number: 66909672
Term/Section: W1/101
*/

//Question 1

//Part (a)

//Answer: i=3, sum=6

//Part (b)

// Answer:

int i = 1, sum = 0;

while (i <= 3){
    sum += i;
    i++;
}

i--;

printf("i=%d, sum=%d\n", i, sum);

//Question 2

//Part (a)

//Answer:

int search(int value, int array[NUM_ROWS][NUM_COLS]){

int found = 0;

    for (int rowIndex = 0; rowIndex < NUM_ROWS; rowIndex++){
        
        for (int colIndex = 0; colIndex < NUM_COLS; colIndex++){
            
            if (array[rowIndex][colIndex] == value){

                found = 1;
                break;
            }
        }

        if (found == 1){
            
            break;
        }
    }

    if (found == 1){

        return TRUE;

    }

    return FALSE;

}

//Part (b)

//Answer:

int search(int value, int array[NUM_ROWS][NUM_COLS]){

    for (int rowIndex = 0; rowIndex < NUM_ROWS; rowIndex++){
        
        for (int colIndex = 0; colIndex < NUM_COLS; colIndex++){
            
            if (array[rowIndex][colIndex] == value){

                return TRUE;
            }
        }
    }

    return FALSE;

}

//Part (c)

//Answer:

int search(int value, int array[NUM_ROWS][NUM_COLS]){

int rowIndex = 0, colIndex = 0, found = 0;

    while (rowIndex < NUM_ROWS && found != 1){
        
        while (colIndex < NUM_COLS && found != 1){
            
            if (array[rowIndex][colIndex] == value){

                found = 1;
            }

            colIndex++;

        }

        rowIndex++;

    }

    if (found == 1){

        return TRUE;

    }

    return FALSE;

}