import asyncio


async def greet(name):
    print(f"Hello, {name}")
    await asyncio.sleep(1)
    print(f"How are you doing, {name}")


async def main():
    await asyncio.gather(
        greet("solomon"),
        greet("moniaar"),
        greet("yahia")
    )


asyncio.run(main())
