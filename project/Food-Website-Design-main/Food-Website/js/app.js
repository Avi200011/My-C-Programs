$(document).ready(function(){
    $('.food-slider').slick({
        slidesToShow:3,
        slidesToScroll:1,
        autoplay:true,

        // changing the default button by the custom one
        prevArrow:".prev-btn",
        nextArrow:".next-btn",
    });
})