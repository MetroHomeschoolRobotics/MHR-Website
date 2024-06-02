var html = 
'<ul>\
<li><a href="index.html">Home</a></li>\
\
<li class="dropdown"><a href="about.html"><span>About</span> <i class="bi bi-chevron-down"></i></a>\
  <ul>\
    <li><a href="about.html">About</a></li>\
    <li><a href="frc-season-overview.html">FRC Season Overview</a></li>\
    <li><a href="subteam-structure.html">Our Subteam Structure</a></li>\
    <li><a href="testimonials.html">Testimonials</a></li>\
  </ul>\
</li>\
\
<li><a href="support.html">Support</a></li>\
\
<li><a href="media.html">Media</a></li>\
\
<li><a href="sponsors.html">Sponsors</a></li>\
\
<li><a href="calendar.html">Calendar</a></li>\
\
<li><a href="contact.html">Contact</a></li>\
</ul>\
<i class="bi bi-list mobile-nav-toggle"></i>';

document.getElementById('navbar').innerHTML = html;

// class="active" example
// <li><a href="index.html" class="active">Home</a></li>
// this will make it green when active but only works if nav is done traditionally. 