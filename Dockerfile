ARG RUBY_VERSION=3.4
FROM registry.docker.com/library/ruby:$RUBY_VERSION-slim AS base
WORKDIR /tulirb
COPY . /tulirb
RUN apt-get update -qq && \
  apt-get install -y build-essential \
  git
RUN bundle install
CMD [ "/bin/bash" ]
ENTRYPOINT [ "/bin/bash", "-c" ]