#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.
    Args:
        grid (list of list of integers): Grid representing the island.
    Returns:
        int: Perimeter of the island.
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0
    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # Check the neighboring cells
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1  # Top edge
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1  # Left edge
                if row == rows - 1 or grid[row + 1][col] == 0:
                    perimeter += 1  # Bottom edge
                if col == cols - 1 or grid[row][col + 1] == 0:
                    perimeter += 1  # Right edge
    return perimeter
