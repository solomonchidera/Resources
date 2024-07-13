#!/usr/bin/env python3
"""
Module Name: textTS
Module description: Convert webpage[text] to speech and read out loud
Keywords: webscraping, TTS
"""


import requests
from bs4 import BeautifulSoup
import pyttsx3

def fetch_webpage_content(url):
    response = requests.get(url)
    soup = BeautifulSoup(response.content, 'html.parser')
    return soup

def extract_text(soup):
    for script in soup(['script', 'style']):
        script.decompose()
    text = ' '.join(soup.stripped_strings)
    return text

def text_to_speech(text):
    engine = pyttsx3.init()
    engine.say(text)
    engine.runAndWait()

def read_webpage(url):
    soup = fetch_webpage_content(url)
    text = extract_text(soup)
    text_to_speech(text)

# Example usage
url = 'https://www.example.com'
read_webpage(url)

