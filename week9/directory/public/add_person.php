<?php

    // configuration
    require("../includes/directory_functions.php");

    if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        // TODO

        redirect("/");
    }
    else
    {
        // render add person form
        render("people/add.php");
    }

?>
