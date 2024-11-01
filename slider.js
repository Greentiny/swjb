window.onload = function() {
  const header = document.getElementById("header");
  window.onscroll = function() {
      if (window.scrollY > 50) { 
          header.classList.add("scrolled");
      } else {
          header.classList.remove("scrolled");
      }
  };
};


let currentSlide = 0;
const slides = document.querySelectorAll('.slides img');

function showNextSlide() {
  currentSlide = (currentSlide + 1) % slides.length;
  document.querySelector('.slides').style.transform = `translateX(-${currentSlide * 100}%)`;
}

// 3초마다 이미지 전환
setInterval(showNextSlide, 3000);