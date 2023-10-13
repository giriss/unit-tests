require_relative 'cuboid'
require_relative 'rectangle'

RSpec.describe '3D' do
  describe Cuboid do
    context Cuboid.new(Rectangle.new(2, 4), 6) do
      it { is_expected.to have_attributes(volume: 48, surface_area: 88) }
    end

    context Cuboid.new(Rectangle.new(10, 20), 30) do
      it { is_expected.to have_attributes(volume: 6_000, surface_area: 2_200) }
    end
  end

  describe Cube do
    context Cube.new(1) do
      it { is_expected.to have_attributes(volume: 1, surface_area: 6) }
    end

    context Cube.new(2) do
      it { is_expected.to have_attributes(volume: 8, surface_area: 24) }
    end
  end
end
