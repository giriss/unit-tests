import unittest
from rectangle import Rectangle, Square


class TestRectangle(unittest.TestCase):
    def setUp(self):
        """Initial setup for test cases."""
        self.rect1 = Rectangle(5, 10)
        self.rect2 = Rectangle(7, 14)

    def test_rectangle_area(self):
        """Test the area of the rectangle."""
        self.assertEqual(self.rect1.area(), 50)
        self.assertEqual(self.rect2.area(), 98)

    def test_rectangle_circumference(self):
        """Test the circumference of the rectangle."""
        self.assertEqual(self.rect1.circumference(), 30)
        self.assertEqual(self.rect2.circumference(), 42)


class TestSquare(unittest.TestCase):
    def setUp(self):
        """Initial setup for test cases."""
        self.square1 = Square(5)
        self.square2 = Square(7)

    def test_square_area(self):
        """Test the area of the square."""
        self.assertEqual(self.square1.area(), 25)
        self.assertEqual(self.square2.area(), 49)

    def test_square_circumference(self):
        """Test the circumference of the square."""
        self.assertEqual(self.square1.circumference(), 20)
        self.assertEqual(self.square2.circumference(), 28)
