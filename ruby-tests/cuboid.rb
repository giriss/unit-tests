require_relative 'rectangle'

class Cuboid
  def initialize(base, height)
    @base = base
    @height = height
  end

  def volume
    @base.area * @height
  end

  def surface_area
    2 * (@base.area + @base.length * @height + @base.width * @height)
  end

  def to_s
    "Cuboid(base: #{@base}, height: #{@height})"
  end
end

class Cube < Cuboid
  def initialize(side_length)
    super(Square.new(side_length), side_length)
  end

  def to_s
    "Cube(side_length: #{@height})"
  end
end
