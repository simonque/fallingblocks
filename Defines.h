//////////////////////////////////////////////////////////////////////////////////
// Defines.h
//////////////////////////////////////////////////////////////////////////////////

#pragma once

// Window related defines //
#define WINDOW_WIDTH   320
#define WINDOW_HEIGHT  240
#define WINDOW_CAPTION "Falling Blocks"

// Game related defines //
#define FRAMES_PER_SECOND 30
#define FRAME_RATE        1000/FRAMES_PER_SECOND

// The game area is the area where the focus block can go. //
// These values are used to check collisions between the   //
// game squares and the sides of the game area.            //
#define GAME_AREA_LEFT     2  // 16 / SQUARE_SIZE
#define GAME_AREA_RIGHT   12  // 192 / SQUARE_SIZE
#define GAME_AREA_BOTTOM  14  // 224 / SQUARE_SIZE

#define NUM_LEVELS       5    // number of levels in the game
#define POINTS_PER_LINE  525  // points player receives for completing a line
#define POINTS_PER_LEVEL 6300 // points player needs to advance a level

#define INITIAL_SPEED    60  // initial interval at which focus block moves down
#define SPEED_CHANGE     10  // the above interval is reduced by this much each level

#define MAX_NUM_LINES    13  // Number of lines of squares before full.

// Amount of time player has to move the focus block when its bottom collides with something. //
// Measured in number of frames. At 30 fps, 15 frames will give the player half a second.     //
#define SLIDE_TIME       15

#define SQUARES_PER_ROW  10  // number of squares that fit in a row
#define SQUARE_MEDIAN     8  // distance from the center of a square to its sides
#define SQUARE_SIZE    (SQUARE_MEDIAN * 2)   // Width and height of square.

// Starting position of the focus block //
#define BLOCK_START_X     6  // 96 / SQUARE_SIZE
#define BLOCK_START_Y     2  // 32 / SQUARE_SIZE

// Location on game screen for displaying... //
#define LEVEL_RECT_X         14  // current level
#define LEVEL_RECT_Y          2  // (224 and 32) / SQUARE_SIZE
#define SCORE_RECT_X         14  // current score
#define SCORE_RECT_Y          4  // (224 and 64) / SQUARE_SIZE
#define NEEDED_SCORE_RECT_X  14  // score needed for next level
#define NEEDED_SCORE_RECT_Y   6  // (224 and 96) / SQUARE_SIZE
#define NEXT_BLOCK_CIRCLE_X  16  // next block in line to be focus block
#define NEXT_BLOCK_CIRCLE_Y  11  // (256 and 176) / SQUARE_SIZE

// Palette entry range used for color cycling.
#define COLOR_CYCLING_START_INDEX     8
#define COLOR_CYCLING_END_INDEX      15
#define NUM_CYCLED_COLORS    \
        (COLOR_CYCLING_END_INDEX - COLOR_CYCLING_START_INDEX + 1)

//  Aaron Cox, 2004 //
