FROM ubuntu:20.04

COPY scripts/install-build-dependencies.sh /tmp/install-build-dependencies.sh

RUN DEBIAN_FRONTEND=noninteractive TZ=Etc/UTC \
apt-get update && apt-get install -y \
wget \
tzdata

RUN /tmp/install-build-dependencies.sh
