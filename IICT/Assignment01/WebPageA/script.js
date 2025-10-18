// Navbar Scroll Functionality
document.addEventListener('DOMContentLoaded', function () {
    const navbar = document.getElementById('mainNavbar');
    const scrollThreshold = 100; 

    function checkScroll() {
        if (window.scrollY > scrollThreshold) {
            navbar.classList.add('scrolled');
        } else {
            navbar.classList.remove('scrolled');
        }
    }

    checkScroll();
    window.addEventListener('scroll', checkScroll);
});