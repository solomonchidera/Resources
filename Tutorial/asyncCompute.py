import asyncio

async def comput(x, y):
    print(f"Computing {x} + {y}")
    await asyncio.sleep(2)
    return x + y

async def main():
    task = asyncio.create_task(comput(1, 2))
    result = await task
    print(f"Result: {result}")


asyncio.run(main())
