# frozen_string_literal: true

require_relative("tulirb/version")
require_relative("tulirb/tulirb")

module Tulirb
  class Error < StandardError; end
  extend(Ext)

  class << self
    # Vector Absolute Value.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/abs)
    def abs(inputs)
      super(inputs, [])
    end

    # Vector Arccosine.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/acos)
    def acos(inputs)
      super(inputs, [])
    end

    # Accumulation/Distribution Line.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/ad)
    def ad(inputs)
      super(inputs, [])
    end

    # Vector Addition.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/add)
    def add(inputs)
      super(inputs, [])
    end

    # Accumulation/Distribution Oscillator.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param short_period [Numeric] Short Period.
    # @param long_period [Numeric] Long Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/adosc)
    def adosc(inputs, short_period:, long_period:)
      super(inputs, [short_period, long_period])
    end

    # Average Directional Movement Index.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/adx)
    def adx(inputs, period:)
      super(inputs, [period])
    end

    # Average Directional Movement Rating.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/adxr)
    def adxr(inputs, period:)
      super(inputs, [period])
    end

    # Awesome Oscillator.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/ao)
    def ao(inputs)
      super(inputs, [])
    end

    # Absolute Price Oscillator.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param short_period [Numeric] Short Period.
    # @param long_period [Numeric] Long Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/apo)
    def apo(inputs, short_period:, long_period:)
      super(inputs, [short_period, long_period])
    end

    # Aroon.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/aroon)
    def aroon(inputs, period:)
      super(inputs, [period])
    end

    # Aroon Oscillator.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/aroonosc)
    def aroonosc(inputs, period:)
      super(inputs, [period])
    end

    # Vector Arcsine.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/asin)
    def asin(inputs)
      super(inputs, [])
    end

    # Vector Arctangent.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/atan)
    def atan(inputs)
      super(inputs, [])
    end

    # Average True Range.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/atr)
    def atr(inputs, period:)
      super(inputs, [period])
    end

    # Average Price.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/avgprice)
    def avgprice(inputs)
      super(inputs, [])
    end

    # Bollinger Bands.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @param stddev [Numeric] Stddev.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/bbands)
    def bbands(inputs, period:, stddev:)
      super(inputs, [period, stddev])
    end

    # Balance of Power.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/bop)
    def bop(inputs)
      super(inputs, [])
    end

    # Commodity Channel Index.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/cci)
    def cci(inputs, period:)
      super(inputs, [period])
    end

    # Vector Ceiling.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/ceil)
    def ceil(inputs)
      super(inputs, [])
    end

    # Chande Momentum Oscillator.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/cmo)
    def cmo(inputs, period:)
      super(inputs, [period])
    end

    # Vector Cosine.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/cos)
    def cos(inputs)
      super(inputs, [])
    end

    # Vector Hyperbolic Cosine.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/cosh)
    def cosh(inputs)
      super(inputs, [])
    end

    # Crossany.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/crossany)
    def crossany(inputs)
      super(inputs, [])
    end

    # Crossover.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/crossover)
    def crossover(inputs)
      super(inputs, [])
    end

    # Chaikins Volatility.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/cvi)
    def cvi(inputs, period:)
      super(inputs, [period])
    end

    # Linear Decay.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/decay)
    def decay(inputs, period:)
      super(inputs, [period])
    end

    # Double Exponential Moving Average.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/dema)
    def dema(inputs, period:)
      super(inputs, [period])
    end

    # Directional Indicator.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/di)
    def di(inputs, period:)
      super(inputs, [period])
    end

    # Vector Division.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/div)
    def div(inputs)
      super(inputs, [])
    end

    # Directional Movement.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/dm)
    def dm(inputs, period:)
      super(inputs, [period])
    end

    # Detrended Price Oscillator.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/dpo)
    def dpo(inputs, period:)
      super(inputs, [period])
    end

    # Directional Movement Index.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/dx)
    def dx(inputs, period:)
      super(inputs, [period])
    end

    # Exponential Decay.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/edecay)
    def edecay(inputs, period:)
      super(inputs, [period])
    end

    # Exponential Moving Average.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/ema)
    def ema(inputs, period:)
      super(inputs, [period])
    end

    # Ease of Movement.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/emv)
    def emv(inputs)
      super(inputs, [])
    end

    # Vector Exponential.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/exp)
    def exp(inputs)
      super(inputs, [])
    end

    # Fisher Transform.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/fisher)
    def fisher(inputs, period:)
      super(inputs, [period])
    end

    # Vector Floor.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/floor)
    def floor(inputs)
      super(inputs, [])
    end

    # Forecast Oscillator.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/fosc)
    def fosc(inputs, period:)
      super(inputs, [period])
    end

    # Hull Moving Average.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/hma)
    def hma(inputs, period:)
      super(inputs, [period])
    end

    # Kaufman Adaptive Moving Average.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/kama)
    def kama(inputs, period:)
      super(inputs, [period])
    end

    # Klinger Volume Oscillator.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param short_period [Numeric] Short Period.
    # @param long_period [Numeric] Long Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/kvo)
    def kvo(inputs, short_period:, long_period:)
      super(inputs, [short_period, long_period])
    end

    # Lag.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/lag)
    def lag(inputs, period:)
      super(inputs, [period])
    end

    # Linear Regression.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/linreg)
    def linreg(inputs, period:)
      super(inputs, [period])
    end

    # Linear Regression Intercept.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/linregintercept)
    def linregintercept(inputs, period:)
      super(inputs, [period])
    end

    # Linear Regression Slope.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/linregslope)
    def linregslope(inputs, period:)
      super(inputs, [period])
    end

    # Vector Natural Log.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/ln)
    def ln(inputs)
      super(inputs, [])
    end

    # Vector Base-10 Log.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/log10)
    def log10(inputs)
      super(inputs, [])
    end

    # Moving Average Convergence/Divergence.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param short_period [Numeric] Short Period.
    # @param long_period [Numeric] Long Period.
    # @param signal_period [Numeric] Signal Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/macd)
    def macd(inputs, short_period:, long_period:, signal_period:)
      super(inputs, [short_period, long_period, signal_period])
    end

    # Market Facilitation Index.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/marketfi)
    def marketfi(inputs)
      super(inputs, [])
    end

    # Mass Index.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/mass)
    def mass(inputs, period:)
      super(inputs, [period])
    end

    # Maximum In Period.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/max)
    def max(inputs, period:)
      super(inputs, [period])
    end

    # Mean Deviation Over Period.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/md)
    def md(inputs, period:)
      super(inputs, [period])
    end

    # Median Price.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/medprice)
    def medprice(inputs)
      super(inputs, [])
    end

    # Money Flow Index.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/mfi)
    def mfi(inputs, period:)
      super(inputs, [period])
    end

    # Minimum In Period.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/min)
    def min(inputs, period:)
      super(inputs, [period])
    end

    # Momentum.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/mom)
    def mom(inputs, period:)
      super(inputs, [period])
    end

    # Mesa Sine Wave.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/msw)
    def msw(inputs, period:)
      super(inputs, [period])
    end

    # Vector Multiplication.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/mul)
    def mul(inputs)
      super(inputs, [])
    end

    # Normalized Average True Range.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/natr)
    def natr(inputs, period:)
      super(inputs, [period])
    end

    # Negative Volume Index.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/nvi)
    def nvi(inputs)
      super(inputs, [])
    end

    # On Balance Volume.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/obv)
    def obv(inputs)
      super(inputs, [])
    end

    # Percentage Price Oscillator.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param short_period [Numeric] Short Period.
    # @param long_period [Numeric] Long Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/ppo)
    def ppo(inputs, short_period:, long_period:)
      super(inputs, [short_period, long_period])
    end

    # Parabolic SAR.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param acceleration_factor_step [Numeric] Acceleration Factor Step.
    # @param acceleration_factor_maximum [Numeric] Acceleration Factor Maximum.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/psar)
    def psar(inputs, acceleration_factor_step:, acceleration_factor_maximum:)
      super(inputs, [acceleration_factor_step, acceleration_factor_maximum])
    end

    # Positive Volume Index.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/pvi)
    def pvi(inputs)
      super(inputs, [])
    end

    # Qstick.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/qstick)
    def qstick(inputs, period:)
      super(inputs, [period])
    end

    # Rate of Change.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/roc)
    def roc(inputs, period:)
      super(inputs, [period])
    end

    # Rate of Change Ratio.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/rocr)
    def rocr(inputs, period:)
      super(inputs, [period])
    end

    # Vector Round.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/round)
    def round(inputs)
      super(inputs, [])
    end

    # Relative Strength Index.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/rsi)
    def rsi(inputs, period:)
      super(inputs, [period])
    end

    # Vector Sine.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/sin)
    def sin(inputs)
      super(inputs, [])
    end

    # Vector Hyperbolic Sine.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/sinh)
    def sinh(inputs)
      super(inputs, [])
    end

    # Simple Moving Average.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/sma)
    def sma(inputs, period:)
      super(inputs, [period])
    end

    # Vector Square Root.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/sqrt)
    def sqrt(inputs)
      super(inputs, [])
    end

    # Standard Deviation Over Period.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/stddev)
    def stddev(inputs, period:)
      super(inputs, [period])
    end

    # Standard Error Over Period.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/stderr)
    def stderr(inputs, period:)
      super(inputs, [period])
    end

    # Stochastic Oscillator.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param k_period [Numeric] K Period.
    # @param k_slowing_period [Numeric] K Slowing Period.
    # @param d_period [Numeric] D Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/stoch)
    def stoch(inputs, k_period:, k_slowing_period:, d_period:)
      super(inputs, [k_period, k_slowing_period, d_period])
    end

    # Stochastic RSI.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/stochrsi)
    def stochrsi(inputs, period:)
      super(inputs, [period])
    end

    # Vector Subtraction.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/sub)
    def sub(inputs)
      super(inputs, [])
    end

    # Sum Over Period.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/sum)
    def sum(inputs, period:)
      super(inputs, [period])
    end

    # Vector Tangent.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/tan)
    def tan(inputs)
      super(inputs, [])
    end

    # Vector Hyperbolic Tangent.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/tanh)
    def tanh(inputs)
      super(inputs, [])
    end

    # Triple Exponential Moving Average.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/tema)
    def tema(inputs, period:)
      super(inputs, [period])
    end

    # Vector Degree Conversion.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/todeg)
    def todeg(inputs)
      super(inputs, [])
    end

    # Vector Radian Conversion.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/torad)
    def torad(inputs)
      super(inputs, [])
    end

    # True Range.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/tr)
    def tr(inputs)
      super(inputs, [])
    end

    # Triangular Moving Average.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/trima)
    def trima(inputs, period:)
      super(inputs, [period])
    end

    # Trix.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/trix)
    def trix(inputs, period:)
      super(inputs, [period])
    end

    # Vector Truncate.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/trunc)
    def trunc(inputs)
      super(inputs, [])
    end

    # Time Series Forecast.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/tsf)
    def tsf(inputs, period:)
      super(inputs, [period])
    end

    # Typical Price.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/typprice)
    def typprice(inputs)
      super(inputs, [])
    end

    # Ultimate Oscillator.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param short_period [Numeric] Short Period.
    # @param medium_period [Numeric] Medium Period.
    # @param long_period [Numeric] Long Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/ultosc)
    def ultosc(inputs, short_period:, medium_period:, long_period:)
      super(inputs, [short_period, medium_period, long_period])
    end

    # Variance Over Period.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/var)
    def var(inputs, period:)
      super(inputs, [period])
    end

    # Vertical Horizontal Filter.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/vhf)
    def vhf(inputs, period:)
      super(inputs, [period])
    end

    # Variable Index Dynamic Average.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param short_period [Numeric] Short Period.
    # @param long_period [Numeric] Long Period.
    # @param alpha [Numeric] Alpha.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/vidya)
    def vidya(inputs, short_period:, long_period:, alpha:)
      super(inputs, [short_period, long_period, alpha])
    end

    # Annualized Historical Volatility.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/volatility)
    def volatility(inputs, period:)
      super(inputs, [period])
    end

    # Volume Oscillator.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param short_period [Numeric] Short Period.
    # @param long_period [Numeric] Long Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/vosc)
    def vosc(inputs, short_period:, long_period:)
      super(inputs, [short_period, long_period])
    end

    # Volume Weighted Moving Average.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/vwma)
    def vwma(inputs, period:)
      super(inputs, [period])
    end

    # Williams Accumulation/Distribution.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/wad)
    def wad(inputs)
      super(inputs, [])
    end

    # Weighted Close Price.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/wcprice)
    def wcprice(inputs)
      super(inputs, [])
    end

    # Wilders Smoothing.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/wilders)
    def wilders(inputs, period:)
      super(inputs, [period])
    end

    # Williams %R.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/willr)
    def willr(inputs, period:)
      super(inputs, [period])
    end

    # Weighted Moving Average.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/wma)
    def wma(inputs, period:)
      super(inputs, [period])
    end

    # Zero-Lag Exponential Moving Average.
    # @param inputs [Array<Array<Numeric>>] 2d array of inputs.
    # @param period [Numeric] Period.
    # @return [Array<Array<Numeric>>] 2d array of results.
    # @see Official TulipIndicators docs for detailed explanation and formular for this indicator function: (https://tulipindicators.org/zlema)
    def zlema(inputs, period:)
      super(inputs, [period])
    end
  end
end
