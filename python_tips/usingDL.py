import yt_dlp

video_url = input("Provide the link/url please ")

ydl_opts = {
    'format':'best',
    'outtmpl': '%(title)s %(ext)s',
}

with yt_dlp.YoutubeDL(ydl_opts) as ydl:
    ydl.download([video_url])
