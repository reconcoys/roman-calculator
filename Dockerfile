FROM ubuntu:14.04

RUN apt-get update && apt-get install -y \
    build-essential \
    check \
    git \
    nano \
    pkg-config \
    libbsd-dev

RUN git clone https://github.com/reconcoys/roman-calculator.git /tmp

CMD ["/bin/bash"]