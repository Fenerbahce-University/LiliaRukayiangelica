# System Programming Term Project  
Student Information System (Docker & CI/CD Enabled)

---

## Project Overview

This project is a System Programming course assignment that demonstrates how to build, containerize, and manage a C++ application with a PostgreSQL database using Docker, Docker Compose, and GitHub Actions.  
The project follows a 4-week plan and applies modern DevOps practices such as containerization and continuous integration.

---

## Architecture

- C++ Application container  
- PostgreSQL Database container  
- Docker Compose for orchestration  
- GitHub Actions for CI pipeline  

---

## Team Roles

- Student 1: Project Manager & Documentation  
- Student 2: Docker & DevOps Engineer  
- Student 3: C++ Application Developer  

---

## Technologies Used

- C++  
- PostgreSQL  
- Docker  
- Docker Compose  
- GitHub Actions (CI)  
- GitHub Projects & Issues  
- Docker Hub  

---

## Docker & DevOps Work (Student 2)

### 1. Docker Infrastructure
- Created `Dockerfile` for the C++ application  
- Created `Dockerfile.db` for PostgreSQL  
- Configured `docker-compose.yml` to run:
  - Application container
  - Database container  

Added:
- Custom Docker network  
- Persistent volume for database data  
- Environment variables  
- Restart policies  
- Resource limits (CPU & memory)  
- Health checks  
- Logging configuration  
- `.dockerignore` file to optimize builds  

---

### 2. Docker Compose Usage

To start the full system:
docker compose up -d

### 3. Docker Hub Integration (Mandatory)

Docker Hub account was created using a school email.
Public images pushed to Docker Hub:

C++ Application Image
https://hub.docker.com/r/rokaia011/liliarukayiangelica-app

PostgreSQL Image
https://hub.docker.com/r/rokaia011/liliarukayiangelica-postgres
Both images are public and used directly by Docker Compose.

### 4. CI Pipeline (GitHub Actions)

A Continuous Integration pipeline was implemented using GitHub Actions.
The CI pipeline:
-Runs on push and pull requests
-Checks out the repository
-Builds Docker images for:
  -Application
  -Database
-Validates Docker Compose configuration
-Uses Docker Hub credentials securely via GitHub Secrets
This ensures the project builds correctly before merging.

## How to Run the Project

-Clone the repository
-Navigate to the project root
-Run:docker compose up -d
-To stop:docker compose down

