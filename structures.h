#ifndef PRIM_OBJ_STRUCTS_INCLUDED
#define PRIM_OBJ_STRUCTS_INCLUDED
#include <math.h>
// Blank structure
typedef struct {
	int id; // ID: 0
} Object;

// Different object structure
typedef struct {
	int id; // ID: 1
	double width;
	double height;
} Camera;

typedef struct {
	int id;// ID: 2
	double* pos;
	double* diff_color;
	double* spec_color;
	double radius;
} Sphere;

typedef struct {
	int id;// ID: 3
	double* pos;
	double* diff_color;
	double* spec_color;
	double* normal;
} Plane;

// In case I get bored and want to add quadrics
typedef struct {
	int id;// ID: 4
	double* pos;
	double* diff_color;
	double* spec_color;
	double A;
	double B;
	double C;
	double D;
	double E;
	double F;
	double G;
	double H;
	double I;
	double J;
} Quadric;

typedef struct {
	int id;// ID: 5
	double* pos;
	double* color;
	double* dir;
	double r_a0;
	double r_a1;
	double r_a2;
	double ang_a0;
	double theta;
} Light;

// Basic scene file
typedef struct {
	Camera* cam;
	Object** objects;
	Light** lights;
} Scene;

#endif

