const { Rectangle } = require('./rectangle')
const { Cube, Cuboid } = require('./cuboid')

describe(Cuboid, () => {
  it('calculates the volume of a Cuboid', () => {
    const baseRectangle = new Rectangle(4, 5)
    const cuboid = new Cuboid(baseRectangle, 6)
    expect(cuboid.volume()).toBe(120)
  })

  it('calculates the surface area of a Cuboid', () => {
    const baseRectangle = new Rectangle(4, 5)
    const cuboid = new Cuboid(baseRectangle, 6)
    expect(cuboid.surfaceArea()).toBe(148)
  })
})

describe(Cube, () => {
  it('calculates the volume of a Cube', () => {
    const cube = new Cube(3)
    expect(cube.volume()).toBe(27)
  })

  it('calculates the surface area of a Cube', () => {
    const cube = new Cube(3)
    expect(cube.surfaceArea()).toBe(54)
  })
})
