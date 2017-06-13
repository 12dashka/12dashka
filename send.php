<?php
$recipient = "12dashka34@gmail.com";
$site_name = "повідомлення з сайту Футболки";
$name = trim($_POST["Username"]);
$email = trim($_POST["email"]);
$description = trim($_POST["description"]);
$message = "Ім'я: $name \n\n email: $email \n\n коммент: $description";
$page_title = " Нова заявка з сайту\"Футболки\"";
    mail($recipient, $page_title, $message, "Content-type: text/plain; charset=\"utf-8\"\n From: $email");
echo "<script>window.location.href = '/'</script>";