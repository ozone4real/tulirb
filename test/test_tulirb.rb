# frozen_string_literal: true

require("test_helper")

class TestTulirb < Minitest::Test
  def test_that_it_has_a_version_number
    refute_nil(::Tulirb::VERSION)
  end

  SAMPLE_DATA.each do |indicator|
    define_method("test_#{indicator[:name]}") do
      expected = truncate(indicator[:outputs])
      actual = truncate(
        Tulirb::Ext.public_send(indicator[:name], indicator[:inputs], indicator[:options])
      )
      assert_equal(expected, actual)
    end
  end

  private

  def truncate(arr)
    return nil unless arr

    arr.flatten.map { _1.truncate(6) }
  end
end
