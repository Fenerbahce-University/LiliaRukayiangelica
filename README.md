# System Programming Term Project

## Project Overview
This project demonstrates a containerized system programming application using Docker, Docker Compose, and GitHub Actions CI.

## Architecture
- C++ Application container
- PostgreSQL Database container
- Docker Compose for orchestration
- GitHub Actions for CI pipeline

## How to Run the Project
1. Clone the repository
2. Navigate to the project root
3. Run:
   docker compose up -d
4. To stop:
   docker compose down

## Environment Variables
The database container uses the following variables:
- POSTGRES_DB
- POSTGRES_USER
- POSTGRES_PASSWORD

## Docker Images
- Application image: rokaia011/liliarukayiangelica-app
- Database image: rokaia011/liliarukayiangelica-postgres

## CI Pipeline
A GitHub Actions CI workflow is configured to automatically build Docker images on every push and pull request.

## Branching Strategy
All development is done on feature branches. Final pull requests will be created at the end of the project.


#Final Status  
All weekly milestones have been completed successfully.
The project is stable, reproducible, and ready for final evaluation.


