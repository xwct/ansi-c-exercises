#define XMAX 30
#define YMAX 30

struct point {
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
};

struct point makepoint(int, int);

/* example from Ch 6, Sec 6.2, Pg 128-130 */

int main() {
    struct rect screen;
    struct point middle;

    screen.pt1 = makepoint(0, 0);
    screen.pt2 = makepoint(XMAX, YMAX);
    middle = makepoint((screen.pt1.x + screen.pt2.x)/2,
                       (screen.pt1.y + screen.pt2.y)/2);

    return 0;
}

/* makepoint: make a point from x and y components */
struct point makepoint(int x, int y) {
    struct point temp;

    temp.x = x;
    temp.y = y;
    return temp;
}