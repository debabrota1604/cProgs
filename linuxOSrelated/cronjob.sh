#!/bin/bash

# Set the source and destination directories
SOURCE_DIR="/home/user/important_files"  # Replace with your source directory
BACKUP_DIR="/home/user/backups"        # Replace with your backup directory

# Create a timestamped backup file
TIMESTAMP=$(date +%Y%m%d)
BACKUP_FILE="$BACKUP_DIR/backup_$TIMESTAMP.tar.gz"

# Create the backup
tar -czvf "$BACKUP_FILE" "$SOURCE_DIR"

# Print a message to the log (optional)
echo "Backup created: $BACKUP_FILE" >> /home/user/backup.log  # Replace with your log file path

### The below steps to be executed manually...

# Set permissions for the backup file
#chmod +x backup.sh

# Edit the crontab file
#crontab -e

# Add the following line to schedule the script to run daily at 2 AM
# 0 2 * * * /path/to/backup.sh