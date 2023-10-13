import pytest
from rectangle import Rectangle, Square
from cuboid import Cuboid, Cube

# Fixtures for the objects


@pytest.fixture
def rectangle():
    return Rectangle(2, 3)


@pytest.fixture
def square():
    return Square(3)


@pytest.fixture
def cuboid(rectangle: Rectangle):
    return Cuboid(rectangle, 4)


@pytest.fixture
def cube():
    return Cube(3)

# Tests for Cuboid


def test_cuboid_volume(cuboid: Cuboid):
    assert cuboid.volume() == 24


def test_cuboid_surface_area(cuboid: Cuboid):
    assert cuboid.surface_area() == 52

# Tests for Cube


def test_cube_volume(cube: Cube):
    assert cube.volume() == 27


def test_cube_surface_area(cube: Cube):
    assert cube.surface_area() == 54

# Parameterized tests


@pytest.mark.parametrize("length, width, height, expected_volume, expected_surface_area", [
    (2, 2, 2, 8, 24),
    (1, 2, 3, 6, 22)
])
def test_cuboid_varied(length, width, height, expected_volume, expected_surface_area):
    rect = Rectangle(length, width)
    cuboid = Cuboid(rect, height)

    assert cuboid.volume() == expected_volume
    assert cuboid.surface_area() == expected_surface_area


@pytest.mark.parametrize("side, expected_volume, expected_surface_area", [
    (2, 8, 24),
    (1, 1, 6)
])
def test_cube_varied(side, expected_volume, expected_surface_area):
    cube = Cube(side)

    assert cube.volume() == expected_volume
    assert cube.surface_area() == expected_surface_area
