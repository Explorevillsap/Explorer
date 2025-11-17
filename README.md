# EXPLORER
<HTML>
  <head>    
    <title> A THRIVING VILLAGE : JAMUHAI</title>
  </head>
      <BODY>
        <!doctype html>
<html lang="en">
<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="width=device-width,initial-scale=1" />
  <meta name="description" content="Simple responsive website template" />
  <title>My Website</title>

  <!-- Basic styles (responsive, accessible, modern) -->
  <style>
    :root{
      --bg:#0f1724;
      --card:#0b1220;
      --muted:#9aa4b2;
      --accent:#06b6d4;
      --accent-2:#7c3aed;
      --surface:#111827;
      --radius:12px;
      --gap:18px;
      font-family: Inter, system-ui, -apple-system, "Segoe UI", Roboto, "Helvetica Neue", Arial;
    }

    *{box-sizing:border-box}
    html,body{height:100%}
    body{
      margin:0;
      color:#e6eef6;
      background:linear-gradient(180deg,var(--bg),#071022 120%);
      -webkit-font-smoothing:antialiased;
      -moz-osx-font-smoothing:grayscale;
      line-height:1.5;
      padding:0 20px;
    }

    /* Layout */
    .container{
      max-width:1100px;
      margin:28px auto;
    }

    header{
      display:flex;
      align-items:center;
      justify-content:space-between;
      gap:12px;
      padding:12px 16px;
    }

    .brand{
      display:flex;
      align-items:center;
      gap:12px;
      text-decoration:none;
      color:inherit;
    }
    .logo{
      width:44px;height:44px;
      border-radius:10px;
      background:linear-gradient(135deg,var(--accent),var(--accent-2));
      display:grid;place-items:center;
      font-weight:700;
      color:#021021;
      box-shadow:0 4px 18px rgba(0,0,0,0.35);
    }

    nav{
      display:flex;
      gap:14px;
      align-items:center;
    }
    nav a{
      color:var(--muted);
      text-decoration:none;
      padding:8px 10px;
      border-radius:8px;
      font-weight:600;
      font-size:0.95rem;
    }
    nav a:hover{color:var(--accent)}

    /* Mobile nav toggle */
    .menu-btn{display:none; background:none;border:0;color:var(--muted);font-size:1.1rem;}

    /* Hero */
    .hero{
      display:grid;
      grid-template-columns:1fr 420px;
      gap:28px;
      align-items:center;
      margin-top:24px;
    }

    .card{
      background:linear-gradient(180deg, rgba(255,255,255,0.02), rgba(255,255,255,0.01));
      border-radius:var(--radius);
      padding:24px;
      box-shadow: 0 6px 30px rgba(2,6,23,0.6);
    }

    h1{
      font-size:2rem;
      margin:0 0 10px 0;
      line-height:1.05;
    }
    p.lead{color:var(--muted);margin:0 0 18px 0}

    .cta{
      display:inline-block;
      padding:10px 16px;
      border-radius:10px;
      background:linear-gradient(90deg,var(--accent),var(--accent-2));
      color:#021021;
      text-decoration:none;
      font-weight:700;
      margin-right:10px;
    }
    .secondary{
      padding:10px 14px;
      border-radius:10px;
      border:1px solid rgba(255,255,255,0.04);
      color:var(--muted);
      text-decoration:none;
    }

    /* Features */
    .features{
      display:grid;
      grid-template-columns:repeat(3,1fr);
      gap:14px;
      margin-top:20px;
    }
    .feature{
      padding:14px;
      border-radius:10px;
      background:linear-gradient(180deg, rgba(255,255,255,0.01), rgba(255,255,255,0.00));
    }
    .feature h3{margin:0 0 8px 0;font-size:1rem}
    .feature p{margin:0;color:var(--muted);font-size:0.95rem}

    /* Contact form */
    form{
      display:flex;
      flex-direction:column;
      gap:10px;
    }
    label{font-size:0.9rem;color:var(--muted)}
    input,textarea{
      background:transparent;
      border:1px solid rgba(255,255,255,0.06);
      padding:10px 12px;
      color:inherit;
      border-radius:8px;
      min-height:40px;
    }
    textarea{min-height:110px;resize:vertical;padding-top:10px}
    .btn{
      padding:10px 14px;border-radius:10px;border:0;font-weight:700;
      background:linear-gradient(90deg,var(--accent),var(--accent-2));
      color:#021021;cursor:pointer;
    }

    footer{
      margin-top:36px;padding:18px 8px;color:var(--muted);text-align:center;font-size:0.9rem;
    }

    /* Responsive */
    @media (max-width:980px){
      .hero{grid-template-columns:1fr;grid-auto-rows:auto}
      .features{grid-template-columns:repeat(2,1fr)}
    }
    @media (max-width:640px){
      nav{display:none}
      .menu-btn{display:inline-block}
      .features{grid-template-columns:1fr}
      header{gap:8px}
    }

    /* small niceties */
    .muted{color:var(--muted)}
    .small{font-size:0.9rem}
  </style>
</head>
<body>
  <div class="container">
    <header>
      <a href="#" class="brand" aria-label="Home">
        <div class="logo">MW</div>
        <div>
          <div style="font-weight:700">My Website</div>
          <div style="font-size:0.8rem;color:var(--muted)">A simple starter template</div>
        </div>
      </a>

      <nav aria-label="Main navigation">
        <a href="#home">Home</a>
        <a href="#features">Features</a>
        <a href="#about">About</a>
        <a href="#contact">Contact</a>
      </nav>

      <button class="menu-btn" id="menuBtn" aria-expanded="false" aria-controls="mobileNav">☰</button>
    </header>

    <!-- Mobile nav (hidden on desktop) -->
    <div id="mobileNav" style="display:none;margin-bottom:14px;">
      <div class="card">
        <a href="#home" style="display:block;padding:8px 0">Home</a>
        <a href="#features" style="display:block;padding:8px 0">Features</a>
        <a href="#about" style="display:block;padding:8px 0">About</a>
        <a href="#contact" style="display:block;padding:8px 0">Contact</a>
      </div>
    </div>

    <main>
      <section id="home" class="hero">
        <div class="card">
          <h1>Beautiful, simple, and responsive starter</h1>
          <p class="lead">This is a clean HTML template you can extend. Semantic tags, accessible markup, and a bit of interactive JavaScript included — no external libraries required.</p>

          <a class="cta" href="#contact">Get in touch</a>
          <a class="secondary" href="#features">See features</a>

          <div class="features" id="features" style="margin-top:20px;">
            <div class="feature">
              <h3>Responsive</h3>
              <p>Works on phones, tablets, and desktops. Simple grid layout adapts to screen size.</p>
            </div>
            <div class="feature">
              <h3>Accessible</h3>
              <p>Keyboard-friendly navigation, semantic elements, and good contrast out of the box.</p>
            </div>
            <div class="feature">
              <h3>Customizable</h3>
              <p>Change colors and spacing easily using CSS variables at the top of the file.</p>
            </div>
          </div>
        </div>

        <aside class="card" aria-labelledby="about-heading">
          <h2 id="about-heading" style="margin-top:0">About</h2>
          <p class="muted small">Use this side column for an intro, a photo, or quick links. The layout keeps content readable and focused.</p>

          <dl style="margin-top:12px">
            <dt style="font-weight:700">Built:</dt>
            <dd class="muted small">Single-file HTML/CSS/JS — no build tools required</dd>
            <dt style="font-weight:700;margin-top:8px">License:</dt>
            <dd class="muted small">Free to use and modify</dd>
          </dl>
        </aside>
      </section>

      <section id="contact" style="margin-top:22px">
        <div class="card">
          <h2 style="margin-top:0">Contact</h2>
          <p class="muted">Send a quick message — this form is validated with a tiny bit of JavaScript.</p>

          <form id="contactForm" novalidate>
            <div>
              <label for="name">Name</label>
              <input id="name" name="name" type="text" required placeholder="Your name">
            </div>

            <div>
              <label for="email">Email</label>
              <input id="email" name="email" type="email" required placeholder="you@example.com">
            </div>

            <div>
              <label for="message">Message</label>
              <textarea id="message" name="message" required placeholder="Write something..."></textarea>
            </div>

            <div style="display:flex;gap:10px;align-items:center;margin-top:6px">
              <button class="btn" type="submit">Send message</button>
              <div id="formStatus" class="muted small" aria-live="polite"></div>
            </div>
          </form>
        </div>
      </section>
    </main>

    <footer>
      © <span id="year"></span> My Website — Made with care.
    </footer>
  </div>

  <!-- Small JS for interactivity -->
  <script>
    // Set year in footer
    document.getElementById('year').textContent = new Date().getFullYear();

    // Mobile nav toggle
    const menuBtn = document.getElementById('menuBtn');
    const mobileNav = document.getElementById('mobileNav');
    menuBtn.addEventListener('click', () => {
      const open = mobileNav.style.display === 'block';
      mobileNav.style.display = open ? 'none' : 'block';
      menuBtn.setAttribute('aria-expanded', String(!open));
    });

    // Tiny form validation and faux "send" (no network)
    const form = document.getElementById('contactForm');
    const status = document.getElementById('formStatus');

    form.addEventListener('submit', (e) => {
      e.preventDefault();
      status.textContent = '';
      const name = form.name.value.trim();
      const email = form.email.value.trim();
      const message = form.message.value.trim();

      if (!name || !email || !message) {
        status.textContent = 'Please fill in all fields.';
        return;
      }
      // basic email pattern
      const emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
      if (!emailPattern.test(email)) {
        status.textContent = 'Please enter a valid email.';
        return;
      }

      // Simulate send (replace this with real network code)
      status.textContent = 'Sending...';
      setTimeout(() => {
        status.textContent = 'Message sent! (demo only — no backend connected)';
        form.reset();
      }, 700);
    });
  </script>
</body>
</html>
      </BODY>
</HTML>    

