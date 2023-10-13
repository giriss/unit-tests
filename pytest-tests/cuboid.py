from rectangle import Rectangle, Square


class Cuboid:
    """
    Represents a 3D cuboid with a rectangular base and height.
    Provides methods to compute volume and surface area.
    """
    def __init__(self, base: Rectangle, height: float):
        self.base = base
        self.height = height

    def volume(self) -> float:
        """Returns the volume of the cuboid."""
        return self.base.area() * self.height

    def surface_area(self) -> float:
        """Returns the surface area of the cuboid."""
        lw = self.base.area()
        lh = self.base.length * self.height
        wh = self.base.width * self.height
        return 2 * (lw + lh + wh)


class Cube(Cuboid):
    """
    Represents a 3D cube, which is a special type of cuboid
    where the length, width, and height are all equal.
    """
    def __init__(self, side_length: float):
        base = Square(side_length)
        super().__init__(base, side_length)
