<!DOCTYPE html>
<html>
<head>
    <title>Delivery Pin Drop</title>
    <link rel="stylesheet" href="https://unpkg.com/leaflet@1.9.4/dist/leaflet.css" />
    <style>
        #map { height: 400px; width: 100%; border-radius: 10px; }
        .container { font-family: sans-serif; max-width: 600px; margin: 20px auto; text-align: center; }
        button { background: #007bff; color: white; border: none; padding: 10px 20px; border-radius: 5px; cursor: pointer; margin-top: 10px; }
    </style>
</head>
<body>

<div class="container">
    <h2>Pin Your Delivery Address</h2>
    <p>Drag the marker to your exact location</p>
    <div id="map"></div>
    <div id="coordinates">
        <p>Selected Coordinates: <br><strong><span id="latlng">Move the pin...</span></strong></p>
    </div>
    <button onclick="shareLocation()">Confirm Delivery Location</button>
</div>

<script src="https://unpkg.com/leaflet@1.9.4/dist/leaflet.js"></script>
<script>
    // Initialize map centered on a general area (0,0)
    var map = L.map('map').setView([20.5937, 78.9629], 5); 

    L.tileLayer('https://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png', {
        attribution: '© OpenStreetMap'
    }).addTo(map);

    // Add a draggable marker
    var marker = L.marker([20.5937, 78.9629], {draggable: true}).addTo(map);

    // Update coordinates text when marker is moved
    marker.on('dragend', function(e) {
        var pos = marker.getLatLng();
        document.getElementById('latlng').innerHTML = pos.lat.toFixed(6) + ", " + pos.lng.toFixed(6);
    });

    function shareLocation() {
        var pos = marker.getLatLng();
        alert("Location Saved!\nLat: " + pos.lat + "\nLng: " + pos.lng + "\n\nIn a real app, this would be sent to your driver's dashboard.");
    }
</script>

</body>
</html>
