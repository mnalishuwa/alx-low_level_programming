#!/usr/bin/python3


"""
Function to compute the perimeter
of an island on an m x n grid
"""


def island_perimeter(grid):
    """
    Returns the perimet of a grid,
    1 is considered land, 0 is water
    """
    water, land = 0, 1
    i, j = water, land
    perimeter = 0
    max_cell_perimeter = 4
    rows = len(grid)
    columns = 0

    if grid:
        columns = len(grid[0])
    for row in range(rows):
        for column in range(columns):
            neighbors = [(row - 1, column), (row, column + 1),
                         (row + 1, column), (row, column - 1)]
            real_neighbors = [coord for coord in neighbors
                              if (coord[i] >= 0 and coord[i] < rows)
                              and (coord[j] >= 0 and coord[j] < columns)]

            if grid[row][column] == land:
                perimeter += max_cell_perimeter - real_neighbors
                for coord in real_neighbors:
                    if grid[coord[i]][coord[j]] == water:
                        perimeter += 1
    return perimeter
