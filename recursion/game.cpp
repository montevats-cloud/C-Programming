#include <iostream>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>
#include <cstdlib>
#include <ctime>

using namespace std;

const int WIDTH = 40;
const int HEIGHT = 20;

int x, y;
int foodX, foodY;
int score;

int tailX[100];
int tailY[100];
int tailLength;

bool gameOver;

enum Direction {
    STOP,
    LEFT,
    RIGHT,
    UP,
    DOWN
};

Direction dir;

void setup() {
    gameOver = false;
    dir = RIGHT;

    x = WIDTH / 2;
    y = HEIGHT / 2;

    foodX = rand() % WIDTH;
    foodY = rand() % HEIGHT;

    score = 0;
    tailLength = 0;
}

void draw() {

    system("clear");

    // Top border
    for (int i = 0; i < WIDTH + 2; i++)
        cout << "#";

    cout << "\n";

    for (int i = 0; i < HEIGHT; i++) {

        for (int j = 0; j < WIDTH; j++) {

            if (j == 0)
                cout << "#";

            if (i == y && j == x) {

                cout << "O";

            }
            else if (i == foodY && j == foodX) {

                cout << "@";

            }
            else {

                bool printed = false;

                for (int k = 0; k < tailLength; k++) {

                    if (tailX[k] == j && tailY[k] == i) {

                        cout << "o";
                        printed = true;
                        break;
                    }
                }

                if (!printed)
                    cout << " ";
            }

            if (j == WIDTH - 1)
                cout << "#";
        }

        cout << "\n";
    }

    // Bottom border
    for (int i = 0; i < WIDTH + 2; i++)
        cout << "#";

    cout << "\n";

    cout << "Score: " << score << "\n";
    cout << "W A S D = Move | X = Exit\n";
}

int keyPressed() {

    struct termios oldt, newt;

    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);

    newt = oldt;

    newt.c_lflag &= ~(ICANON | ECHO);

    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);

    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF)
        return ch;

    return 0;
}

void input() {

    int key = keyPressed();

    if (key == 0)
        return;

    switch (key) {

        case 'w':
        case 'W':

            if (dir != DOWN)
                dir = UP;

            break;

        case 's':
        case 'S':

            if (dir != UP)
                dir = DOWN;

            break;

        case 'a':
        case 'A':

            if (dir != RIGHT)
                dir = LEFT;

            break;

        case 'd':
        case 'D':

            if (dir != LEFT)
                dir = RIGHT;

            break;

        case 'x':
        case 'X':

            gameOver = true;

            break;
    }
}

void logic() {

    // Move tail

    int previousX = tailX[0];
    int previousY = tailY[0];

    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < tailLength; i++) {

        int tempX = tailX[i];
        int tempY = tailY[i];

        tailX[i] = previousX;
        tailY[i] = previousY;

        previousX = tempX;
        previousY = tempY;
    }

    // Move head

    switch (dir) {

        case LEFT:
            x--;
            break;

        case RIGHT:
            x++;
            break;

        case UP:
            y--;
            break;

        case DOWN:
            y++;
            break;

        default:
            break;
    }

    // Wall collision

    if (x < 0 || x >= WIDTH ||
        y < 0 || y >= HEIGHT) {

        gameOver = true;
    }

    // Snake body collision

    for (int i = 0; i < tailLength; i++) {

        if (tailX[i] == x &&
            tailY[i] == y) {

            gameOver = true;
        }
    }

    // Food eaten

    if (x == foodX && y == foodY) {

        score += 10;

        tailLength++;

        foodX = rand() % WIDTH;
        foodY = rand() % HEIGHT;
    }
}

int main() {

    srand(time(0));

    setup();

    while (!gameOver) {

        draw();

        input();

        logic();

        // Snake speed
        usleep(60000);
    }

    system("clear");

    cout << "\n";
    cout << "========================\n";
    cout << "       GAME OVER\n";
    cout << "========================\n";
    cout << "Score: " << score << "\n";
    cout << "\n";

    return 0;
}