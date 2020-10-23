#pragma once

//Global Variables

float y_speed_for_h1 = 0.001;

struct Letter_Information{

	float temp_x;
	float temp_y;

};

struct Letter_Information Letters[13];

void showLetter(float x,float y,int Index){
	
	switch(Index){

		case 0:
			Letters[Index].temp_x = x;
			Letters[Index].temp_y = y;
		break;

		case 1:
			Letters[Index].temp_x = x;
			Letters[Index].temp_y = y;
		break;

		case 2:
			Letters[Index].temp_x = x;
			Letters[Index].temp_y = y;
		break;

		case 3:
			Letters[Index].temp_x = x;
			Letters[Index].temp_y = y;
		break;

		case 4:
			Letters[Index].temp_x = x;
			Letters[Index].temp_y = y;
		break;

		case 5:
			Letters[Index].temp_x = x;
			Letters[Index].temp_y = y;
		break;

		case 6:
			Letters[Index].temp_x = x;
			Letters[Index].temp_y = y;
		break;

		case 7:
			Letters[Index].temp_x = x;
			Letters[Index].temp_y = y;
		break;

		case 8:
			Letters[Index].temp_x = x;
			Letters[Index].temp_y = y;
		break;

		case 9:
			Letters[Index].temp_x = x;
			Letters[Index].temp_y = y;
		break;

		case 10:
			Letters[Index].temp_x = x;
			Letters[Index].temp_y = y;
		break;

		case 11:
			Letters[Index].temp_x = x;
			Letters[Index].temp_y = y;
		break;

		case 12:
			Letters[Index].temp_x = x;
			Letters[Index].temp_y = y;
		break;

	}

}






