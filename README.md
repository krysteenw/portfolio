# Christine Gitumbi — Portfolio

Personal portfolio site showcasing full-stack, mobile, and identity &amp; access
management engineering projects.

**Live site:** enable GitHub Pages (see below) or open `index.html` directly.

## Stack

Plain HTML, CSS, and JavaScript — no build step, no dependencies. Fonts load
from Google Fonts (Inter + JetBrains Mono).

```
index.html     Page markup
css/styles.css Styling, theming (dark/light via CSS custom properties)
js/main.js     Theme toggle, mobile nav, footer year
projects/      Source for smaller projects hosted directly in this repo
```

## Running locally

No build tools required — just serve the folder:

```bash
python3 -m http.server 8000
# then open http://localhost:8000
```

## Deploying with GitHub Pages

1. Merge this branch into your default branch.
2. In the repo, go to **Settings → Pages**.
3. Under **Build and deployment**, set **Source** to `Deploy from a branch`,
   branch `main`, folder `/ (root)`.
4. Save. GitHub will publish the site at
   `https://krysteenw.github.io/portfolio/` (or your custom domain, if one
   is configured via a `CNAME` file).

## Projects featured

- **[CSOC](https://github.com/krysteenw/CSOC)** — Corporate Security Operations Center web app (React, Node.js, MongoDB) — [live](https://csoc.christinegitumbi.com)
- **[Moodish](https://github.com/krysteenw/MoodishApp)** — Flutter health & wellness app — [capstone artifacts](https://github.com/krysteenw/CAPSTONE-PROJECT-CS499-)
- **[Travlr Getaways](https://github.com/krysteenw/CS-465-fullstack)** — Full-stack MEAN application
- **[IAM Analyst Portfolio](https://github.com/krysteenw/IAM-Analyst)** — Identity & access management home-lab projects
- **[CS 370 Pirate Intelligent Agent](https://github.com/krysteenw/CS-370)** — Deep Q-learning maze agent
- **[Chada Tech Clocks](projects/chada-tech-clocks/)** — Dual-format C++ clock (source lives in this repo)
- **[Grazioso Salvare Dashboard](https://github.com/krysteenw/CS-340)** — Python/Dash/MongoDB rescue-animal dashboard
- **[Contact Service](https://github.com/krysteenw/CS-320)** — TDD Java backend with JUnit
- **[My 3D Study Desk](https://github.com/krysteenw/CS-330)** — OpenGL 3D scene with custom lighting/textures
- **[Course Planner](https://github.com/krysteenw/CS-300)** — Data structures & algorithm analysis in C++
- **[Corner Grocery Tracker](https://github.com/krysteenw/Cplusplus-program)** — C++ CLI file-processing tool
- **[SNHU Travel](https://github.com/krysteenw/CS250-Portfolio)** — Agile Java UI coursework

Additional coursework and design documents (CS 360, CS 305, CS 255, CS 230) are linked from the
Education section of the site itself.
