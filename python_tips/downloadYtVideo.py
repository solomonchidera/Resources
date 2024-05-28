# Import Youtube class from pytube module
from pytube import YouTube

# Save your youtube link to a variable
video_url = "https://www.youtube.com/watch?v=o5IySpAkThg"

# Initialize a youtube object

yt = YouTube(video_url)

# Get/Fetch the highest resolution
stream = yt.streams.get_highest_resolution()

# Download your video
stream.download()
