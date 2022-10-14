#include "raylib.h"

int main()
{
    const int window_width{1200};
    const int window_height{800};

    // Create main window
    InitWindow(window_width, window_height, "Dapper Dasher | Luke version");

    // Rectangle dimensions
    const int width{50};
    const int height{80};
    int posY{window_height - height};
    int velocity{0};

    SetTargetFPS(60);

    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        posY += velocity;

        DrawRectangle(window_width / 2, posY, width, height, BLUE);

        if(IsKeyPressed(KEY_SPACE))
        {
            velocity -= 2;
        }

        if(IsKeyPressed(KEY_N))
        {
            // Reinitialize everything, position and velocity
            posY = window_height - height;
            velocity = 0;
        }

        EndDrawing();
    }
    CloseWindow();

}