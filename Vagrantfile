Vagrant.configure("2") do |config|
    # Use Ubuntu 22.04 LTS as the base box
    config.vm.box = "ubuntu/jammy64"
  
    # Assign a static IP address
    config.vm.network "private_network", ip: "192.168.8.17"
  
    # Mount the host directory to /vagrant in the guest
    config.vm.synced_folder ".", "/vagrant"
  
    # Provisioning script to install required applications
    config.vm.provision "shell", inline: <<-SHELL
        # Update package list
        sudo apt-get update
        
        # Install Maven
        sudo apt-get install -y maven

        # Install CMake
        sudo apt-get install -y cmake

        # Install build-essential for C++ compiler
        sudo apt-get install -y build-essential

        # Optionally, install git for version control if needed
        sudo apt-get install -y git

        # Ensure that the latest versions of packages are installed
        sudo apt-get upgrade -y
    SHELL
  
    # Set up some basic VM settings
    config.vm.provider "virtualbox" do |vb|
        vb.memory = "2048"
        vb.cpus = 2
    end
end
