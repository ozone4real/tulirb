# frozen_string_literal: true

require("test_helper")

class TestTulirb < Minitest::Test
  def test_that_it_has_a_version_number
    refute_nil(::Tulirb::VERSION)
  end

  SAMPLE_DATA.each do |indicator|
    indicator_name = indicator[:name].to_sym
    define_method("test_#{indicator_name}") do
      expected = truncate(indicator[:outputs])
      actual = truncate(
        Tulirb::Ext.public_send(indicator_name, indicator[:inputs], indicator[:options])
      )
      assert_equal(expected, actual)

      options = Tulirb::INDICATORS_INFO[indicator_name][:options]
                .map(&:to_sym)
                .zip(indicator[:options])
                .to_h
      actual = truncate(
        Tulirb.public_send(indicator_name, indicator[:inputs], **options)
      )
      assert_equal(expected, actual)
    end
  end

  def test_indicators_info_hash_immutable
    assert_raises(FrozenError) do
      Tulirb::INDICATORS_INFO[:ema] = { foo: "bar" }
    end
  end

  private

  def truncate(arr)
    return nil unless arr

    arr.flatten.map { |element| element.truncate(6) }
  end
end
