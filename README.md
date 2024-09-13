# Maven automatic versioning demo

This demo shows how to use [Maven profiles](https://maven.apache.org/guides/introduction/introduction-to-profiles.html)
to create distinct versions for development and release versions of a piece of software.

The [pom.xml](src/pom.xml) defines two profiles, 'develop-branch' and 'release-branch', where 'develop-branch' is the default.
Profile 'release-branch' is actived when the 'branch' variable has been set to main.
The 'branch' variable has to be passed to the Maven command line, for example:

```bash
mvn clean install -Dbranch=main
```

Normally 'main' is replaced with an automatic variable from your build system, for example ```$BRANCH_NAME``` in Jenkins.

## How to run the demo

You can run the demo locally if you have recent versions of Maven, CMake and C++ compiler installed.
If not you can use a Vagrant box to create a sandbox VM where you can run the commands.

### Local

```bash
cd src
mvn clean install -Dbranch=main
./target/cmake-build/app/version_exe
mvn clean install -Dbranch=feature/something_new
./target/cmake-build/app/version_exe
```

### Vagrant

#### Prerequisites for Vagrant

- [VirtualBox](https://www.virtualbox.org/), tested with 7.0.20.
- [Vagrant](https://www.vagrantup.com/), tested with 2.4.1

#### Instructions

```bash
vagrant up
vagrant ssh
cd /vagrant/src
mvn clean install -Dbranch=main
./target/cmake-build/app/version_exe
mvn clean install -Dbranch=feature/something_new
./target/cmake-build/app/version_exe
```

#### Clean up

When logged out of the VM:

```bash
vagrant destroy -f
```
