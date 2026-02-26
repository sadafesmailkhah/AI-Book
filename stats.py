import os

def get_file_size(file_path):
    try:
        size_bytes = os.path.getsize(file_path)
        size_kb = size_bytes / 1024
        size_mb = size_kb / 1024

        return {
            "bytes": size_bytes,
            "kilobytes": round(size_kb, 2),
            "megabytes": round(size_mb, 2)
        }

    except FileNotFoundError:
        return "File not found."
    except Exception as e:
        return f"Error: {e}"


# Example usage
file_info = get_file_size("example.txt")
print(file_info)
>>>>>>> d0e603d (addin stats in py)
