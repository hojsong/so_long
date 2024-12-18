# so_long

[한국어 버전](README.md.kr)

## Overview
The `so_long` project is a small 2D game that utilizes the `MinilibX` graphics library. The player collects items and exits the map while avoiding obstacles. This project introduces basic game development concepts and event handling in C.

- **Objective:** Create a simple game with a graphical interface.
- **Key Features:**
  - Rendering a 2D grid-based map.
  - Player movement and interactions.
  - Map validation to ensure proper gameplay.

## Features
- **Game Mechanics:**
  - Collect all collectibles (`C`) on the map.
  - Navigate to the exit (`E`) after collecting all items.
  - Avoid obstacles and invalid moves.
- **Graphics:**
  - Sprite-based visuals using `MinilibX`.
  - Real-time rendering and movement.
- **Map Validation:**
  - Ensure the map contains required elements: `P` (player), `C` (collectibles), `E` (exit).
  - Validate the map's rectangular shape and wall boundaries.

## Requirements
- **Operating System:** Linux or macOS.
- **Dependencies:**
  - `MinilibX` for graphics rendering.
  - GCC or Clang for compilation.

## Installation and Execution
### Clone the Repository
```bash
git clone [repository URL]
cd so_long
```

### Build
```bash
make
make bonus
```

### Run
``` bash
./so_long map/map.ber or map/map2.ber
./so_long_bonus map/map.ber or map/map2.ber
```
- Replace `map/map.ber or map/map2.ber` with your custom map file.

### File Structure
- `srcs/`: Core implementation files.
- `bo/`: Core implementation bonus files.
- `head/`: Header files.
- `map/`: Example map files in .ber format.
- `images/`: Sprites used in the game.

### Controls
- `W / A / S / D`: Move the player up, left, down, and right.
- `ESC`: Exit the game.

### How It Works
1. Map Loading:
- Reads a .ber map file and parses its layout.
2. Game Loop:
- Renders the map and updates the player's position in real time.
3. Win/Lose Conditions:
- The game ends when the player reaches the exit after collecting all collectibles.

### Example Map
```bash
111111
1P0C01
100001
1C0E11
111111
```
- `1`: Wall
- `0`: Walkable space
- `P`: Player start position
- `C`: Collectibles
- `E`: Exit

### References
- MinilibX Documentation
- Tutorials on 2D game development