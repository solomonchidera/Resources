#!/usr/bin/env python3
# Import Youtube class from pytube module
from pytube import YouTube

# Save your youtube link in a variable

video_url = input("Provide the link: ")

# Initialize a youtube object

yt = YouTube(video_url)

# Get/Fetch the highest resolution
stream = yt.streams.get_highest_resolution()

# Download your video
stream.download()
