# Tulirb
Ruby bindings for the [Tulip indicators technical analysis indicator library](https://tulipindicators.org/). This can be used to build tools for financial markets trading and technical analysis in Ruby.

## Installation

Install the gem and add to the application's Gemfile by executing:

    $ bundle add tulirb

If bundler is not being used to manage dependencies, install the gem by executing:

    $ gem install tulirb

## Usage

This library consists of a single module: `Tulirb`. All indicator functions are singleton methods of this module. All methods have the same interface, they take a 2d array of inputs as the first argument and relevant options as kwargs. The output is a 2d array of the result(s).

Example:

```ruby
require("tulirb")

# Exponential Moving Average
Tulirb.ema([[1.2, 1.5, 1, 1.8]], period: 5) # => [[1.2, 1.35, 1.175, 1.4875]]

# Stochastic Oscillator
Tulirb.stoch(
    [
        [30, 35, 40, 25, 20, 23, 56, 24, 87],
        [18, 22, 20, 24, 25, 63, 23, 100, 65],
        [45, 60, 35, 50, 30, 43, 23, 109, 87],
    ],
    k_period: 3,
    k_slowing_period: 3,
    d_period: 3
) # => [[650, 720.2020202020201, 120.20202020202017], [480.80808080808083, 690.0673400673401, 496.80134680134677]]
```

## Documentation
Find documentation for all indicator functions [here](https://www.rubydoc.info/github/ozone4real/tulirb/main/Tulirb). Information about the input and option parameters for each indicator is also available in the `Tulirb::INDICATORS_INFO` hash.

## Development

After checking out the repo, run `bin/setup` to install dependencies. Then, run `rake` to compile the C extension, detect memory leaks in the C extension, and run tests. [AddressSanitizer](https://github.com/google/sanitizers/wiki/addresssanitizer) is used to detect leaks and other memory issues in the C extension but it is not available on some operating systems and CPU architectures. I recommend running the `rake` command with Docker in a Linux environment. A Dockerfile and docker-compose.yml file are in the root directory to help with this. You can run `rake` with Docker by executing:

    $ docker compose run tulirb rake

You can also run `bin/console` for an interactive prompt that will allow you to experiment.

To install this gem onto your local machine, run `bundle exec rake install`. To release a new version, update the version number in `version.rb`, and then run `bundle exec rake release`, which will create a git tag for the version, push git commits and the created tag, and push the `.gem` file to [rubygems.org](https://rubygems.org).

## Contributing

Bug reports and pull requests are welcome on GitHub at https://github.com/ozone4real/tulirb. This project is intended to be a safe, welcoming space for collaboration, and contributors are expected to adhere to the [code of conduct](https://github.com/ozone4real/tulirb/blob/main/CODE_OF_CONDUCT.md).

## License

The gem is available as open source under the terms of the [MIT License](https://opensource.org/licenses/MIT).

## Code of Conduct

Everyone interacting in the Tulirb project's codebases, issue trackers, chat rooms, and mailing lists is expected to follow the [code of conduct](https://github.com/ozone4real/tulirb/blob/main/CODE_OF_CONDUCT.md).
