require 'minitest/autorun'
require_relative 'rectangle'

class TestRectangle < Minitest::Test
  def test_circumference
    square = Rectangle.new(2, 3)
    assert_equal 10, square.circumference
  end

  def test_area
    square = Rectangle.new(2, 3)
    assert_equal 6, square.area
  end
end
