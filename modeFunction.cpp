// #include"modeFunction.h"

// int * makeArray(int size)
// {


// 	//creates the dynamic array of integers
// 	int * modeArray = new int[size];

// 	//checks if such an array was created successfully
// 	if(!modeArray)	return 0;

// 	//loop that fills the array with the random integers
// 	for(int i = 0; i < size; i++)
//   { cout<<"How many Netflix movies this the student "<<i+1<<" watch"<<endl;
// 		cin>>*(modeArray + i);
//     cout<<"-----------------------------------------"<<endl;
//   }
//   	return modeArray;
// }

// //Function that displays an array to the user
// void showArray(int * modeArray, int size)
// {
// 	for(int i = 0; i < size; i++)
// 		cout << *(modeArray + i) << " ";
// }
// void average(int*modeArray, int size)
// {
//   int sum=0;
//   for(int i = 0; i < size; i++)
// 		sum+=*(modeArray + i);
    
//     cout << sum/size;

// }
// void findMedian(int* modeArray, int size) 
// { 
//     // First we sort the array 
//     sort(modeArray, modeArray+size); 
  
//     // check for even case 
//     if (size % 2 != 0) 
//     {  cout<<"Median"<<modeArray[size/2]<<endl;
//       // return (double)modeArray[size/2]; 
//     }
//     else { 
//     //return (double)
//     cout<<endl<< "Median"<<(modeArray[(size-1)/2] + modeArray[size/2])/2.0<<endl; 
//     }
// } 
// /*-------------------------------------------------------*/
//  //function that calculates the mode from a user input 
// /*-------------------------------------------------------*/
// int mode(int * modeArray, int size)
// {
// 	//parallel array that stores the amount of time an integer is repeated
// 	short * amount = new short[size];
//   //checks if the creation is successful
// 	if(!amount) 
//     return -1;

// 	//loop that sets all the values to 0
// 	for(int k = 0; k < size; k++)
// 		*(amount + k) = 0;

// 	//Loop that check if an element is repeated in the array.
// 	//It starts with the first element and compares to other size - 2
// 	//elements in the array and so on.
// 	for(int i = 0; i < (size - 1); i++)
// 	{
// 		for(int j = 0; j < (size); j++)
// 		{
// 			if(*(modeArray + i) == *(modeArray + j))
// 				*(amount + i) = *(amount + i) + 1;
// 		}
// 	}

// 	//declares a few variables to return the mode from the array
// 	//the position stores the index from the int array
// 	//max is a temporary varible to get the max from the short array
// 	//true_mode is the mode from the int array
// 	int position = 0, max = *amount, true_mode = *modeArray;

// 	//Loop that checks the maximum from the short array
// 	for(int s = 1; s < size; s++)
// 	{
// 		if(max < *(amount + s))
// 		{
// 			max = *(amount + s);
// 			true_mode = *(modeArray + s);
// 			position = s;
// 		}
// 	}

// 	// free some memory
// 	delete [] amount;
// 	delete [] modeArray;

// 	//the case where there is no mode
// 	if(max == 0) 
//   return -1;

// 	return true_mode;
// }