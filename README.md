## s1aptester + free5GC with Docker.

## Project Description

In this repository, we developed an environment for simulating UE and ENB using s1aptester from facebookexperimental connected into 5g core from free5gcore. This work is on-going.

For more information:
* [free5gc](https://www.free5gc.org/)
* [S1APtester](https://github.com/facebookexperimental/S1APTester)


## Dependencies

* [Docker](https://docs.docker.com/install/)
* [Docker Compose](https://docs.docker.com/compose/install/)


## Base Image
Each box of project is based on a compiled free5gc image. To build this image use the follow command:
``sudo docker build -t free5gc-base .``

## Running
To run all boxes and Web interface use the follow command:
``sudo docker-compose up -d``
