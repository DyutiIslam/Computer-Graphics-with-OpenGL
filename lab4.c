
#include <GL/gl.h>
#include <GL/glut.h>

int m,x,x1,x2,xi,y,y1,y2,yi,dx,dy,i,step,p;
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (1, 1, 1);
glBegin(GL_POINTS);
glVertex2d(x,y);
for(i=0; i<dx; i++)
    {
        if(p<0)
        {
            x = x+1;
            y = y;
            p = p + 2*dy;
        }

        else
        {
            x = x+1;
            y = y+1;
            p = p + 2*dy - 2*dx;
        }
        glVertex2d(x,y);

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
gluOrtho2D(0, 600, 0, 600);
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
    printf("x1 = ");
    scanf(" %d",&x1);

    printf("y1 = ");
    scanf(" %d",&y1);

    printf("x2 = ");
    scanf(" %d",&x2);

    printf("y2 = ");
    scanf(" %d",&y2);

    dx = x2-x1;
    dy = y2-y1;

    p = 2*dy - dx;

    /*if(dy>dx)
    {
        yi = dy/dy;
        xi = dx/dy;
        step = dy;
    }
    else
    {
        xi = dx/dx;
        yi = dx/dy;
        step = dx;
    }
*/
    x = x1;
    y = y1;





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
