//#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>

int m,x,x1,x2,xi,y,y1,y2,yi,dx,dy,i,step,p,r,a,b,m,n;
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/


glColor3f (1, 1, 1);
glBegin(GL_POINTS);

for(x=0; x<=y; x++)
    {
        if(p<0)
        {
            y = y;
            p = p + 2*x + 1;
        }

        else
        {
            y = y-1;
            p = p + 2*x+1-2*y;
        }
        glVertex2d(x+a,y+b);
        glVertex2d(x+a,-y+b);
        glVertex2d(-x+a,y+b);
        glVertex2d(-x+a,-y+b);
        glVertex2d(y+a,x+b);
        glVertex2d(y+a,-x+b);
        glVertex2d(-y+a,x+b);
        glVertex2d(-y+a,-x+b);
    }
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
gluOrtho2D(-300, 300, -300, 300);
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

    printf("r = ");
    scanf(" %d",&r);

    printf("a = ");
    scanf(" %d",&a);

    printf("b = ");
    scanf(" %d",&b);

    x=0;
    y=r;
    p = 1-r;





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
