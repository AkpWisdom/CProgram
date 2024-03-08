int main() {



char username[50];

int score;



printf("software engineering grading system \n");

printf("kindly input your name:");

scanf("%s",username);



printf("kindly input your score:");

scanf("%d", &score);



if((score < 0) || (score > 100)){

  printf("\n invalide score");

}else if(score < 40){ printf("\n grade is F!");

}else if(score < 45){ printf("\n grade ia E!");

}else if(score < 50){ printf("\n grade is D!");

}else if(score < 60){ printf("\n grade is C!");

}else if(score < 70){ printf("\n grade is B!");

}else{ printf("\n grade is A!");

}





return 0;

}