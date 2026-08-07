# Text Adventure Game

## About

Text Adventure Game is a simple command-line adventure game written in C. The player discovers a mysterious cave and must make choices that determine the outcome of the adventure. The game demonstrates basic branching logic and the use of functions to organize a larger program.

## Features

* Explore a mysterious cave
* Make decisions that affect the outcome
* Multiple endings
* Win, escape, and game-over outcomes
* Invalid choice handling
* Simple command-line interface

## Game Flow

```text
main()
  ↓
startGame()
  ├── Enter → cave()
  │             ├── Open → winEnding()
  │             └── Run → escapeEnding()
  │
  └── Leave → escapeEnding()
```

## Concepts Used

* Variables
* Functions
* Function prototypes
* `printf()`
* `scanf()`
* `switch` statement
* `if`, `else if`, `else`
* `case` and `default`
* User input
* Branching logic

## Future Improvements

* [ ] Add more locations and scenes
* [ ] Add more endings
* [ ] Add an inventory system
* [ ] Add game state
* [ ] Add random events
* [ ] Add multiple rounds
* [ ] Improve input validation
* [ ] Add a restart option
