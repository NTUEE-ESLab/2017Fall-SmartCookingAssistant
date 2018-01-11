function get(url) {
    console.log(url)
    return QuickStreams.create(function(mainStream) {
        var xhr = new XMLHttpRequest()
        xhr.onreadystatechange = (function() {
            var json = JSON.parse(xhr.responseText).recipes
            mainStream.close(json)
        })
        xhr.open('GET', url, true)
        xhr.send()
    })
}
