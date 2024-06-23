import requests
from bs4 import BeautifulSoup
import re

def download_twitter_video(url, filename):
    headers = {
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/91.0.4472.124 Safari/537.36'
    }

    response = requests.get(url, headers=headers)
    soup = BeautifulSoup(response.content, 'html.parser')

    # Extract the video URL
    scripts = soup.find_all('script')

    video_url = None
    for script in scripts:
        if 'video_url' in str(script):
            match = re.search(r'video_url":"(.*?)"', str(script))
            if match:
                video_url = match.group(1).replace('\\u0026', '&')
                break

    if video_url:
        # Download the video
        video_response = requests.get(video_url, stream=True)
        with open(filename, 'wb') as file:
            for chunk in video_response.iter_content(chunk_size=1024):
                if chunk:
                    file.write(chunk)
        print(f'Video downloaded as {filename}')
    else:
        print('Video URL not found. Please check the tweet URL.')

# Example usage
tweet_url = 'https://x.com/CarlBMenger/status/1804047926102053119'
download_twitter_video(tweet_url, 'twitter_video.mp4')

