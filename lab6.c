
#include <GL/gl.h>
#include <GL/glut.h>

int m,x,x1,x2,xi,y,y1,y2,yi,dx,dy,i,step,p,r,a,b,c,d,p1;
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (1, 1, 1);
glBegin(GL_POINTS);
//glVertex2d(x,y);
for(x=0; x<=y; x++)
    {
        if(p<0)
        {

            y = y;
            p = p + 2*x+1;
        }

        else
        {

            y = y-1;
            p = p + 2*x+1-2*y;
        }

        a = x;
        b = y;
        c = x;
        d = y;

        glVertex2d(c-100,d-100);
        glVertex2d(c-100,-d-100);
        glVertex2d(-c-100,d-100);
        glVertex2d(-c-100,-d-100);
        glVertex2d(d-100,c-100);
        glVertex2d(d-100,-c-100);
        glVertex2d(-d-100,c-100);
        glVertex2d(-d-100,-c-100);

        glVertex2d(a+100,b-100);
        glVertex2d(a+100,-b-100);
        glVertex2d(-a+100,b-100);
        glVertex2d(-a+100,-b-100);
        glVertex2d(b+100,a-100);
        glVertex2d(b+100,-a-100);
        glVertex2d(-b+100,a-100);
        glVertex2d(-b+100,-a-100);


    }
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POINTS);
//glVertex2d(x,y);
y=5;
p1=1-y;
for(x=0; x<=y; x++)
    {
        if(p1<0)
        {

            y = y;
            p1 = p1 + 2*x+1;
        }

        else
        {

            y = y-1;
            p1 = p1 + 2*x+1-2*y;
        }

        a = x;
        b = y;
        c = x;
        d = y;

        glVertex2d(c-100,d-100);
        glVertex2d(c-100,-d-100);
        glVertex2d(-c-100,d-100);
        glVertex2d(-c-100,-d-100);
        glVertex2d(d-100,c-100);
        glVertex2d(d-100,-c-100);
        glVertex2d(-d-100,c-100);
        glVertex2d(-d-100,-c-100);

        glVertex2d(a+100,b-100);
        glVertex2d(a+100,-b-100);
        glVertex2d(-a+100,b-100);
        glVertex2d(-a+100,-b-100);
        glVertex2d(b+100,a-100);
        glVertex2d(b+100,-a-100);
        glVertex2d(-b+100,a-100);
        glVertex2d(-b+100,-a-100);
    }
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_POINTS);
//glVertex2d(x,y);
y=15;
p1=1-y;
for(x=0; x<=y; x++)
    {
        if(p1<0)
        {

            y = y;
            p1 = p1 + 2*x+1;
        }

        else
        {

            y = y-1;
            p1 = p1 + 2*x+1-2*y;
        }

        a = x;
        b = y;
        c = x;
        d = y;

        glVertex2d(a,b-100);
        glVertex2d(a,-b-100);
        glVertex2d(-a,b-100);
        glVertex2d(-a,-b-100);
        glVertex2d(b,a-100);
        glVertex2d(b,-a-100);
        glVertex2d(-b,a-100);
        glVertex2d(-b,-a-100);
    }
glEnd();

glColor3f (1, 1, 1);
glBegin(GL_LINES);
    glVertex2d(-100,-100);
    glVertex2d(0,-100);

    glVertex2d(0,-100);
    glVertex2d(50,-25);

    glVertex2d(50,-25);
    glVertex2d(-50,-25);

    glVertex2d(-50,-25);
    glVertex2d(-100,-100);

    glVertex2d(0,-100);
    glVertex2d(-65,-10);

    glVertex2d(-65-10,-10);
    glVertex2d(-65+10,-10);

    glVertex2d(-65-10,-11);
    glVertex2d(-65+10,-11);

    glVertex2d(50,-25);
    glVertex2d(100,-100);

    glVertex2d(50,-25);
    glVertex2d(30,-10);

    glVertex2d(0,-100);
    glVertex2d(0,-125);

    glVertex2d(-3,-125);
    glVertex2d(3,-125);
glEnd();


/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-300, 300,-300, 300);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{




r=50;
 x = x1;
y = y1;
x=0;
y=r;
p = 1-y;





glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
