#!/usr/bin/env python3
import pyttsx3

def main():
    engine = pyttsx3.init()
    engine.say("Hello, this is a test.")
    engine.runAndWait()


if __name__ == "__main__":
    main()
