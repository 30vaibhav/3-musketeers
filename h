<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Language Learning Center</title>
    <link rel="stylesheet" href="style.css">
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }

        header {
            background-color: #333;
            color: #fff;
            padding: 20px;
            text-align: center;
        }

        nav ul {
            list-style-type: none;
            padding: 0;
        }

        nav ul li {
            display: inline;
            margin-right: 20px;
        }

        nav ul li a {
            color: #fff;
            text-decoration: none;
        }

        .hero {
            background-image: url('background.jpg');
            background-size: cover;
            color: #fff;
            text-align: center;
            padding: 100px 0;
        }

        .cta-button {
            background-color: #ff6f61;
            color: #fff;
            padding: 10px 20px;
            border: none;
            border-radius: 5px;
            text-decoration: none;
            font-weight: bold;
            transition: background-color 0.3s ease;
        }

        .cta-button:hover {
            background-color: #ff453a;
        }

        #courses {
            padding: 50px 0;
            text-align: center;
        }

        .course-card {
            background-color: #f9f9f9;
            border-radius: 10px;
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
            padding: 20px;
            margin-bottom: 30px;
        }

        .course-card img {
            width: 100%;
            border-radius: 10px;
            margin-bottom: 20px;
        }

        .course-card h3 {
            color: #333;
            margin-bottom: 10px;
        }

        .course-card p {
            color: #666;
            margin-bottom: 20px;
        }

        .course-card a {
            background-color: #ff6f61;
            color: #fff;
            padding: 10px 20px;
            border: none;
            border-radius: 5px;
            text-decoration: none;
            font-weight: bold;
            transition: background-color 0.3s ease;
        }

        .course-card a:hover {
            background-color: #ff453a;
        }

        #about, #contact {
            background-color: #f9f9f9;
            padding: 50px 0;
            text-align: center;
        }

        footer {
            background-color: #333;
            color: #fff;
            padding: 20px 0;
            text-align: center;
        }
    </style>
</head>
<body>
    <header>
        <nav>
            <ul>
                <li><a href="#home">Home</a></li>
                <li><a href="#courses">Courses</a></li>
                <li><a href="#about">About Us</a></li>
                <li><a href="#contact">Contact</a></li>
            </ul>
        </nav>
    </header>

    <section id="home" class="hero">
        <div>
            <h1>Welcome to the Language Learning Center</h1>
            <p>Maintain a positive attitude. Learning a language is an achievement in itself</p>
            <a href="#courses" class="cta-button">Explore Courses</a>
        </div>
    </section>

    <section id="courses">
        <h2>Our Courses</h2>
        <div class="course-card">
            <img src="course1.jpg" alt="Course 1">
            <h3>JAPANESE for Beginners</h3>
            <p>Start your journey to becoming fluent in Japanese.</p>
            <a href="#">Learn More</a>
        </div>
        <div class="course-card">
            <img src="language.png" alt="Course 2">
            <h3>Japanese to English Conversation</h3>
            <p>Improve your Japanese language skills through conversation.</p>
            <a href="#">Learn More</a>
        </div>
    </section>

    <section id="about">
        <h2>About Us</h2>
        <p>We are passionate about language learning and dedicated to helping you achieve your goals.</p>
    </section>

    <section id="contact">
        <h2>Contact Us</h2>
        <p>If you have any questions or inquiries, please feel free to contact us:</p>
        <address>
            <p>Email: <a href="mailto:info@example.com">info@example.com</a></p>
            <p>Phone: <a href="tel:+123456789">+1 (234) 567-89</a></p>
        </address>
    </section>

    <footer>
        <p>&copy; 2023 Language Learning Center</p>
    </footer>
</body>
</html>
