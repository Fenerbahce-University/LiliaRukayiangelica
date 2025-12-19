# Docker Requirements Documentation

## Project Containers

### 1. PostgreSQL Database Container
- Base image: postgres:latest
- Runs as a detached container
- Environment variables:
  - POSTGRES_DB
  - POSTGRES_USER
  - POSTGRES_PASSWORD
- Uses Docker volume for data persistence
- Database port (5432) exposed only inside Docker network
- Logs accessed using docker logs
- Health check planned using pg_isready

### 2. C++ Application Container
- Base image: ubuntu:22.04
- Required packages installed using apt-get:
  - g++
  - cmake
  - libpqxx-dev
- Application runs in foreground mode
- Uses CMD instruction to start application
- Environment variables passed using -e or --env-file
- Logs accessed using docker logs

## Networking
- Custom Docker bridge network
- Containers communicate using container names
- No public exposure of database container

## Volumes and Persistence
- Named Docker volume or bind mount for PostgreSQL data directory
- Ensures data persists after container removal

## Logging and Debugging
- Container logs monitored using docker logs
- docker inspect used for debugging container configuration
