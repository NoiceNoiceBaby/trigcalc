// includes
#include <stdio.h>
#include <math.h>
// definitions
#define PYTHAGORUSFORHYP(adj, opp) adj*adj+opp*opp
#define PYTHAGORUSFORADJ(hyp, opp) hyp*hyp-opp*opp
#define PYTHAGORUSFOROPP(hyp, adj) hyp*hyp-adj*adj

// sinelength function
int sinelength(void)
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

// cosinelength function
int cosinelength(void)
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

// tangentlength function
int tangentlength(void)
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

// lengthtrig function
int lengthtrig(void)
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
            sinelength();
            break;
        // second case
        case 2:
            // running cosinelength function
            cosinelength();
            break;
        // third case
        case 3:
            // running tangentlength function
            tangentlength();
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

// sinemissingangle function
int sinemissingangle(void)
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

// cosinemissing angle function
int cosinemissingangle(void)
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

// tangentmissing angle function
int tangentmissingangle(void)
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

// missing angle function
int missingangle(void)
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
            sinemissingangle();
            break;
        // second case
        case 2:
            // running cosinemissingangle function
            cosinemissingangle();
            break;
        // third case
        case 3:
            // running tangentmissingangle function
            tangentmissingangle();
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

// trigonometryfunc function
int trigonometryfunc(void)
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
            lengthtrig();
            break;
        // second case
        case 2:
            // running missingangle function
            missingangle();
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

// pythagorusfunc function
int pythagorusfunc(void)
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
        printf("the length of the hypotenuse is %f\n", sqrt(PYTHAGORUSFORHYP(adj, opp)));
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
        printf("the length of the adjacent is %f\n", sqrt(PYTHAGORUSFORADJ(hyp, opp)));
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
        printf("the length of the opposite is %f\n", sqrt(PYTHAGORUSFOROPP(hyp, adj)));
    }
    else
    {
        // print statement (prgram exit on error)
        printf("error - exitting program..\n");
    }
    // return
    return 0;
}

// main function
int main(void)
{
    // variable declaration
    int userinput;
    // print statements (making a menu)
    printf("what type of calculation do you want to do?\n");
    printf("1.) pythagorus\n");
    printf("2.) trigonometry\n");
    printf("3.) exit\n");
    // scan statement (reading userinput)
    scanf("%d", &userinput);
    // switches 
    switch(userinput)
    {
        // first case
        case 1:
            // running pythagorusfunc fucntion
            pythagorusfunc();
            break;
        // second case
        case 2:
            // runing trigonometryfunc function
            trigonometryfunc();
            break;
        // third case
        case 3: 
            // print statement (program exit)
            printf("exiting program ...\n");
            break;
        // default case
        default:
            // print statement (program exit on error)
            printf("error - exiting program ...\n");
            break;
    }
    // return
    return 0;
}