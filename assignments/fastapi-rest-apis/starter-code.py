from fastapi import FastAPI

app = FastAPI(title="Student Tasks API")

@app.get("/")
def read_root():
    return {"message": "Welcome to the API!"}

# Add your routes here
# Example:
# @app.get("/tasks")
# def get_tasks():
#     return [{"id": 1, "title": "Learn FastAPI"}]
