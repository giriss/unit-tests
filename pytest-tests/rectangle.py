class Rectangle:
    """
    Represents a 2D rectangle with a length and width.
    Provides methods to compute circumference and area.
    """
    def __init__(self, length: float, width: float):
        self.length = length
        self.width = width

    def circumference(self) -> float:
        """Returns the circumference of the rectangle."""
        return 2 * (self.length + self.width)

    def area(self) -> float:
        """Returns the area of the rectangle."""
        return self.length * self.width


class Square(Rectangle):
    """
    Represents a 2D square, which is a special type of rectangle
    where the length and width are equal.
    """
    def __init__(self, side_length: float):
        super().__init__(side_length, side_length)
