#ifdef GL_ES
precision highp int;
precision highp float;
#endif
/* A very simple shader that doesn't use any textures
 */

//pull in 2d vertices from buffer 0
//when to use this vs the definition below?
//layout(location = 0) in vec2 vertex;
attribute highp vec2 vertex;

//the 4x4 MVP matix
uniform highp mat4 mvpMatrix;

void main(void)
{
    //compute position of vertex on screen
    gl_Position = mvpMatrix * vec4(vertex,0.1,1.0);
}
