FROM aswf/ci-usd:2021
ADD include/pxr /usr/local/include/pxr
RUN curl --proto '=https' -sSf https://sh.rustup.rs > /tmp/rustinit.sh
RUN bash /tmp/rustinit.sh -y --default-toolchain=1.52.0

