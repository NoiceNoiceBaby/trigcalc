//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <math.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MACRO FUNCTIONS
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define PYTHAGORASFORHYP(adj, opp) adj*adj+opp*opp
#define PYTHAGORASFORADJ(hyp, opp) hyp*hyp-opp*opp
#define PYTHAGORASFOROPP(hyp, adj) hyp*hyp-adj*adj
#define ADD(num1, num2) num1+num2
#define SUBTRACT(num1, num2) num1-num2
#define MULTIPLY(num1, num2) num1*num2
#define DIVIDE(num1, num2) num1/num2 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// TRIGONMETRY FUNCTIONS
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int sine_length(void)
{
    // variable declaration
    int userinput;
    // print statements (making menu)
    printf("which side do you want to work out the length for?\n");
    printf("1.) opposite (opp)\n");
    printf("2.) hypotenuse (hyp)\n");
    // scan statement (reading userinput)
    scanf("%d", &userinput);
    // if and else
    if (userinput == 1)
    {
        // variable declaration
        float hyp, opp, angle;
        // print and scan statements
        printf("enter length of hypotenuse side\n");
        scanf("%f", &hyp);
        printf("enter length of the angle (not the right angle)\n");
        scanf("%f", &angle);
        // calculating length of opposite side
        opp = sin(angle)*hyp;
        // print statement (outputting length of opposite side)
        printf("the length of the opposite side is %f\n", opp);
    }
    else if (userinput == 2)
    {
        // variable declaration
        float hyp, opp, angle;
        // print and scan statements
        printf("enter length of opposite side\n");
        scanf("%f", &opp);
        printf("enter length of the angle (not the right angle)\n");
        scanf("%f", &angle);
        // calculating length of hypotenuse side
        hyp = opp/sin(angle);
        // print statement (outputting length of hypotenuse side)
        printf("the length of the hypotenuse side is %f\n", hyp);
    }
    // return
    return 0;
}

int cosine_length(void)
{
    // variable declaration
    int userinput;
    // print statements (making menu)
    printf("which side do you want to work out the length for?\n");
    printf("1.) adjacent (adj)\n");
    printf("2.) hypotenuse (hyp)\n");
    // scan statement (reading userinput)
    scanf("%d", &userinput);
    // if and else 
    if (userinput == 1 )
    {
        // variable declaration
        float hyp, adj, angle;
        // print and scan statements
        printf("enter length of hypotenuse side\n");
        scanf("%f", &hyp);
        printf("enter size of the angle (not the right angle)\n");
        scanf("%f", &angle);
        // calculating length of adjacent side
        adj = cos(angle)*hyp;
        // print statement (outputting length of adjacent side)
        printf("the length of the adjacent side is %f\n", adj);
    }
    else if (userinput == 2)
    {
        // variable declaration
        float hyp, adj, angle;
        // print and scan statements
        printf("enter length of adjacent side\n");
        scanf("%f", &adj);
        printf("enter length of the angle (not the right angle)\n");
        scanf("%f", &angle);
        // calculating length of hypotenuse side
        hyp = adj/sin(angle);
        // print statement (outputting length of hypotenuse side)
        printf("the length of the hypotenuse side is %f\n", hyp);
    }
    // return
    return 0;
}

int tangent_length(void)
{
    // variable declaration
    int userinput;
    // print statements (making menu)
    printf("which side do you want to work out the length for?\n");
    printf("1.) opposite (opp)\n");
    printf("2.) adjacent (adj)\n");
    // scan statement (reading userinput)
    scanf("%d", &userinput);
    // if and else
    if (userinput == 1)
    {
        // variable declaration
        float opp, adj, angle;
        // print and scan statements
        printf("enter length of adjacent side\n");
        scanf("%f", &adj);
        printf("enter length of angle (not the right angle)\n");
        scanf("%f", &angle);
        // calculating length of opposite side
        opp = tan(angle)*adj;
        // print statement (outputting length of opposite side)
        printf("the length of the opposite side is %f\n", opp);
    }
    else if (userinput == 2)
    {
        // variable declaration
        float opp, adj, angle;
        // print and scan statements
        printf("enter length of opposite side\n");
        scanf("%f", &opp);
        printf("enter length of angle (not the right angle)\n");
        scanf("%f", &angle);
        // calculating length of adjacent side
        adj = opp/tan(angle);
        // print statement (outputting length of adjacent side)
        printf("the length of the adjacent side is %f\n", adj);
    }
    // return
    return 0;
}

int length_trig(void)
{
    // variable declaration
    int userinput;
    // print statements (making menu)
    printf("which trigonometric function do you need?\n");
    printf("1.) sine (using opp and adj)\n");
    printf("2.) cosine (using adj and hyp)\n");
    printf("3.) tangent (using opp and adj)\n");
    printf("4.) exit\n");
    // scan statement (reading userinput)
    scanf("%d", &userinput);
    // switches
    switch(userinput)
    {
        // first case
        case 1:
            // running sinelength function
            sine_length();
            break;
        // second case
        case 2:
            // running cosinelength function
            cosine_length();
            break;
        // third case
        case 3:
            // running tangentlength function
            tangent_length();
            break;
        // fourth case
        case 4:
            // print statement (program exit)
            printf("exiting program...\n");
        // defualt case
        default:
            // print statement (program exit on error)
            printf("error - exiting program"); 
    }

    // return
    return 0;
}

int sine_missing_angle(void)
{
    // variables to declare 
    float opp, hyp, angle;
    // print and scan statements 
    printf("enter length of the oppsite side\n");
    scanf("%f", &opp);
    printf("enter length of the hypotenuse side\n");
    scanf("%f", &hyp);
    // calculating missing angle
    angle = asin(opp/hyp);
    // print statement (outputting missing angle)
    printf("the missing angle is %f\n", angle);
    // return 
    return 0;
}

int cosine_missing_angle(void)
{
    // variables to declare 
    float adj, hyp, angle;
    // print and scan statements 
    printf("enter length of the adjacent side\n");
    scanf("%f", &adj);
    printf("enter length of the hypotenuse side\n");
    scanf("%f", &hyp);
    // calculating missing angle
    angle = asin(adj/hyp);
    // print statement (outputting missing angle)
    printf("the missing angle is %f\n", angle);
    // return 
    return 0; 
}

int tangent_missing_angle(void)
{
    // variables to declare 
    float adj, opp, angle;
    // print and scan statements 
    printf("enter length of the adjacent side\n");
    scanf("%f", &adj);
    printf("enter length of the opposite side\n");
    scanf("%f", &opp);
    // calculating missing angle
    angle = asin(adj/opp);
    // print statement (outputting missing angle)
    printf("the missing angle is %f\n", angle);
    // return 
    return 0; 
}

int missing_angle(void)
{
    // variable declaration
    int userinput;
    // print statements (making menu)
    printf("which trigonometric function do you need?\n");
    printf("1.) sine (using opp and adj)\n");
    printf("2.) cosine (using adj and hyp)\n");
    printf("3.) tangent (using opp and adj)\n");
    printf("4.) exit\n");
    // scan statement (reading userinput)
    scanf("%d", &userinput);
    // switches
    switch(userinput)
    {
        // first case
        case 1:
            // running sinemissingangle function
            sine_missing_angle();
            break;
        // second case
        case 2:
            // running cosinemissingangle function
            cosine_missing_angle();
            break;
        // third case
        case 3:
            // running tangentmissingangle function
            tangent_missing_angle();
            break;
        // fourth case
        case 4:
            // print statement (program exit)
            printf("exiting program...\n");
        // defualt case
        default:
            // print statement (program exit on error)
            printf("error - exiting program"); 
    }

    // return
    return 0;
}

int trigonometry_func(void)
{
    // variables to declare
    int userinput;
    // print statements (making menu)
    printf("what are you wanting to work out?\n");
    printf("1.) missing length of a side\n");
    printf("2.) missing angle of a triangle\n");
    printf("3.) exit\n");
    // scan statements (reading userinput)
    scanf("%d", &userinput);
    // switches
    switch(userinput)
    {
        // first case
        case 1:
            // running lengthtrig function
            length_trig();
            break;
        // second case
        case 2:
            // running missingangle function
            missing_angle();
            break;
        // third case
        case 3:
            // print statement (program exit)
            printf("exiting program...\n");
            break;        
        // defualt case
        default:
            // print statement (program exit on error)
            printf("error - exitting program...\n");
            break;
    }
    // return
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// PYTHAGORAS FUNCTION
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int pythagoras_func(void)
{
    // variables to declare
    int userinput;
    // print statements (making menu)
    printf("what side do you want to work out the length for?\n");
    printf("1.) hypotenuse (hyp)\n");
    printf("2.) adjacent (adj)\n");
    printf("3.) opposite (opp)\n");
    // scan statement (reading userinput)
    scanf("%d", &userinput);
    // if and else
    if (userinput == 1)
    {
        // variables to declare
        double adj, opp;
        // print and scan statements
        printf("enter length of adjacent side\n");
        scanf("%lf", &adj);
        printf("enter length of opposite side\n");
        scanf("%lf", &opp);
        // macro function calls to solve length of hypotenuse
        printf("the length of the hypotenuse is %f\n", sqrt(PYTHAGORASFORHYP(adj, opp)));
    }
    else if (userinput == 2)
    {
        // variables to declare
        double hyp, opp;
        // print and scan statements
        printf("enter length of hypotenuse side\n");
        scanf("%lf", &hyp);
        printf("enter length of opposite side\n");
        scanf("%lf", &opp);
        // macro function calls to solve length of adjacent
        printf("the length of the adjacent is %f\n", sqrt(PYTHAGORASFORADJ(hyp, opp)));
    } 
    else if (userinput == 3)
    {
        // variables to declare
        float hyp, adj;
        // print and scan statements
        printf("enter length of hypotenuse side\n");
        scanf("%f", &hyp);
        printf("enter length of adjacent side\n");
        scanf("%f", &adj);
        // macro function calls to solve length of opposite
        printf("the length of the opposite is %f\n", sqrt(PYTHAGORASFOROPP(hyp, adj)));
    }
    else
    {
        // print statement (prgram exit on error)
        printf("error - exitting program..\n");
    }
    // return
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// CALUCLATOR FUNCTION
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int calculator_func(void)
{
    // variable declaration
    int userinput;
    float num1, num2, answer;
    char operator;
    // print statements (making a menu)
    printf("enter your first number\n");
    scanf("%f", &num1);
    printf("enter your second number\n");
    scanf("%f", &num2);
    printf("which operation do you want to use?\n");
    printf("1.) add\n");
    printf("2.) subtract\n");
    printf("3.) multiply\n");
    printf("4.) division\n");
    printf("5.) all\n");
    printf("6.) exit\n");
    scanf("%d", &userinput);
    // switches
    switch(userinput)
    {
        // first case
        case 1:
            // addition macrofunction
            answer = ADD(num1, num2);
            printf("%f + %f = %f", num1, num2, answer);
            break;
        // second case 
        case 2:
            // subtraction macrofunction
            answer = SUBTRACT(num1, num2);
            printf("%f - %f = %f", num1, num2, answer);
            break;
        // third case
        case 3:
            // multiply macro function
            answer = MULTIPLY(num1, num2);
            printf("%f * %f = %f", num1, num2, answer);
            break;
        // fourth case
        case 4:
            // division function call
            answer = DIVIDE(num1, num2);
            printf("%f / %f = %f", num1, num2, answer);
            break;
        // fifth case
        case 5:
            // all function calls
            answer = ADD(num1, num2);
            printf("%f + %f = %f\n", num1, num2, answer);
            answer = SUBTRACT(num1, num2);
            printf("%f - %f = %f\n", num1, num2, answer);
            answer = MULTIPLY(num1, num2);
            printf("%f * %f = %f\n", num1, num2, answer);
            answer = DIVIDE(num1, num2);
            printf("%f / %f = %f\n", num1, num2, answer);
            break;
        // sixth case 
        case 6:
            // program exit 
            printf("exiting program...\n");
            break;
        // defualt case 
        default:
            // program exit (on error)
            printf("error - exitting program...\n");
            break;
    }
    // return
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ALGEBRA FUNCTION
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int algebra_func()
{
    // variables to declare 
    float coefficient, num1, num2, answer;
    char operator;
    // print statements (making a menu)
    printf("enter the coefficient of the unknown\n");
    scanf("%f", &coefficient);
    printf("enter the operator of the equation\n");
    scanf(" %c", &operator);
    printf("enter first number of the equation\n");
    scanf("%f", &num1);
    printf("enter the value the left hand side is equal to\n");
    scanf("%f", &num2);
    // if and else
    if (operator == '+')
    {
        // print statement
        printf("solving eqaution...\n");
        // solving equation
        num2 = num2-num1;
        num1 = num1-num1;
        answer = num2/coefficient;
        // printing unknown
        printf("the unknown is equal to %f\n", answer);
    } 
    else if (operator == '-')
    {
        // print statement 
        printf("solving equation...\n");
        // solving equation
        num2 = num2 + num1;
        num1 = num1 + num1;
        answer = num2/coefficient;
        // printing unknown
        printf("the unknown is equal to %f\n", answer);
    }
    else if (operator == '*')
    {
        // print statement 
        printf("solving equation...\n");
        // solving equation
        coefficient = coefficient * num1;
        answer = num2/coefficient;
        // printing unknown
        printf("the unkown is equal to %f\n", answer);
    }
    else if (operator == '/')
    {
        // print statement 
        printf("solving equation...\n");
        // solving equation
        num2 = num2  * num1;
        num1 = num1 * num1;
        answer = num2/coefficient;
        // printing unknown 
        printf("the unknown is equal to %f\n", answer);
    }
    else 
    {
        // print statement (error)
        printf("error - exitting program...\n");
    }
    // return
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MAIN FUNCTION
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(void)
{
    // variable declaration
    int userinput;
    // print statements (making a menu)
    printf("what type of calculation do you want to do?\n");
    printf("1.) pythagorus\n");
    printf("2.) trigonometry\n");
    printf("3.) normal calculator\n");
    printf("4.) simple algebra\n");
    printf("5.) exit\n");
    // scan statement (reading userinput)
    scanf("%d", &userinput);
    // switches 
    switch(userinput)
    {
        // first case
        case 1:
            // running pythagorasfunc fucntion
            pythagoras_func();
            break;
        // second case
        case 2:
            // runing trigonometryfunc function
            trigonometry_func();
            break;
        // third case
        case 3: 
            // running calculator function
            calculator_func();
            break;
        // fourth case
        case 4:
            // running algebra function
            algebra_func();
            break;
        // fifth case
        case 5:
            // print statement (program exit)
            printf("exiting program ...\n");
            break;
        // defualt case
        default:
            // print statement (program exit on error)
            printf("error - exiting program ...\n");
            break;
    }
    // return
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// END OF FILE
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////