#include <stdio.h>
#include <stdbool.h>

char answer;

void question1(int* total,bool valid_answer_check){
    while(valid_answer_check == false){
        printf("\nQuestion 1!\nWhat is the best type of concert band instrument?(Type 1, 2, 3, or 4)\n1.) Brass\n2.) Drums\n3.) Mallets\n4.) Woodwinds\nAnswer: ");
        scanf("%c",&answer);
        switch(answer){
            case '1':
                *total += 8;
                valid_answer_check = true;
                break;
            case '2':
                *total += 6;
                valid_answer_check = true;
                break;
            case '3':
                *total += 4;
                valid_answer_check = true;
                break;
            case '4':
                *total += 10;
                valid_answer_check = true;
                break;
            default:
                printf("\nPlease choose a valid choice. 1, 2, 3, or 4.\n");
                valid_answer_check = false;
        }
    }
}
void question2(int* total,bool valid_answer_check){
    valid_answer_check = false;
    while(valid_answer_check == false){
        printf("\nQuestion 2!\nWhat is the oldest instrument? (Type 1, 2, 3, or 4)\n1.) Trumpet\n2.) Clarinet\n3.) Saxophone\n4.) Flute\nAnswer: ");
        scanf("%c",&answer);
        switch(answer){
            case '1':
                *total += 8;
                valid_answer_check = true;
                break;
            case '2':
                *total += 6;
                valid_answer_check = true;
                break;
            case '3':
                *total += 4;
                valid_answer_check = true;
                break;
            case '4':
                *total += 10;
                valid_answer_check = true;
                break;
            default:
                printf("\nPlease choose a valid choice. 1, 2, 3, or 4.\n");
                valid_answer_check = false;
        }
    }
}
void question3(int* total,bool valid_answer_check){
    valid_answer_check = false;
    while(valid_answer_check == false){
        printf("\nQuestion 3!\nWhat is the saxophone primarily made of? (Type 1, 2, 3, or 4)\n1.) Iron\n2.) Wood\n3.) Brass\n4.) Gold\nAnswer: ");
        scanf("%c",&answer);
        switch(answer){
            case '1':
                *total += 4;
                valid_answer_check = true;
                break;
            case '2':
                *total += 8;
                valid_answer_check = true;
                break;
            case '3':
                *total += 10;
                valid_answer_check = true;
                break;
            case '4':
                *total += 6;
                valid_answer_check = true;
                break;
            default:
                printf("\nPlease choose a valid choice. 1, 2, 3, or 4.\n");
                valid_answer_check = false;
        }
    }
}
void question4(int* total,bool valid_answer_check){
    valid_answer_check = false;
    while(valid_answer_check == false){
        printf("\nQuestion 4!\nWhat would you pick for dinner during a state marching band competition? (Type 1, 2, 3, or 4)\n1.) Fazoli's\n2.) Raising Cane's\n3.) Sandwiches\n4.) Pizza\nAnswer: ");
        scanf("%c",&answer);
        switch(answer){
            case '1':
                *total += 10;
                valid_answer_check = true;
                break;
            case '2':
                *total += 6;
                valid_answer_check = true;
                break;
            case '3':
                *total += 8;
                valid_answer_check = true;
                break;
            case '4':
                *total += 4;
                valid_answer_check = true;
                break;
            default:
                printf("\nPlease choose a valid choice. 1, 2, 3, or 4.\n");
                valid_answer_check = false;
        }
    }
}
void question5(int* total,bool valid_answer_check){
    valid_answer_check = false;
    while(valid_answer_check == false){
        printf("\nQuestion 5!\nWhat sounds like a cooler show title? (Type 1, 2, 3, or 4)\n1.) Cages\n2.) Soulstice\n3.) The Crossing\n4.) Interstellar\nAnswer: ");
        scanf("%c",&answer);
        switch(answer){
            case '1':
                *total += 4;
                valid_answer_check = true;
                break;
            case '2':
                *total += 6;
                valid_answer_check = true;
                break;
            case '3':
                *total += 10;
                valid_answer_check = true;
                break;
            case '4':
                *total += 8;
                valid_answer_check = true;
                break;
            default:
                printf("\nPlease choose a valid choice. 1, 2, 3, or 4.\n");
                valid_answer_check = false;
        }
    }
}
void question6(int* total,bool valid_answer_check){
    valid_answer_check = false;
    while(valid_answer_check == false){
        printf("\nQuestion 6!\nIf you played a brass instrument, what would you play? (Type 1, 2, 3, or 4)\n1.) Trumpet\n2.) Trombone\n3.) French Horn\n4.) Tuba\nAnswer: ");
        scanf("%c",&answer);
        switch(answer){
            case '1':
                *total += 6;
                valid_answer_check = true;
                break;
            case '2':
                *total += 8;
                valid_answer_check = true;
                break;
            case '3':
                *total += 10;
                valid_answer_check = true;
                break;
            case '4':
                *total += 4;
                valid_answer_check = true;
                break;
            default:
                printf("\nPlease choose a valid choice. 1, 2, 3, or 4.\n");
                valid_answer_check = false;
        }
    }
}
void question7(int* total,bool valid_answer_check){
    valid_answer_check = false;
    while(valid_answer_check == false){
        printf("\nQuestion 7!\nIf you played a woodwind instrument, what would you play? (Type 1, 2, 3, or 4)\n1.) Clarinet\n2.) Flute\n3.) Saxophone\n4.) Oboe\nAnswer: ");
        scanf("%c",&answer);
        switch(answer){
            case '1':
                *total += 10;
                valid_answer_check = true;
                break;
            case '2':
                *total += 6;
                valid_answer_check = true;
                break;
            case '3':
                *total += 8;
                valid_answer_check = true;
                break;
            case '4':
                *total += 4;
                valid_answer_check = true;
                break;
            default:
                printf("\nPlease choose a valid choice. 1, 2, 3, or 4.\n");
                valid_answer_check = false;
        }
    }
}
void question8(int* total,bool valid_answer_check){
    valid_answer_check = false;
    while(valid_answer_check == false){
        printf("\nQuestion 8!\nWhat is your favorite Drum Corps? (Type 1, 2, 3, or 4)\n1.) Blue Devils\n2.) Santa Clara Vanguard\n3.) Carolina Crown\n4.) Bluecoats\nAnswer: ");
        scanf("%c",&answer);
        switch(answer){
            case '1':
                *total += 4;
                valid_answer_check = true;
                break;
            case '2':
                *total += 6;
                valid_answer_check = true;
                break;
            case '3':
                *total += 8;
                valid_answer_check = true;
                break;
            case '4':
                *total += 10;
                valid_answer_check = true;
                break;
            default:
                printf("\nPlease choose a valid choice. 1, 2, 3, or 4.\n");
                valid_answer_check = false;
        }
    }
}
void question9(int* total,bool valid_answer_check){
    valid_answer_check = false;
    while(valid_answer_check == false){
        printf("\nQuestion 9!\nWhat is the best Bluecoats show? (Type 1, 2, 3, or 4)\n1.) Tilt\n2.) Downside Up\n3.) The Bluecoats\n4.) Riffs and Revelations\nAnswer: ");
        scanf("%c",&answer);
        switch(answer){
            case '1':
                *total += 4;
                valid_answer_check = true;
                break;
            case '2':
                *total += 8;
                valid_answer_check = true;
                break;
            case '3':
                *total += 10;
                valid_answer_check = true;
                break;
            case '4':
                *total += 6;
                valid_answer_check = true;
                break;
            default:
                printf("\nPlease choose a valid choice. 1, 2, 3, or 4.\n");
                valid_answer_check = false;
        }
    }
}
void question10(int* total,bool valid_answer_check){
    valid_answer_check = false;
    while(valid_answer_check == false){
        printf("\nQuestion 10!\nWho do you think will win this season? (Type 1, 2, 3, or 4)\n1.) Bluecoats\n2.) Blue Devils\n3.) Carolina Crown\n4.) Boston Crusaders\nAnswer: ");
        scanf("%c",&answer);
        switch(answer){
            case '1':
                *total += 10;
                valid_answer_check = true;
                break;
            case '2':
                *total += 4;
                valid_answer_check = true;
                break;
            case '3':
                *total += 8;
                valid_answer_check = true;
                break;
            case '4':
                *total += 6;
                valid_answer_check = true;
                break;
            default:
                printf("\nPlease choose a valid choice. 1, 2, 3, or 4.\n");
                valid_answer_check = false;
        }
    }
}
void results(int* total){
    if(*total >= 95){
        printf("\nYour favorite instrument is the Saxophone!");
    }
    else if(*total >= 90 && *total <= 94){
        printf("\nYour favorite instrument is the Mellophone!");
    }
    else if(*total >= 85 && *total <= 89){
        printf("\nYour favorite instrument is the Flute!");
    }
    else if(*total >= 80 && *total <= 84){
        printf("\nYour favorite instrument is the Clarinet!");
    }
    else if(*total >= 75 && *total <= 79){
        printf("\nYour favorite instrument is the Trombone!");
    }
    else if(*total >= 70 && *total <= 74){
        printf("\nYour favorite instrument is the Trumpet!");
    }
    else if(*total >= 65 && *total <= 69){
        printf("\nYour favorite instrument is the Piano!");
    }
    else if(*total >= 60 && *total <= 64){
        printf("\nYour favorite  instrument is the Sousaphone!");
    }
    else if(*total >= 55 && *total <= 59){
        printf("\nYour favorite instrument is the Harpsichord!");
    }
    else if(*total >= 50 && *total <= 54){
        printf("\nYour favorite instrument is the recorder!");
    }
    else if(*total >= 45 && *total <= 49){
        printf("\nYour favorite instrument is the oboe!");
    }
    else if(*total >= 40 && *total <= 44){
        printf("\nYour favorite instrument is the bassoon!");
    }
    else{
        printf("\nYour favorite instrument is the Kazoo!");
    }
    printf("\nThank you for playing!");
}
int main(){
    int total = 0;
    bool valid_answer_check = false;

    printf("\nWelcome to the favorite instrument calculator!\nAnswer each question and you'll learn what your secret favorite instrument is!");
    question1(&total,valid_answer_check);
    question2(&total,valid_answer_check);
    question3(&total,valid_answer_check);
    question4(&total,valid_answer_check);
    question5(&total,valid_answer_check);
    question6(&total,valid_answer_check);
    question7(&total,valid_answer_check);
    question8(&total,valid_answer_check);
    question9(&total,valid_answer_check);
    question10(&total,valid_answer_check);
    results(&total);
    return 0;
}

//Solve bug: Questions are being displayed twice, as if it's being answered incorrectly and giving you a second attempt