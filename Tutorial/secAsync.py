import asyncio

async def some():
    print("Hello")
    await asyncio.sleep(2)
    print("World")

asyncio.run(some())
