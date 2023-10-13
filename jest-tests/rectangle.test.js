const { Rectangle, Square } = require('./rectangle')

describe(Rectangle, () => {
  it('calculates the area of a Rectangle', () => {
    const rectangle = new Rectangle(4, 5)
    expect(rectangle.area()).toBe(20)
  })

  it('calculates the circumference of a Rectangle', () => {
    const rectangle = new Rectangle(4, 5)
    expect(rectangle.circumference()).toBe(18)
  })
})

describe(Square, () => {
  it('calculates the area of a Square', () => {
    const square = new Square(3)
    expect(square.area()).toBe(9)
  })

  it('calculates the circumference of a Square', () => {
    const square = new Square(3)
    expect(square.circumference()).toBe(12)
  })
})
