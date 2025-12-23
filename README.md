

# Week 1 – Project Setup & Planning

## Overview

The first week of the System Programming Project focused on team formation, environment setup, repository organization, and initial planning for development, Docker, and continuous integration. The goal was to establish a solid and standardized foundation for the rest of the project.



## Team Organization

* Created the project team and defined clear roles for each member.
* Established collaboration rules to ensure code quality and accountability.
* All contributions are reviewed through pull requests before merging.



## Repository Setup

* Created a GitHub repository using the official university email.
* Invited all team members to the repository.
* Implemented a structured branching strategy:

  * `main` – stable production-ready code
  * `develop` – active development branch
  * `feature/*` – individual feature development branches
* Enforced pull request reviews to maintain code quality.



## Development Environment

Each developer prepared their environment by installing the following tools:

* C++ compiler and required libraries
* CMake
* Docker
* Git
* PostgreSQL and related libraries

This standardization helps reduce compatibility issues across different systems.



## Project Management

* Created a GitHub Project Board for task tracking.
* Used GitHub Issues for:

  * Planning and research
  * Technical discussions
  * Environment setup tasks
  * Documentation tracking
* Issues are used to maintain clear communication and a documented history of decisions.


## Individual Contributions

### Project Manager

* Organized the repository structure.
* Managed project documentation.
* Coordinated tasks among team members.
* Ensured workflow consistency and progress tracking.



### Docker / DevOps Engineer

* Created a Docker Hub account using an official educational email.
* Researched Docker requirements for the project.
* Planned PostgreSQL container usage.
* Researched continuous integration tools and workflows.



### Docker & CI Planning

* Developed a Docker requirements document describing:

  * PostgreSQL database container
  * C++ application container
  * Networking, volumes, environment variables, logging, and data persistence
* Planned a continuous integration pipeline including:

  * Build steps for the C++ application
  * Basic testing stages
  * Execution timing
* Added a placeholder for future GitHub Actions workflows.
* All documentation was submitted via feature branches and merged through pull requests.
* Related GitHub issues were created and tracked.



### C++ Development Planning

* Designed the C++ application structure.
* Defined folder organization:

  * Header files
  * Source files
  * Test files
* Built a basic Make configuration for compilation and linking.
* Documented how the C++ application will interact with the PostgreSQL database.
* Created a roadmap outlining upcoming development phases.


