require_relative 'rectangle'

RSpec.describe '2D' do
  describe Rectangle do
    context Rectangle.new(2, 4) do
      it { is_expected.to have_attributes(area: 8, circumference: 12) }
    end

    context Rectangle.new(3, 5) do
      it { is_expected.to have_attributes(area: 15, circumference: 16) }
    end
  end

  describe Square do
    context Square.new(1) do
      it { is_expected.to have_attributes(area: 1, circumference: 4) }
    end

    context Square.new(2) do
      it { is_expected.to have_attributes(area: 4, circumference: 8) }
    end
  end
end
