FROM aswf/ci-usd:2021
RUN curl -L https://github.com/PixarAnimationStudios/USD/archive/refs/tags/v21.11.zip > /tmp/usd.zip
RUN unzip /tmp/usd.zip
RUN curl --proto '=https' -sSf https://sh.rustup.rs > /tmp/rustinit.sh
RUN bash /tmp/rustinit.sh -y --default-toolchain=1.52.0
RUN python USD-21.11/build_scripts/build_usd.py --no-imaging -v /usr/local/USD
