
<!DOCTYPE html>
<html>
<head>
    <title>File Size Checker</title>
</head>
<body>

<h2>Select a File to See Its Size</h2>
<input type="file" id="fileInput">
<p id="result"></p>

<script>
document.getElementById("fileInput").addEventListener("change", function() {
    const file = this.files[0];

    if (file) {
        const sizeBytes = file.size;
        const sizeKB = (sizeBytes / 1024).toFixed(2);
        const sizeMB = (sizeKB / 1024).toFixed(2);

        document.getElementById("result").innerHTML =
            "File Name: " + file.name + "<br>" +
            "Size: " + sizeBytes + " bytes<br>" +
            "Size: " + sizeKB + " KB<br>" +
            "Size: " + sizeMB + " MB";
    } else {
        document.getElementById("result").innerHTML = "No file selected.";
    }
});
</script>

</body>
</html>
