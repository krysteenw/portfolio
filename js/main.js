(function () {
  "use strict";

  // ---- Theme toggle ----
  var root = document.documentElement;
  var toggle = document.getElementById("themeToggle");
  var STORAGE_KEY = "portfolio-theme";

  function applyTheme(theme) {
    if (theme === "light") {
      root.setAttribute("data-theme", "light");
      toggle.setAttribute("aria-pressed", "true");
    } else {
      root.removeAttribute("data-theme");
      toggle.setAttribute("aria-pressed", "false");
    }
  }

  var stored = null;
  try { stored = localStorage.getItem(STORAGE_KEY); } catch (e) { /* storage unavailable */ }
  if (stored) applyTheme(stored);

  toggle.addEventListener("click", function () {
    var isLight = root.getAttribute("data-theme") === "light";
    var next = isLight ? "dark" : "light";
    applyTheme(next);
    try { localStorage.setItem(STORAGE_KEY, next); } catch (e) { /* storage unavailable */ }
  });

  // ---- Mobile nav ----
  var navToggle = document.getElementById("navToggle");
  var mobileNav = document.getElementById("mobileNav");

  navToggle.addEventListener("click", function () {
    var open = mobileNav.classList.toggle("open");
    navToggle.setAttribute("aria-expanded", open ? "true" : "false");
  });

  mobileNav.querySelectorAll("a").forEach(function (link) {
    link.addEventListener("click", function () {
      mobileNav.classList.remove("open");
      navToggle.setAttribute("aria-expanded", "false");
    });
  });

  // ---- Footer year ----
  var yearEl = document.getElementById("year");
  if (yearEl) yearEl.textContent = new Date().getFullYear();
})();
