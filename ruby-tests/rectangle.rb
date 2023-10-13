class Rectangle
  attr_reader :length, :width

  def initialize(length, width)
    @length = length
    @width = width
  end

  def circumference
    2 * (@length + @width)
  end

  def area
    @length * @width
  end

  def to_s
    "Rectangle(length: #{@length}, width: #{@width})"
  end
end

class Square < Rectangle
  def initialize(side_length)
    super(side_length, side_length)
  end

  def to_s
    "Square(side_length: #{@length})"
  end
end
