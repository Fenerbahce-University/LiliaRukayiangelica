

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

  * main – stable production-ready code
  * develop – active development branch
  * feature – individual feature development branches
* Enforced pull request reviews to maintain code quality.



## Development Environment

Each developer prepared their environment by installing the following tools:

* C++ compiler and required libraries
* CMake
* Docker
* Git
* PostgreSQL and related libraries





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



## Week 2 Progress

* Focused on Docker container creation
* PostgreSQL container configured
* C++ application container created
* docker-compose.yml configured to run all services
* Containers successfully started using Docker Compose
* Inter-container network communication verified

**Next Steps (Week 3):**

* Implement database connection in C++
* Develop CRUD operations for the Student Information System

## Week 3 Progress

* Focused on C++ application development and database integration
* Database connection implemented in C++ using libpqxx
* PostgreSQL connection successfully established from the application container
* Core CRUD operations implemented for the Student Information System
* Create student records
* Read/list student records
* Update student information
* Delete student records
* Error handling added for database and runtime exceptions
* Basic logging implemented for application events and errors
* Unit tests written for database connection and CRUD functionality
* Test results committed to the GitHub repository
* C++ application Docker image updated and pushed to Docker Hub

## **Week 4 Project Report: Testing, Documentation, and Presentation**

### **Week 4 Overview**

Week 4 marked the final and most critical phase of the project, focusing on system validation, documentation completion, and preparation for project delivery. As the Project Manager, the primary objective during this week was to ensure that all system components were fully integrated, tested, documented, and ready for final presentation and deployment.

### **Technical Progress and Achievements**

During this week, the team successfully conducted **integrated system testing** using Docker Compose. All services, including the C++ application, database, and supporting components, were deployed together in a unified containerized environment. This allowed the team to verify correct inter-container communication, service dependencies, and overall system stability.

In addition to functional testing, **performance and stability testing** were carried out to evaluate system behavior under normal operating conditions. The system demonstrated reliable performance, with no critical failures observed during testing. Minor issues identified during this phase were promptly resolved.

The project was then **fully deployed using Docker Compose**, confirming that the application can be launched consistently across environments. Final Docker images were built, properly tagged, and pushed to **Docker Hub**, ensuring version consistency and readiness for distribution.

### **Documentation Completion**

A major focus of Week 4 was the completion and refinement of project documentation. The following documents were finalized to ensure clarity, usability, and maintainability:

* **README.md**: Provides a comprehensive overview of the project, system architecture, and usage instructions.
* **INSTALL.md**: Contains detailed installation and setup steps for deploying the system using Docker Compose.
* **MANUAL.md**: Serves as a user guide explaining how to operate and interact with the system.
* **CONTRIBUTING.md**: Defines contribution guidelines, coding standards, and collaboration rules for future development.

All documentation was reviewed for accuracy and completeness and uploaded to the GitHub repository.

### **GitHub Activity and Repository Management**

The team met all **GitHub activity expectations** for Week 4. Each team member made at least three meaningful commits. Final Pull Requests were reviewed and merged following established review guidelines. The GitHub Wiki was completed with weekly reports, meeting notes, and a decision log.

A **release tag** was created to mark the final version of the project, ensuring traceability and version control. The GitHub repository structure reflects a clean and well-organized final state.

### **Presentation and Demonstration Preparation**

In preparation for project submission and evaluation, **presentation slides** were created to clearly explain the project objectives, architecture, technologies used, and achieved outcomes. A live **project demonstration** was prepared, showcasing the system running successfully in a Dockerized environment.

### **Project Management Summary**

From a project management perspective, Week 4 successfully concluded all planned objectives. The project was delivered on time, met all technical and documentation requirements, and demonstrated effective teamwork and coordination. The structured workflow, consistent communication, and adherence to best practices contributed significantly to the successful completion of the project.







