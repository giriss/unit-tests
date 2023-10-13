const { power } = require('./utils')

describe(power, function() {
  it('returns 4 for 2 power of 2', function() {
    expect(power(2, 2)).toBe(4)
  })

  it('returns 64 for 4 power of 3', function() {
    expect(power(4, 3)).toBe(64)
  })
})
