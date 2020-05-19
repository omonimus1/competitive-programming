## Geomtry

1. Points
2. Lines
3. Circles
4. Triangles
5. Quadrilaterals
6. Polygon Representation 
7. Perimeter of a Polygon 
8. Area of a Polygon 
9. Checking if a Polygon is Convex 
10. Checking if a Point is Inside a Polygon 
11. Cutting Polygon with a Straight Line
12. Find dimension of a rectangle having the coordinates of two points


### Points

In 2D Ecuclidean spaces, they are represented with a struct in C/C++ (or class in Java) with two members; 
```
struct point
{
    int x, y;
};
```
Soemtimes we need to:
* Sort the points
* Check if two points are equals. 
* Caculate distance between two points in a 2D space
* Rotate a point by angle θ.

Formula = d(P, Q) = √ (x2 − x1)2 + (y2 − y1)2 

```
double distance(struct point1, struct point2)
    return sqrt (point1.x-point2.x)^2+(point1.y-point2.y)^2)
```
OR
```
double distance(struct point1, struct point2)
    return hypot(point1.x - point2.x  point1.y, point2.y);
```
hypot(): is a methed present in the math.c library that returns the hypotenuse of a right-angled triangle whose legs are x and y . The function returns what would be the square root of the sum of the squares of x and y (as per the Pythagorean theorem), but without incurring in undue overflow or underflow of intermediate values.

We can rotate a point by angle θ **clowise** by using a rotation matrix. 
Thetha angle: rotation angle
original_point: struct of the point to rotate. 
```
point get_coordinates_rotate_point(point original_point, double theta_angle)
{
    // Degrees to radiant : PI / 180.0
    // Radiant to Degrees : 180.0 / PI
    double ad = DEG_to_Rad(theta_angle); 
    return point(original_point.x * cos(theta_angle) - original_point.y * sin(rad) ,
            original_point.x * sin(rad) + original_point.y * cos(rad));
}
```
* When two lines are parallel and how to verify it? 

* If two lines are not parallel, they will intersect at a point. How to a find the intersaction point(x,y) 


#### Practice
* Compute the Euclidean distance between point (2, 2) and (6, 5)
* Rotate the same point by 77 degrees counter clockwise around
origin. What is the new coordinate of the rotated point?

### Lines

Line in 2D Euclidean space is a set of point that satisfy the equation ax + by + c = 0;
```
struct line { float a, b, c };
```


### Circles

Circle centered at coordinate(a,b) in a 2D Euclidean space with radius r is the se of all points (x,y) such that ```(x − a)^2 + (y − b)^2 = r^2```.

* Perimeter / Circumference: C = 2 * PI * radius;
* Area: A = PI * radius^2;
* Sector: 

### How to check if a point is inside, outside or exactly on the border of a circle
1. Check distance between center of the circle and the point
2. Compare the distance between the two points with the radius
    2.1. If Distance == radius: The point is on the perimeter
    2.2  If distance < radius : The point is inside the circle
    2.3. else : point is outside the circle.  

* Having the center point of two circle and their radius, check if collide or not. 

### Triangles

Triangle: polygon with three vertices and three edges. 
* Equilater: tree euqlas-lenght sides all all inside angles are 60 degrees.
* Isosceles: two side have same lenght and two interior angles are the same
*& Scalene: all different sides.
* Right: one fo its interior angle is 90 degree (or right angle)
0
Perimeter = a + b +c;
SemiPerimeter = Perimeter / 2;

Heron's Formula: You can use this formula to find the area of a triangle using the 3 side lengths.
s: semiperimeter
A = sqrt(s × (s − a) * (s − b) * (s − c))

**Inscribed circle (incircle)**
A triangle with are A and semi-perimeter s has an **inscribed circle** with radus r = A/s  
**Circumscribed circle**
Radius of the circumscribed circle (external circle): r = a*b*c / (4*A);

##### Practice
1. Let a, b, and c of a triangle be 2 18 , 2 18 , and 2 18 . Can we compute the
area of this triangle with Heron’s formula as shown in point 4 above without experiencing
overflow (assuming that we use 64-bit integers)? What should we do to avoid this issue?
2. : Implement a function to check if a point d is inside the circumCircle
of three points a, b, and c

### Quadrilaterals

Quadrilater or Quadrangle is a polygon with four edges and four vertices. 
Rectangle is apygon with four edges, four vertices and four right angles. A = 2 * (base + height) 

### Perimeter of a Polygon 

Perimeter of a polying is the sum of the distance between all the points (length of the side). 
To get the absolute value of a number we use the fabs function (provided by the ```math.h```)

```
// Calculate are of a polygon with multiple vertex (point)
double area(const vector<point> &P) {
    double result = 0.0, x1, y1, x2, y2;
    for (int i = 0; i < (int)P.size()-1; i++) {
    x1 = P[i].x; x2 = P[i+1].x;
    y1 = P[i].y; y2 = P[i+1].y;
    result += (x1 * y2 - x2 * y1);
    }
    return fabs(result) / 2.0; 
}
```

## Calculate Perimeter of a Polygon
```
// Structure of the point coordinates
struct point
{
    int a,b;
};

// Store the coordinates 
vector<point> p;
p.push_back(point(1,3));
p.push_back(point(3,3));
p.push_back(point(4,5));
p.push_back(point(0,2));
p.push_back(P[0]); // important: loop back to connect the last vertex with the first

// Calculate Perimeter
double perimeter(const vector<point>)
{
    double result = 0.0;
    for(int i =0; i < (int)p.size()-1; i++)
        result += dist(p[i] + p[i+1]);
    return result; 
}

// Calculate area
double are(const vector<point> &p)
{
    double result = 0.0, x1, y1, x2, y2;
    for(int i=0; i< (int)p.size()-1; i++)
    {
        x1 = p[i].x; 
        x2 = p[i+1].x;
        y1 = p[i].y;
        y2 = p[i+1].y;
        result += (x1 * y2 - x2 * y1);
    }
    return fabs(result / 2.0; 
}
```

### How to check if a polygon is convex or cancave

To test if a polygon is convex, there is an easier computational approach than
“trying to check if all line segments can be drawn inside the polygon”. We can simply check
whether all three consecutive vertices of the polygon form the same turns (all left turns/ccw
if the vertices are listed in counter clockwise order or all right turn/cw if the vertices are
listed in clockwise order). If we can find at least one triple where this is false, then the
polygon is concave.

### Exercise

• Points and Lines:
* UVa 00152 - Tree’s a Crowd (sort the 3D points first)
* UVa 00152 - Tree’s a Crowd (sort the 3D points first)
* UVa 00191 - Intersection (line segment intersection)
* UVa 00378 - Intersecting Lines (use areParallel, areSame, areIntersect)
* UVa 00587 - There’s treasure everywhere (Euclidean distance dist)
* UVa 00833 - Water Falls (recursive check, use the ccw tests)
* UVa 00837 - Light and Transparencies (line segments, sort x-coords first)
* UVa 00920 - Sunny Mountains * (Euclidean distance dist)
* UVa 01249 - Euclid (LA 4601, Southeast USA Regional 2009, vector)
* UVa 10242 - Fourth Point (toVector; translate points w.r.t that vector)
* UVa 10250 - The Other Two Trees (vector, rotation)
* UVa 10263 - Railway * (use distToLineSegment)
* UVa 10357 - Playball (Euclidean distance dist, simple Physics simulation)
* UVa 10466 - How Far? (Euclidean distance dist)
* UVa 10585 - Center of symmetry (sort the points)
* UVa 10832 - Yoyodyne Propulsion ... (3D Euclidean distance; simulation)
* UVa 10865 - Brownie Points (points and quadrants, simple)
* UVa 10902 - Pick-up sticks (line segment intersection)
* UVa 10927 - Bright Lights * (sort points by gradient, Euclidean distance)
* UVa 11068 - An Easy Task (simple 2 linear equations with 2 unknowns)
* UVa 11343 - Isolated Segments (line segment intersection)
* UVa 11505 - Logo (Euclidean distance dis
1. UVa 00109 - Scud Busters (find CH, test if point inPolygon, area of polygon)
2. UVa 00137 - Polygons (convex polygon intersection, line segment intersection,
inPolygon, CH, area, inclusion-exclusion principle)
3. UVa 00218 - Moth Eradication (find CH, perimeter of polygon)
7. UVa 00634 - Polygon (inPolygon; the polygon can be convex or concave)
18. UVa 11096 - Nails (very classic CH problem, start from here)
19. UVa 11265 - The Sultan’s Problem * (cutPolygon, inPolygon, area)
20. UVa 11447 - Reservoir Logs (area of polygon)
21. UVa 11473 - Campus Roads (perimeter of polygon)